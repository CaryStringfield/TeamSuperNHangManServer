// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <curl/curl.h>
#include <iostream>
#include <string>

using namespace std;

static size_t WriteCallback(void* contents, size_t size, size_t nmemb, void* userp) {
	((std::string*)userp)->append((char*)contents, size * nmemb);
	return size * nmemb;
}

int main(void)
{
	std::string word;
	CURL* curl;
	CURLcode res;

	curl_global_init(CURL_GLOBAL_ALL);
	curl = curl_easy_init();
	if (!curl) { return -1; }

	curl_easy_setopt(curl, CURLOPT_URL, "http://random-word-api.herokuapp.com/word?number=1");
	curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
	curl_easy_setopt(curl, CURLOPT_WRITEDATA, &word);

	//curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L);  //most important line in this code, this made everything work!!

	/* Perform the request, res will get the return code */
	res = curl_easy_perform(curl);

	/* Check for errors */
	if (res != CURLE_OK)
	{
		fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
	}

	std::cout << endl << "Hangman word: " << word << endl;

	/* always cleanup */
	curl_easy_cleanup(curl);
	curl_global_cleanup();

	return 0;
}
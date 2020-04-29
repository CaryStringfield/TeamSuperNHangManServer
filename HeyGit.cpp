// Test program for repo.  To perform the text add your name to the array,
// run it to make sure it works then push.

#include <iostream>


int main()
{
    std::string developers[]{ "Virgil" };
    std::cout << "Developers who have used this repo\n";
    for (std::string x : developers)
    {
        std::cout << x << std::endl;
    }

}
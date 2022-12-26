#include <iostream>

int main()
{

    int *numPtr = new int;
    // using namespace std;

    std::cout << "*numPtr: " << *numPtr << std::endl;
    std::cout << "numPtr: " << numPtr << std::endl;
    std::cout << "&numPtr: " << &numPtr << std::endl;

    *numPtr = 42;
    std::cout << "*numPtr is assigned 42" << std::endl;

    std::cout << "*numPtr: " << *numPtr << std::endl;
    std::cout << "numPtr: " << numPtr << std::endl;
    std::cout << "&numPtr: " << &numPtr << std::endl;

    return 0;
}
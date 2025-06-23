#include <iostream>

int main()
{
    int age = 30;

    switch(age)
    {
    case 6:
        std::cout << "You are in elementary school." << std::endl;
        break;
    case 12:
        std::cout << "You are in middle school." << std::endl;
        break;
    case 15:
        std::cout << "You are in high school." << std::endl;
        break;
    case 18: case 21: case 30:
        std::cout << "You are an adult" << std::endl;
        break;
     default:
        std::cout << "You are not in school." << std::endl;
        break;
    }
    
    return 0;
}
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

    enum Mood
    {
        Happy,
        Angry,
        Sad
    };

    //creating a variable of the enum type mood, and give it a value of Happy
    Mood mood = Happy;
    
    switch (mood)
    {
    case Happy:
        std::cout << "Happy" << std::endl;
        break;
    case Angry:
        std::cout << "Angry" << std::endl;
        break;
    case Sad:
        std::cout << "Sad" << std::endl;
        break;
    default:
        break;
    }

    return 0;
}
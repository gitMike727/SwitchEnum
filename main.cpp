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

    //enum are basically named integers
    enum class Mood
    {
        Happy = -1, //defaults to 0
        Angry = -2, //defaults to previous one + 1
        Sad = 10 //and so on...
    };

    //creating a variable of the enum type mood, and give it a value of Happy
    Mood mood = Mood::Sad;

    int moodInInt = (int)mood;

    Mood moodFromInt = (Mood)-1;
    
    switch (mood)
    {
    case Mood::Happy:
        std::cout << "Happy" << std::endl;
        break;
    case Mood::Angry:
        std::cout << "Angry" << std::endl;
        break;
    case Mood::Sad:
        std::cout << "Sad" << std::endl;
        break;
    default:
        std::cout << "No Mood" << std::endl;
        break;
    }

    return 0;
}
//standard libraries
#include <iostream>

//main game function to contain all logic
bool PlayGame()
{
    //game instructions
    std::cout << "\n\n ***** NEW GAME ***** \n";
    std::cout << "> You are investigating the murder of your beloved Goldfish Lennie... \n";
    std::cout << " > You suspect that it might be your sister, and you know that the evidence is on her phone...\n";
    std::cout << " > Ugh, it's PIN PROTECTED!\n";
    std::cout << " > Enter the correct pin to bust your sister!\n";

    //variable declaration for pin code values
    const int CodeA = 4;
    const int CodeB = 9;
    const int CodeC = 1;
    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    //game details
    std::cout << std::endl;
    std::cout << " + There are three digits in the pin.\n";
    std::cout << " + Together, they have a sum of: " << CodeSum << std::endl;
    std::cout << " + Together, they have a product of: " << CodeProduct << std::endl;
    std::cout << std::endl;

    //user input
    int GuessA, GuessB, GuessC;
    std::cout << "Enter the first digit:";
    std::cin >> GuessA;
    std::cout << std::endl;

    std::cout << "Enter the second digit:";
    std::cin >> GuessB;
    std::cout << std::endl;

    std::cout << "Enter the third digit:";
    std::cin >> GuessC;
    std::cout << std::endl;


    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    //game win/lose conditionals
    if (GuessSum == CodeSum && GuessProduct == CodeProduct) {
        std::cout << " > You crack the code, and start scrolling through her texts...\n";
        std::cout << " > You find a text saying \"Flushed the evidence lol\"...\n";
        std::cout << " > Excited, you show your mom, and your sister gets grounded for life...\n";
        std::cout << " > Congrats, you won!";
        //terminates loop execution
        return true;
        exit;
    }
    //if player loses
    else {
        std::cout << " > You forgot to lock the door, and your sister walks in...\n";
        std::cout << " > Angry, she grabs the phone and calls your mom... \n";
        std::cout << " > You get grounded for life for snooping... \n";
        std::cout << " > You lose!" << std::endl;
        //continues loop execution
        return false;
    }
}

//main cpp function to run game
int main()
{
    //execute game
    while (true) {
        PlayGame();
        //clears any errors
        std::cin.clear();
        //clears the buffer
        std::cin.ignore();
    }
    

    return 0;
}


#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

void print_array(int array[], int count)
{
    std::cout << "Here are your guesses: ";

    for (int i = 0; i < count; i++)
    {
        std::cout << array[i] << "\t";
    }
    std::cout << "\n\n";
}

void play_game()
{
    int guesses[251];
    int guess_count = 0;

    int random = rand() % 251;
    //std::cout << random << std::endl;
    std::cout << "Guess a number: \n";
    while (true)
    {
        int guess;
        std::cin >> guess;

        guesses[guess_count++] = guess;

        if (guess == random)
        {
            std::cout << "You win!\n\n";
            break;
        }
        else if (guess < random)
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Too low\n";
            
        }
        else
        {
            std::cin.clear();
            std::cout << "Too high\n";
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
    print_array(guesses, guess_count);

    std::cout << "You guessed " << guess_count << " times!" << "\n\n";

}

int main()
{
    srand(time(NULL));
    int choice;
    do
    {
        std::cout << "0. Quit Game\n1. Play Game\n";
        std::cin >> choice;
        switch (choice)
        {
        case 0:
            std::cout << "Bye!\n";
            return 0;
        case 1:
            play_game();
            break;
        }
    } while (choice != 0);
}
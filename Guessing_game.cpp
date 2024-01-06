#include <iostream>
#include <ctime>

int main()
{
    srand(time(NULL));
    std::cout << "------GUESS THE NUMBER BETWEEN (1-100)------\n";
    int number = rand() % 100 + 1;
    int guess;
    int tries;

    do
    {
        tries += 1;
        std::cin >> guess;

        if (guess < number)
        {
            std::cout << "Number too low!\n";
        }
        if (guess > number)
        {
            std::cout << "Number too high!\n";
        }

    } while (guess != number);

    std::cout
        << "YOU WIN!\n";
}
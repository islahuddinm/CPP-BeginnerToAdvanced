#include <iostream>
#include <string>

int main () {

	/* In C++, the % operator is the modulo operator. It calculates the remainder of a division operation.
	For example, 10 % 3 would return 1, because 10 divided by 3 is 3 with a remainder of 1.

	In the context of the code snippet you provided, rand() % 1000 generates a random number using rand() and
	then takes the remainder of dividing that number by 1000. This ensures that the result is
	between 0 and 999, which is useful for generating a random number within a specific range.*/

	//srand(time(NULL)); // srand() is used to start or give a random seed value for rand().

	int NumberToGuess = rand() % 1000; // rand() is used to do randomly the random seed value.
	int UserGuess;
	int GuessCount = 0;

	bool ContinuePlaying = true;

	while (ContinuePlaying) {

		std::cout << "Guess a number between 0 and 999!" << '\n';
		std::cin >> UserGuess;

		//int UserNumber = std::stoi(UserGuess); // "std::stoi" is to convert String Data Type to Integer Data Type
		if (NumberToGuess == UserGuess) {
			
			std::cout << "You guessed correctly. Congratulation you won the game" << '\n';
			std::cout << "You took " << GuessCount << " guesses to guess this game" << '\n';
			std::cout << '\n';
			std::cout << "Do you want to play game again? (y/n)" << '\n';

			std::string PlayAgain;

			std::cin >> PlayAgain;

			if (PlayAgain == "y") {

				NumberToGuess = rand() % 1000;
				GuessCount = 0;
			}

			else if (PlayAgain == "n") {
				
				std::cout << "Thank you for playing" << '\n';
				ContinuePlaying = false;
			}
		}

		else if (NumberToGuess > UserGuess) {

			std::cout << "My number is higher, please try again" << '\n';
			std::cout << '\n';
			GuessCount++;
		}

		else if (NumberToGuess < UserGuess) {

			std::cout << "My number is lower, please try again" << '\n';
			std::cout << '\n';
			GuessCount++;
		}
	}

	return 0;
}
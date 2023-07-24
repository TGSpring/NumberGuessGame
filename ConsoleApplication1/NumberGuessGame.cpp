
#include <iostream>
#include <string>
#include <array>



using namespace std;




int main()
{
	int NumberTOGuess = rand() %1000;
	string UserGuess;

	int GuessCount = 0;
	
	bool ContinuePlaying = true;

	while (ContinuePlaying) {

		cout << "Guess a number between 0 and 999" << endl;

		cin >> UserGuess;

		int UserNumber = stoi(UserGuess);

		if (UserNumber == NumberTOGuess) {

			cout << "You guessed correctly. You WON!!" << endl;
			cout << "It took you " << GuessCount << " guesses to guess the number." << endl;
			cout << "Do you want to play again? (y/n)?" << endl;
			string PlayAgain;

			cin >> PlayAgain;

			if (PlayAgain == "y") {
				NumberTOGuess = rand() % 1000;
				int GuessCount = 0;
			}
			else if (PlayAgain == "n") {
				cout << "Thanks for playing" << endl;
				ContinuePlaying = false;
			}

		}
		else if (UserNumber > NumberTOGuess) {
			cout << "Number is too low, try again." << endl;
			GuessCount++;

		}
		else if (UserNumber < NumberTOGuess) {
			cout << "Number is too high, try again." << endl;
			GuessCount++;
		}

	}
	

}

//Die Roller
//Demonstrates generating random numbers

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

int main()
{
	int dice;
	int numOfDice;
	bool loopvar = true;
	bool numLoop = true;

	cout << "Welcome to the Dice Roller \n";

	while (numLoop)
	{
		cout << "How many dice would you like to roll? \n";
		cout << "Enter 0 to exit. \n";
		cin >> numOfDice;
			if (numOfDice > 0)
			{
				loopvar = true;
				while (loopvar)
				{
					cout << "What kind of die would you like to roll? \n";
					cout << "Enter 0 to exit. \n";
					cin >> dice;
					srand(static_cast<unsigned int>(time(0)));
					if (dice == 1)
					{
						cout << "You already know the outcome of a 1 sided die. \n";
					}
					else if (dice >= 2)
					{
						cout << "Rolling " << numOfDice << " " << dice << " sided die... \n";
						cout << "You got: ";
						for (int i = 0; i < numOfDice; i++)
						{
							int randomNumber = rand();
							int die = (randomNumber % dice) + 1;
							cout << die << " ";
						}
						cout << "\n";
						
					}
					else if (dice == 0)
					{
						loopvar = false;
					}
					else
					{
						cout << "Positive integers only";
					}
				};
			}
			else if (numOfDice < 0)
			{
				cout << "Enter an integer greater than 0.";
			}
			else
			{
				numLoop = false;
			}
		
	};

	return 0;
}
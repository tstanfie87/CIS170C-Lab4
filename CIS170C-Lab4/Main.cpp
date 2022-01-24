// ---------------------------------------------------------------
// Programming Assignment:	LAB4
// Developer:			          Travis Stanfield
// Date Written:			11/19/2020
// Purpose:				Coin Toss and Dice Rolling program 
// ---------------------------------------------------------------

#include<iostream>
#include<string>
#include<ctime>

using namespace std;

//function prototype
string flipCoin();
int rollDice(int sides);
int numToss;



int main()
{
	char choice =' ';
	// seed the random number generator
	unsigned seed = time(0);
	int numToss = 0, numRoll=0, sides = 0;
	srand(seed);

	cout << "Welcome to our coin toss and dice rolling program\n"<<endl;
	while (choice != 'E')
	{
		cout << "What would you like to choose flip coin(C), roll a dice(D), or exit (E): ";
		cin >> choice;
		if (choice == 'C' || choice == 'c')
		{
			cout << "\nHow many times do you want to flip a coin: ";
			cin >> numToss;
			for (int i = 0; i < numToss; i++)
			{
				cout << "\nFlip " << i << " is " << flipCoin() << endl;
			}
		}
		if (choice == 'D' || choice == 'd')
		{
			cout << "\nHow many sides does the die have: ";
			cin >> sides;
			cout << "\nHow many times do you want to roll the die: ";
			cin >> numRoll;
			for (int i = 0; i < numRoll; i++)
			{
				cout << "\nRoll " << i << " is " << rollDice(sides) << endl;
			}
		}
		if (choice == 'e')
		{
			cout << "Thanks for playing!" << endl;
		}
	
	}
	
	return 0;

}
// Funtions
string flipCoin()
{
	int toss = 1 + rand() % 2;
	if (toss == 1)
	{
		return "heads";
	}
	else
	{
		return "tails";
	}
}
	
int rollDice(int sides)

{
	int numRoll = 1 + rand() % sides;
	return numRoll;

		
}



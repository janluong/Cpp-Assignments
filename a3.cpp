/*
	Janice Luong
	a3.cpp
	Harden CCSF CS 110B

	This program plays a number guessing game with a human user.
	The game will first ask the user if they are ready to play. 
	The user will think of a number between 1 and 100.
	The program will asked the user is the number is
	higher, lower, or correct.
	If the guess is correct, then the program will ask the user
	if they want to play again.
*/
#include <iostream>
using namespace std;

char guessNum(int& highestNum, int& lowestNum);

int main()
{
	int highestNum, lowestNum;
	char response;

	cout << "Ready to play? (y/n)? ";
	cin >> response;

	while(response == 'y')
	{
		highestNum = 100;
		lowestNum = 1;

		cout << "Think of a number between 1 and 100.\n";

		do
		{
			response = guessNum(highestNum, lowestNum);	
		}while(response == 'h' || response == 'l');
	}
	return 0;
}

char guessNum(int& highestNum, int& lowestNum)
{
	int currentGuess = (highestNum + lowestNum)/2;
	char response;

	cout << "Is it "<< currentGuess << " (h/l/c)? ";
	cin >> response;

	if(response == 'h')
		lowestNum = currentGuess + 1;
	else if(response == 'l')
		highestNum = currentGuess - 1;
	else if(response == 'c')
	{
		cout << "Great! Do you want to play again (y/n)? ";
		cin >> response;
	}	

	return response;		
}

/*

[jluong13@hills ~]$ g++ a3.cpp 
[jluong13@hills ~]$ a.out
Ready to play? (y/n)? y
Think of a number between 1 and 100.
Is it 50 (h/l/c)? h
Is it 75 (h/l/c)? h
Is it 88 (h/l/c)? l
Is it 81 (h/l/c)? c
Great! Do you want to play again (y/n)? y
Think of a number between 1 and 100.
Is it 50 (h/l/c)? l
Is it 25 (h/l/c)? h
Is it 37 (h/l/c)? c
Great! Do you want to play again (y/n)? n
[jluong13@hills ~]$ 

*/
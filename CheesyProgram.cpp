/*
Name: Hajer Qara
Date: 6/05/2022
File Name: CheesyProgram
Section: ITCS 2530 V0801 2021SS - C++ Programming 1

CheesyProgram.cpp:
A cheese container can hold 2.76 kg of cheese. 
Each evening, a fromager ships containers of cheese to a local grocery store. 
The cost of producing one container of cheese is $4.12, and the profit of each container of cheese is $1.45.

Write a program that does the following:

1) Prompts the user to enter the total amount of cheese produced each evening.
2) Outputs the number of containers needed to hold the cheese. (Round your answer to the nearest integer.)
3) Outputs the cost of producing the cheese.
4) Outputs the profit for producing cheese.

*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

//Constant variables
const double CHEESE_CONTAINER = 2.76;
const double COST_PER_CONTAINER = 4.12;
const double PROFIT_PER_CONTAINER = 1.45;
const int BORDER_LENGTH = 77;


int main()
{
	//Declared variables 
	string programGreeting;
	int greetingLength;
	int borderFill;
	int halfBorder;
	int totalOfCheese;
	int numberOfContainers;
	double costOfProduction;
	double profitOfProduction;

	// The greeting users will first see that informs them what the program does.
	programGreeting = " Greetings from my gouda program! ";
	greetingLength = static_cast<int>(programGreeting.length()); // counts the characters within the message

	//Calculations / preperations for the different size of borders 
	borderFill = BORDER_LENGTH - greetingLength; // allows the program to calculate how much space the greeting takes up
	halfBorder = borderFill / 2; // helps calculate how much asterisks are needed later on for the second row
	string asterisk(halfBorder, '*' ); // constructor allows us to repeat a character a specific number of times

	// Calculates how many asterisks are needed based on the size of the border 
	// and fills empty spaces with asterisks
	cout << setfill('*') << setw(BORDER_LENGTH) << "*" << endl;

	//Prints out half asterisk border then greeting then asterisk
	cout << asterisk << right << programGreeting << asterisk << endl;

	//Prints out final asterisk border and resets fill so the whitespaces don't continue printing asterisks
	cout << setw(BORDER_LENGTH) << "*" << endl << setfill(' ');

	cout << endl;

	//Prompts the user to enter total number of cheese produced 
	cout << "Please enter the total number of kilograms of cheese produced: " ;

	// The user inputs the total of cheese produced
	cin >> totalOfCheese;

	// Prints and calculates the number of containers needed by dividing how much it can hold
	cout << "The number of containers to hold the cheese is: ";

	numberOfContainers = static_cast<int>(round(totalOfCheese / CHEESE_CONTAINER)); // prevents potential data loss

	cout << setw(greetingLength-2) << numberOfContainers;

	cout << endl; // Allows the next text to appear on a new line

	// Prints and calculates the cost of production by multiplying supplies needed by cost 
	// uses to_string to change the float into a string
	// output is uses the principals of concatination
	// to format more dynamicially based on each senerio/number inputted prior. 
	cout << "The cost of producing " + to_string(numberOfContainers) + " container(s) of cheese is: $";
	costOfProduction = numberOfContainers * COST_PER_CONTAINER;
	
	cout << fixed << setprecision(2) << setw(greetingLength - 8) <<  costOfProduction;

	cout << endl; // Allows the next text to appear on a new line

	// Prints and calculates the profit of production by multiplying supplies avaiable by profit earned
	// uses to_string to change the float into a string
	// output is uses the principals of concatination
	// to format more dynamicially based on each senerio/number inputted prior.
	cout << "The profit from producing " + to_string(numberOfContainers) + " container(s) of cheese is: $";

	profitOfProduction = numberOfContainers * PROFIT_PER_CONTAINER;

	cout << fixed << setprecision(2) << setw(greetingLength - 12) << profitOfProduction;

	cout << endl; // Allows the next text to appear on a new line

	system("pause");
	return 0;
}

////////////////////////////////////////////////////////////////
// CODE THAT I TRIED BUT DID NOT END UP IN THE FINAL PROGRAM //
/*
* //Declared variables 
	string programGreeting;
	int greetingLength;
	char border;
	string borderLength;
	

	// The greeting users will first see that informs them what the program does.
	programGreeting = "Welcome to my Cheesy Program";
	greetingLength = static_cast<int>(programGreeting.length());
	border = "*";
	borderLength = string(greetingLength, border); // couldn't have a const char within the constructor
	
	cout << borderLength << endl;
	

	//System seemed to warn against using float despite ensuring everything was casted properly
	const float cheeseContainer = 2.76;

	// Didn't properly align the output into columns 
	cout << "\t" << profitOfProduction;
	cout << "\t" << costOfProduction;
	cout << "\t" << numberOfContainers;

	//I disliked how it didn't change format if the message changed
	cout << fixed << setprecision(2) << setw(20) <<  costOfProduction;
	cout << fixed << setprecision(2) << setw(16) << profitOfProduction;

	// Originally the for loop allowed the number of astrisk to equal to the length of greeting
	// and then created the astrisk border/ lines
	// This method didn't print out the proper length as seen in the example
	for (int i = 0; i <= greetingLength ; i++) {
		cout << "**";
		if (i == (greetingLength / 2)) {
			cout << endl;
			for (int i = 0; i <= (greetingLength / 2); i++) {
				cout << "*";
			};
			cout << programGreeting;
			for (int i = 0; i <= (greetingLength / 2); i++) {
				cout << "*";
			};
			cout << endl;
		};
		cout << "**";
	};


*/
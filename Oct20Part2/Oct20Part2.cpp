// Oct20Part2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<Windows.h>
#include<vector>
int main()
{
	//Part 1
	std::cout << "Enter a Character: ('a','$','etc'): ";
	char userInput;
	std::cin >> userInput;

	int numberOfCharacter = 1;
	while (userInput != 'q')
	{
		std::cout << " Enter ANOTHER character ( q to quit): ";
		std::cin >> userInput;
		numberOfCharacter++;
	}

	std::cout << "Number of Characters Entered: " << numberOfCharacter << std::endl;
	std::cout << "The final character entered was: " << userInput << std::endl;

	for (char currentChar = 'a'; currentChar <= 'z'; currentChar++)
	{
		std::cout << currentChar << std::endl;
	}
	
 }


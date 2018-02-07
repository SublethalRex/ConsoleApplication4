// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	string keywords[4] = { "mech", "hello", "gears ","pizza" };
	string hints[4] = { "giant robot", "what you say when meeting someone", "the inner workings of a machine", "yummy food" };
	string guess;
	for (int word = 0; word < 3; word++) {

		
		string jumble = keywords[word];

		int length = jumble.size();
		for (int i = 0; i < length; ++i) {
			int index1 = (rand() % length);
			int index2 = (rand() % length);
			char temp = jumble[index1];
			jumble[index1] = jumble[index2];
			jumble[index2] = temp;
		}

		while (guess != keywords[word]) {
			
			cout << "Here is the jumbled word for you to guess" << endl;
			cout << jumble << endl;
			cout << "would you like a hint?" <<endl;
			cin >> guess;
			if (guess == "yes" or guess == "Yes" or guess == "y" or guess == "Y") {
				cout << hints[word] << endl;
			}
			else if (guess == keywords[word]) {
				cout << "You guessed correctly!!" << endl;
			}
			else {
				cout << "incorrect" << endl;
			}
		}
		cout << "Congrats you guessed correct" << endl;



	}

	

	cin.get();

	return 0;
}



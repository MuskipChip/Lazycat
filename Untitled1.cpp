#include <stdio.h>
#include <cstdlib>
#include <iostream>

using namespace std;

float addition(float num1, float num2);
float subtraction(float num1, float num2);
float multiplication(float num1, float num2);
float division(float num1, float num2);

int main()
{
	cout <<"Hello! My name is Long \n";
	cout <<"This is a demo of my project so hope you enjoy it! \n";
	float number1;
	float number2;
	int choice;
	cout << "CACULATOR \n";
	cout << "Choose your opperation please. \n";
	cout << "1 = Additing. 2 = Subtracting. 3 = Multiplying. 4 = Dividing." << endl;
	cout << "Choice: ";
	cin >> choice;
	
	if(choice==1)
	{
		//Addition
		cout << "You are adding, please enter the first number. \n Number 1: ";
		cin >> number1;
		cout << "Please enter the second number. \n Number 2: ";
		cin >> number2;
		cout << "The answer is: " << addition(number1, number2) << endl;
	}
	else
	{
		if(choice==2)
		{
		//Subtraction
		cout << "You are subtracting, please enter the first number. \n Number 1: ";
		cin >> number1;
		cout << "Please enter the second number. \n Number 2: ";
		cin >> number2;
		cout << "The answer is: " << subtraction(number1, number2) << endl;
		}
		else
		{
			if(choice==3)
			{
			//Multiplication
			cout << "You are multiplying, please enter the first number. \n Number 1: ";
			cin >> number1;
			cout << "Please enter the second number. \n Number 2: ";
			cin >> number2;
			cout << "The answer is: " << multiplication(number1, number2) << endl;
			}
			else
			{
				if(choice==4)
				{
					//Division
					cout << "You are dividing, please enter the first number. \n Number 1: ";
					cin >> number1;
					cout << "Please enter the second number. \n Number 2: ";
					cin >> number2;
					if(number2==0)
					{
						cout << "Answer is undefined \n";
					}	
						else
						{
						cout << "The answer is: " << division(number1, number2) << endl;
						}
				
				}
					else
					{
						cout << "\n You must select a number between 1 and 4. \n";
					}
				
			}			
		}				
	}
}

float addition(float num1, float num2)
{
	return num1 + num2;
}
float subtraction(float num1, float num2)
{
	return num1 - num2;
}
float multiplication(float num1, float num2)
{
	return num1 * num2;
}
float division(float num1, float num2)
{
	return num1 / num2;
}


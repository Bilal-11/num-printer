// Program to accept a 5-digit number and print it in large-# format
#include<iostream>
#include<string>
using namespace std;

const char* one[] = { " #   ", "##   "," #   "," #   ", " #   ", " #   ", " #   ", "###  " };

int main()
{
	// Accept 5-digit number as a string
	char num[6];
	cout << "Enter a 5-digit number: ";
	cin >> num;

	cout << endl << "The number you entered is: " << num << endl << endl;
	
	for (int i = 0; i < 8; i++)
	{
		cout << one[i] << endl;
	}
	

	return 0;
}
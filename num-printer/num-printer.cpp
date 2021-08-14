// Program to accept a 5-digit number and print it in large-# format
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

void painter(char*);

// Array of pointers for each digit that points to all parts of the large-# format of that digit
const char* one[] = { " #   ", "##   "," #   "," #   ", " #   ", " #   ", " #   ", "###  " };
const char* two[] = {"#####  ","    #  ","    #  " ,"    #  " ,"#####  ","#      ","#      ","#####  " };
const char* three[] = { "#####   ", "	 #  ", "	 #  ", "#####   ", "	 #  ", "	 #  ", "	 #  ","#####   " };
const char* four[] = {"#       ","#       " ,"#       " ,"#  #    " , "## ###  ","   #    ","   #    " ,"   #    " };
const char* five[] = {"######  ","#       ","#       " ,"######  " ,"     #  ","     #  " ,"     #  ","#####   " };
const char* six[] = { "#####   ","#       ","#       " ,"######  ","#    #  ","#    #  ","#    #  ","#####   " };
const char* seven[] = {"######   ","      #  ","      #  " ,"      #  " ,"      #  " ,"      #  " ,"      #  " ,"      #  " };
const char* eight[] = {" ####   ","#    #  ","#    #  " ," ####   " ,"#    #  " ,"#    #  " ,"#    #  " ," ####   " };
const char* nine[] = { "#####   ","#    #  ","#    #  " ," ####   " ,"     #  " ,"     #  " ,"     #  " ," ####   " };
const char* zero[] = { " ####   ","#    #  ","#    #  " ,"#    #  " ,"#    #  " ,"#    #  " ,"#    #  " ," ####   " };

// Array of pointers to the array of pointers to each digit's large-# data
const char** digits[] = {zero,one,two,three,four,five,six,seven,eight,nine};

int main()
{
	// Accept 5-digit number as a string
	char num[6];
	cout << "Enter a 5-digit number: ";
	cin >> num;	

	// Code to rule out invalid input
	if (strlen(num) != 5)
	{
		cout << endl << "Invalid Input" << endl;
		exit(1);
	}
	else
	{
		for (int k = 0; k < 5; k++)
		{
			if (num[k] > 57 || num[k] < 48)
			{
				cout << endl << "Invalid Input" << endl;
				exit(1);
			}
		}
	}

	cout << endl;
	
	// Print the number in large-# format using the function painter
	painter(num);
		
	return 0;
}

void painter(char* n)
{
	int index[5];

	// Store each digit of entered number in array index (in order)
	for (int i = 0; i < 5; i++)
	{
		switch (n[i])
		{
		case '0':
			index[i] = 0;
			break;
		case '1':
			index[i] = 1;
			break;
		case '2':
			index[i] = 2;
			break;
		case '3':
			index[i] = 3;
			break;
		case '4':
			index[i] = 4;
			break;
		case '5':
			index[i] = 5;
			break;
		case '6':
			index[i] = 6;
			break;
		case '7':
			index[i] = 7;
			break;
		case '8':
			index[i] = 8;
			break;
		case '9':
			index[i] = 9;
			break;
		}
	}

	// Print the large-# format of the number.
	// The array index is used to go to a particular digit's large-# data and j cycles through
	// that data.
	for (int j = 0; j < 8; j++)
	{
		cout << digits[index[0]][j] << digits[index[1]][j] << digits[index[2]][j] << digits[index[3]][j] << digits[index[4]][j] << endl;
	}
}
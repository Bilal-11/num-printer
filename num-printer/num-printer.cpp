// Program to accept a 5-digit number and print it in large-# format
#include<iostream>
#include<string>
using namespace std;

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

int main()
{
	// Accept 5-digit number as a string
	char num[6];
	cout << "Enter a 5-digit number: ";
	cin >> num;

	cout << endl << "The number you entered is: " << num << endl << endl;
	
	for (int i = 0; i < 8; i++)
	{
		cout << one[i] << two[i] << three[i] << four[i] << five[i] << six[i] << seven[i] << eight[i] << nine[i] << zero[i] << endl;
	}
	

	return 0;
}
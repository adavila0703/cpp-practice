//Angel's CPP Practice

#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <regex>
#include <fstream>
#include <sstream>
#include <vector>
#include <list>
#include <bitset>
#include <stdio.h>

using namespace std;




/*
				Statuses
					Paused: In works
					Finished: Obviously Done...

*/

/*
				Status: Finished
				Question: Create a function that takes a string and returns the number (count) of vowels contained within it.
				Date: 4/26/2020
				Notes: 
				Problem: Not optimized because you have to loop 10 times for each character.
*/


void vowelcount(string vin) //use this function to check the amount of vowel count
{
	int vowelout = 0;
	string vowelcheck[10] = { "a", "e", "i", "o", "y", "A", "E", "I", "O", "U" };
	string singlecheck;
	for (int i = 0; i < vin.size(); i++)
	{
		singlecheck = vin[i];
		for (int i = 0; i < 10; i++)
		{
			if (vowelcheck[i] == singlecheck)
			{
				vowelout += 1;
			}
		}
	}
}
int count_vowels()
{
	vowelcount("Checking the vowels");
	
	return NULL;
}


/*
				Status: Paused
				Question: Change all lower case vowels to uppercase.
				Date: 4/26/2020
				Notes: This is for fun, taking the vowels from a statement and capitalizing them.

				Keynote:Command for uppercasing.
*/


void vowelcount(string vin) //use this function to check the amount of vowel count
{
	string vowelout[10];
	string vowelcheck[10] = { "a", "e", "i", "o", "y", "A", "E", "I", "O", "U" };
	string singlecheck;

	for (int i = 0; i < vin.size(); i++)
	{
		singlecheck = vin[i];
		for (int i = 0; i < 10; i++)
		{
			if (vowelcheck[i] == singlecheck)
			{
				
				transform(singlecheck.begin(), singlecheck.end(), singlecheck.begin(), ::toupper);
				vowelout[i] = singlecheck;
			}
			vowelout[i] = vin[i];
		}
	}
	for (int i = 0; i < vin.size(); i++)
	{
		cout << vowelout;
	}
}

int upper_lower()
{
	//command for uppercasing
	string a = "angel";
	transform(a.begin(), a.end(), a.begin(), ::toupper);
	cout << a;
	vowelcount("angel");
	return NULL;
}


/*
				Status: Active
				Question: PRACTICING LINKED LISTS
				Date: 4/27/2020
				Notes: 

				Keynote: 

				Printing linked list code
				list<double> l = { 3, 4, 5, 6, 7, 2, 1 };
				for (list<double>::iterator i = l.begin(); i != l.end(); i++)
				{
					cout << *i << endl;
				}
*/


list<double> takeoutnum(int a, list<double> l) 
{
	int c = a - 1;
	list<double>::iterator i = l.begin();
	for (int b = 0; b < c; b++)
	{
		i++;
	}
	*i = 0;
	return l;
}

list<double> resetlist(list<double> l) 
{
	list<double> or_list = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	if (l == or_list)
	{
	}
	else
	{
		cout << "hello" << endl;
		return or_list;
	}
}

int linky()
{
	vector<double> v = { 3, 4, 5, 6, 7, 2, 1 };
	list<double> l = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	list<double> l_new = {};
	
	//l = takeoutnum(2, l);
	//l = resetlist(l);
	

	for (list<double>::iterator i = l.begin(); i != l.end(); i++)
	{
		cout << *i << endl;
	}

	return NULL;
}


/*
				Status: Finished
				Question: Create a function that returns the number of characters shared between two words.
				Date: 4/27/2020
				Notes:

				Keynote:
*/

int charcount(string a, string b) 
{
	int amountout = 0;
	string temp1, temp2;
	for (int i = 0; i < a.size(); i++)
	{
		temp1 = a[i];
		for (int i = 0; i < b.size(); i++)
		{
			temp2 = b[i];
			if (temp1 == temp2)
			{
				amountout++;
			}
		}
	}
	return amountout;
}

int return_num()
{
	string a = "spout", b = "shout";

	cout << charcount(a, b) << endl;

	return NULL;
}

/*

				Status: Paused
				Question: Create a function that takes a string and returns true or false depending on whether 
				or not the formula is correct.
				Date: 4/27/2020
				Notes:

				Keynote:
*/


int formula() 
{

	return NULL;
}
void string_action()
{
	string a = "5 + 6", transfer;
	cout << a[2] << endl;
	cout << a.find(5);
	for (int i = 0; i < 6; i++)
	{
		//b[i] = a[i];
		//cout << b[i] << endl;
	}
}

/*
				Status:
				Question:
				Date: 
				Notes:

				Keynote:
*/

void hello()
{
	int a = 50;

	int* p = &a;

	if (*p == 50)
	{
		cout << "true" << endl;
	}
}



/*
				Status: Finished
				Problem: Write a C++ function to reverse a string.
				Date: 5/5/2020
				Notes:

				Keynote:
*/


//function to output reversed string diagonally
void diagonal(int amount)
{
	string spacing = " ";
	string finaloutput = "";
	//take the passed parameters from main function to give multiply the amount of spacing each line
	for (int i = 0; i < amount; i++)
	{
		finaloutput += spacing;
	};
	cout << finaloutput;
}

void string_fun()
{
	string strreverse = "Hello World!";
	int count = 1;
	//use reverse to reverse string var
	reverse(strreverse.begin(), strreverse.end());
	cout << strreverse << "\n\n";
	//and for fun, reverse vertically
	for (int i = 0; i <= 12; i++)
	{
		cout << strreverse[i] << endl;
	}
	//now diagonal to the right
	for (int i = 0; i <= 12; i++)
	{
		count += 2;
		cout << strreverse[i] << endl;
		diagonal(count);
	}
	//and diagonal to the left
	for (int i = 0; i <= 12; i++)
	{
		count -= 2;
		cout << strreverse[i] << endl;
		diagonal(count);
	}
}


/*
				Status: Finished
				Problem: Take a hexadecimal and convert it to binary
				Date: 5/5/2020
				Notes:
				Keynote:
*/


void hextobin()
{
	//initialize of variables
	string hex = "2A3A";
	int dectobin[100];
	char* end;
	//convert hex string var to dec
	unsigned int contodec = strtol(hex.c_str(), &end, 16);
	cout << "\n\nHex to decimal =" << contodec << endl;
	cout << "\n\nSize of var =" << sizeof(contodec) * 8 << endl;
	cout << "\n\nConverted hex to binary =";
	//convert dec to binary
	for (int i = 0; contodec > 0; i++)
	{
		dectobin[i] = contodec % 2;
		contodec /= 2;
		cout << dectobin[i];
	}
	cout << endl;
}



int main() 
{
	// put function in here

	return NULL;
}
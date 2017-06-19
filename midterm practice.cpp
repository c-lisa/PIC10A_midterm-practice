#include<iostream>
#include<cmath>
#include<string>
#include<iomanip>
using namespace std; 

double temperature(double degrees, bool cf)
{
	if (cf)
	{
		return 9 / 5 * degrees + 32; 
	}
	else
	{
		return (degrees - 32) * 5 / 9; 
	}
}

int main()
{
	/* int x = 1;
	int sum = 0;
	while (x <= 4)
	{
		sum += x;
		x++;
	}

	cout << "Sum is: " << sum << endl;*/

	/*

	cout << "Enter number of rows:";
	int n;
	cin >> n;
	string a;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			a = a + "[]";

		}

		cout << setw(n*2) << a << endl; //here?
	}*/

	/*
	int number = 0;
	int counter = 0;
	double average;
	int sum;

	cout << "Please enter a number (or q to quit): ";
	while (cin >> number)
	{
		int sum = 0;
		sum += number;
		counter++;
	}
	cout << "The average of all your numbers is:" << sum / counter;*/

	/*
	//palindromes
	string s, s1, s2;
	int length;

	cout << "Please enter a word.";
	cin >> s;
	cout << endl;

	length = s.length();

	if (length % 2 == 0)
	{
		s1 = s.substr(0, (length / 2));
		s2 = s.substr((length / 2), (length / 2));
	}
	else
	{
		s1 = s.substr(0, (length / 2));
		s2 = s.substr((length / 2 + 1), (length / 2));
	}

	for (int i = 0; i <= (s1.length() + 1); i++)
	{
		if (s1.substr(0, 1) == s2.substr((s2.length()) - 1, 1))
		{
			s1 = s1.erase(0, 1);
			s2 = s2.erase(s2.length() - 1, 1);
		}
		else
		{
			cout << s << " is not a palindrome.";
			return 0;
		}

		if (s1.length() == 1)
		{
			cout << endl << s << " is a palindrome.";
		}
	}
	*/

	/*
	//didn't work
	string sent, word;
	int found;

	cout << "Gimme a sentence: ";
	getline(cin, sent);
	cout << "Gimme a word: ";
	cin >> word;

	for (int i = 0; i < sent.length(); i++)
	{
		found = sent.find(word, i);
		sent.erase(found, word.length());
	}
	*/


	/*temperature program
	double degrees, output;
	string conversion;
	bool bf; 
	cout << "Would you like to convert to Farenheit (F) or Celsius(C)?";
	cin >> conversion;
	cout << "How many degrees is it? ";
	cin >> degrees;

	if (conversion == "F" || conversion == "f" || conversion == "Farenheit" || conversion == "farenheit")
	{
		cout << "The conversion is: ";
		cout << temperature(degrees, true);
	}
	else
	{
		cout << "The conversion is: ";
		cout << temperature(degrees, false);
	}

	*/	 

	system("pause"); 
	return 0; 
}
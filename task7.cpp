#include<iostream>
using namespace std;
float check(string, string, int);
int main()
{
	string city, item;
	int q;
	cout << "Enter name of item: ";
	cin >> item;
	cout << "Enter name of city: ";
	cin >> city;
	cout << "Enter number of items required: ";
	cin >> q;
	float result = check(city, item, q);
	cout << result;
	
}
float check(string c, string i, int q)
{
	float res;
	if (c == "sofia")
	{
		if (i == "coffee")
		{
			res = q * 0.50;
		}
		if (i == "water")
		{
			res = q * 0.80;
		}
		if (i == "beer")
		{
			res = q * 1.20;
		}
		if (i == "sweets")
		{
			res = q * 1.45;
		}
		if (i == "peanuts")
		{
			res = q * 1.80;
		}
	}
	if (c == "plovdiv")
	{
		if (i == "coffee")
		{
			res = q * 0.40;
		}
		if (i == "water")
		{
			res = q * 0.70;
		}
		if (i == "beer")
		{
			res = q * 1.15;
		}
		if (i == "sweets")
		{
			res = q * 1.30;
		}
		if (i == "peanuts")
		{
			res = q * 1.50;
		}
	}
	if (c == "varna")
	{
		if (i == "coffee")
		{
			res = q * 0.45;
		}
		if (i == "water")
		{
			res = q * 0.70;
		}
		if (i == "beer")
		{
			res = q * 1.10;
		}
		if (i == "sweets")
		{
			res = q * 1.35;
		}
		if (i == "peanuts")
		{
			res = q * 1.55;
		}
	}
	return res;
}
//Finds all the prime numbers up to a given value and prints them from a list (WIP)

#include <iostream>
#include <math.h>
#include <list>
using namespace std;

int maximum;

bool isPrime(int i)
{
	if (i == 2)
	{
		return true;
	}
	if (i % 2 == 0)
	{
		return false;
	}
	int j;
	for (j = 3; j <= int(sqrt(i)); j += 2)
	{
		if (isPrime(j) == true)
		{
			if (i % j == 0)
			{
				return false;
			}
		}
	}
	return true;
}

void listPrimes(int i)
{
	int j;
  list<int> l;
	for (j = 2;j <= i;j ++)
	{
		if (isPrime(j) == true)
		{
			l.push_back(j);
		}
	}
  for (int i : l)
  {
    cout << i << endl;
  }
}

int main()
{
	cout << "Enter the maximum: ";
	cin >> maximum;
	listPrimes(maximum);
}

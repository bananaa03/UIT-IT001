#include <iostream>
#include <time.h>
#include <cstdlib>
#include <ctime>
using namespace std;
#define MIN 0
#define MAX 1000
int getInteger(char* message)
{
	int n;
	do
	{
		cout << message;
		cin >> n;
	} while (n < 0 || n > 100000000);
	return n;
}
int random(int a, int b)
{
	srand(time(NULL));
	int n;
	n = rand() % a + b;
	return n;
};
void genArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		a[i] = random(MIN, MAX);
	}
};
void printArray(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
};
void findElement(int* a, int n)
{
	int x;
	cout << "Enter an interger: "; cin >> x;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			cout << "The first index where " << x << " was found: " << i;
			break;
		}
		else
		{
			cout << x << " was not found in the array";
		}
	}
}
int main()
{
	srand((unsigned int)time(0));
	int n, choose, * a = NULL;
	char answer;
	int flag = 0;

	do
	{
		cout << "\n\nMENU: ";
		cout << "\n1.Generate an array";
		cout << "\n2.Print the array";
		cout << "\n3.Find an element in the array";
		//cout << "\n4.Delete duplicate elements in the array";
		cout << "\nOther.EXIT";
		cout << "\nPlease choose an option: ";
		//////////////
		cin >> choose;
		switch (choose)
		{
		case 1:
		{
			clock_t start = clock();
			n = getInteger("Please enter a number in range 1 .. 100,000,000: ");
			flag = n;
			clock_t end = clock();
			cout << "\nTime to create an array: " << ((double)end - start) / CLOCKS_PER_SEC << " s" << endl;
			//	break;
		}
		case 2:
		{
			clock_t start = clock();
			if (flag == 0)
			{
				cout << "Please choose Option 1 to generate an array";
			}
			else if (flag != 0)
			{
				printArray(a, n);
			}
			clock_t end = clock();
			cout << "\nTime to print the array: " << ((double)end - start) / CLOCKS_PER_SEC << " s" << endl;
			break;
		}
		case 3:
		{
			clock_t start = clock();
			if (flag == 0)
			{
				cout << "Please choose Option 1 to generate an array";
			}
			else if (flag != 0)
			{
				findElement(a, n);
			}
			clock_t end = clock();
			cout << "\nTime to print the array: " << ((double)end - start) / CLOCKS_PER_SEC << " s" << endl;
			break;
		}
		default:
		{
			cout << "See you again";
			break;
		}
		cout << "Do you want to continue(y/n)";
		cin >> answer;
		}
	} while (answer == 'y');


}
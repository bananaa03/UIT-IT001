#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	int n, i;
	cin >> n;
	for (i = 1; i <= n; i++)
		cout << "+ ";
	cout << endl;
	for (i = 1; i <= n; i++)
		cout << "- ";
	cout << endl;
	for (i = 1; i <= n; i++)
		cout << "+ - ";

	return 0;
}
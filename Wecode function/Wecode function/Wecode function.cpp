// Wecode function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Tổng 2 số
/*#include <iostream>
using namespace std;
int sumTwo(int a,int b)
{
	return a + b;
}
int main() {
	int a, b;
	cin >> a >> b;
	cout << "The sum of " << a << " and " << b << " is " << sumTwo(a, b);
	return 0;

}*/

//Tổng các số nguyên
/*#include <iostream>
using namespace std;
int sumMany(int m);
int main() {
	int n;
	cin >> n;
	cout << sumMany(n);
	return 0;
}
int sumMany(int m) {
	long long sum = 0;
	while (m--)
	{
		int x;
		cin >> x;
		sum += x;
	}
	return sum;
}*/

//Số lớn nhất trong 3 số
/*#include <iostream>
using namespace std;
double larger(double x, double y);
double compareThree(double x, double y, double z);
double larger(double x, double y) {
	if (x > y) return x;
	return y;
}
double compareThree(double x, double y, double z) {
	return larger(larger(x, y), z);
}
int main() {
	double a, b, c;
	cout << "Enter 03 numbers:\n";
	cin >> a >> b >> c;
	cout << "Numbers entered: " << a << ", " << b << ", " << c << endl;
	cout << "The largest number is " << compareThree(a, b, c);
	return 0;
}*/

//So lon nhat trong 4 so
/*#include <iostream>
using namespace std;
int inputNumber();
int larger(int x, int y);
int compareFour(int x, int y, int z, int w);



int inputNumber() {
	int x;
	do {
		cout << "Enter a positive integer: ";
		cin >> x;
		if (x <= 0 || x > 2000000000) {
			cout << "\nInvalid number, please try again:"; cin >> x;
		}
	} while (x <= 0 || x>2000000000);
	return x;
}



int larger(int x, int y) {
	if (x > y) return x;
	return y;
}


int compareFour(int x, int y, int z, int w) {
	return larger(larger(x, y), larger(z, w));
}



int main() {
	int a, b, c, d;
	a = inputNumber(); cout << endl;
	b = inputNumber(); cout << endl;
	c = inputNumber(); cout << endl;
	d = inputNumber(); cout << endl;
	cout << "Numbers entered: " << a << ", " << b << ", " << c << ", " << d << endl;
	cout << "The largest number is " << compareFour(a, b, c, d);
	return 0;
}*/

//So lon nhat trong n so
/*#include <iostream>
using namespace std;
double larger(double x, double y)
{
	if (x > y) return x;
	return y;
}
int main() {
	int n;
	double num, maxNum;
	cin >> n;
	cout << "Enter " << n << " numbers: " << endl;
    maxNum = -2000000000;
    for(int i = 0; i < n; i++)
    {
        cin >> num;
        maxNum = larger(maxNum,num);
    }
    cout << "The largest number is " << int(maxNum);
    return 0;
}*/


//Chuyển đổi thang điểm chữ
/*#include <iostream>
using namespace std;
char courseGrade(int score)
{
	switch (score) {
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18:
	case 19:
	case 20:
	case 21:
	case 22:
	case 23:
	case 24:
	case 25:
	case 26:
	case 27:
	case 28:
	case 29:
	case 30:
	case 31:
	case 32:
	case 33:
	case 34:
	case 35:
	case 36:
	case 37:
	case 38:
	case 39:
	case 40:
	case 41:
	case 42:
	case 43:
	case 44:
	case 45:
	case 46:
	case 47:
	case 48:
	case 49:
	case 50:
	case 51:
	case 52:
	case 53:
	case 54:
	case 55:
	case 56:
	case 57:
	case 58:
	case 59:
	{
		return 'F';
		break;
	}
	case 60:
	case 61:
	case 62:
	case 63:
	case 64:
	case 65:
	case 66:
	case 67:
	case 68:
	case 69:
	{
		return 'D';
		break;
	}
	case 70:
	case 71:
	case 72:
	case 73:
	case 74:
	case 75:
	case 76:
	case 77:
	case 78:
	case 79:
	{
		return 'C';
		break;
	}
	case 80:
	case 81:
	case 82:
	case 83:
	case 84:
	case 85:
	case 86:
	case 87:
	case 88:
	case 89:
	{
		return 'B';
		break;
	}
	case 90:
	case 91:
	case 92:
	case 93:
	case 94:
	case 95:
	case 96:
	case 97:
	case 98:
	case 99:
	case 100:
	{
		return 'A';
		break;
	}
	}
}
int main() {
	int n;
	cin >> n;
	cout << courseGrade(n);
	return 0;
}*/

//Xếp loại sinh viên
#include <iostream>
using namespace std;
int getScore(int &courseScore) {
	cout << "Enter course score (0<=score<=100): ";
	cin >> courseScore;
	cout << "Course score is " << courseScore << endl;
	return courseScore;
}
void printGrade(int courseScore) {
	cout << "Your grade for the course is ";
	if (courseScore <= 100 && courseScore >= 90) cout << "A";
	else if (courseScore <= 89 && courseScore >= 80) cout << "B";
	else if (courseScore <= 79 && courseScore >= 70) cout << "C";
	else if (courseScore <= 69 && courseScore >= 60) cout << "D";
	else cout << "F";
}
int main() {
	int courseScore;
	getScore(courseScore);
	printGrade(courseScore);
	return 0;
}
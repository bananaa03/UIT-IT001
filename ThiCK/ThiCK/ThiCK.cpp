/*#include <iostream>
using namespace std;


int main()
{
    int a[10000], n, i;
    cin >> n;
    //###INSERT CODE HERE -
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int min = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] < min) {
			min = a[i];
			cout << a[i];
			break;
		}
	}
	for (int i = n - 1; i >= 0; i--) {
		if (a[i] == min) {
			cout << i;
			break;
		}
	}

    return 0;
}*/

/*#include <iostream>
#include<cstring>

using namespace std;

//###INSERT CODE HERE -
int DemSoKyTuNguyenAm(char s[]) {
	int d = 0;
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'i' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'I' || s[i] == 'U')
			d++;
	}
	return d;
}

int main()
{
	char s[256];
	cin.getline(s, 256);
	cout << DemSoKyTuNguyenAm(s);
	return 0;
}*/

/*#include<iostream>
using namespace std;
struct date {
	int ngay;
	int thang;
	int nam;
};
typedef struct HOPSUA {
	double trongluong;
	date ngay;
	char nhanhieu[35];
}HS;

void nhap(HS x) {
	cin >> x.trongluong;
	cin >> x.ngay.ngay;
	cin >> x.ngay.thang;
	cin >> x.ngay.nam;
}

void nhapnhieu(HS x, int n) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		
	}
}*/

/*#include <iostream>
using namespace std;


void inputMatrix(int a[][100], int& n);

void outputMatrix(int a[][100], int n);


int isDiagonalMatrix(int a[][100], int n);


int isIdentityMatrix(int a[][100], int n);


int main()
{
	int a[100][100];
	int n;
	inputMatrix(a, n);
	cout << "Matrix: " << endl;
	outputMatrix(a, n);

	//###INSERT CODE HERE -
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (i != j && a[i][j] == 0) {
				if (i == j && a[i][j] == 1) isIdentityMatrix(a, n);
				if (i == j && a[i][j] != 1) isDiagonalMatrix(a, n);
			}


}

void inputMatrix(int a[][100], int& n) {
	int i, j;
	cin >> n;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			cin >> a[i][j];
}
void outputMatrix(int a[][100], int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	
}

int isDiagonalMatrix(int a[][100], int n) {
	cout << "a is called a diagonal matrix";
	return 0;
}
int isIdentityMatrix(int a[][100], int n) {
	cout << "a is called a identity matrix";
	return 0;
}*/
/*#include <iostream>

using namespace std;

//###INSERT CODE HERE -
void inputArray(int a[], int& n) {
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
void outputArray(int a[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}

int maxSquare(int a[], int n) {
	int max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] > max) max = a[i];
	}
	return max;
}
int  kt (int n) {
	int x = 0;
	while (x * x <= n) {
		if (x * x == n)
		{
			return 1;
		}
		x++;
	}
	return -1;
}
int isTotalSquare(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (kt(a[i]) == -1)
		{
			return -1;
		}
	}
	return 1;
}
int main()
{
	int n, a[100];
	inputArray(a, n);
	cout << "Array:" << endl;
	outputArray(a, n);
	cout << endl;
	if (isTotalSquare(a, n) == 1)
	{
		cout << "Mang toan so chinh phuong" << endl;
		cout << "So chinh phuong lon nhat: " << maxSquare(a, n);
	}
	else cout << "Mang khong phai chua toan cac so chinh phuong";


	return 0;
}*/
/*#include <iostream>
#include <math.h>
using namespace std;

#define MAX 500

void Nhapmang(int a[], int& n);
void Xuatmang(int a[], int n);
long long TichSole_VTSNT(int a[], int n);


int main()
{
	int a[MAX], n;
	Nhapmang(a, n);

	//###INSERT CODE HERE -
if (n > 0)
{
	Xuatmang(a, n);
	cout << endl;
	int p = TichSole_VTSNT(a, n);
	if (p == 0) cout << "Khong tim duoc so le o vi tri la so nguyen to, tich la: " << p;
	else if (p != 0) cout << "Tich cac so le o vi tri la so nguyen to la: " << p;
}
if (n < 0) cout << "Mang rong.";
return 0;
}
void Nhapmang(int a[], int& n) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void Xuatmang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

int kt(int n) {
	if (n < 2) return 0;
	for (int i = 2; i <= sqrt(n); i++)
	    if (n % i == 0) return 0;
	return 1;
}

long long TichSole_VTSNT(int a[], int n) {
	int p = 1;
	for (int i = 0; i < n; i++)
	    if (a[i] % 2 != 0 && kt(i) == 1) p = p * a[i];
	if (p == 1) return 0;
	return p;
}*/

/*#include <iostream>
using namespace std;
int tinh(int m, int n) {
	if (m = 0) return (n + 1);
	else {
		if (n = 0) return tinh(m - 1, 1);
		else return tinh(m - 1, tinh(m, n - 1));
	}
}
int main() {
	cout << tinh(1, 5);
	return 4;
}*/

#include <iostream>
using namespace std;
int f(int a[3][], int n, int m) {
	int s = 0, i = 0, j = 0;
	for (; i < n; i++)
		for (; j <= i; j++)
			s += a[i][j];
	return s;
}
int main() {
	int a[3][3] = { {6,2,9}
	,{1,5,3}
	,{7,4,8} };
	cout << f(a, 2, 2);
	return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	//tính giai thừa của số nguyên n
	/*int n, i; 
	int p=1;
	cin >> n;
	for (i = 1; i <= n; i++)
		p = p * i;
	cout << p;*/ 


	//kiểm tra số nguyên tố
	/*int n, i;
	do {
		cin >> n;
	} while (n <= 0);
	for (i = 2; i <= n / 2; i++)
		if (n % i == 0)
			break;
	if (i <= n / 2)
		cout << "Khong la so nguyen to";
	else cout << "La so nguyen to";*/


	//tính tổng: S=1/2+1/4+...+1/2n với n nguyên dương
	/*int n, i;
	float s = 0;
	do {
		cin >> n;
	} while (n <= 0);
	for (i = 1; i <= n; i++)
		s = s + 1.0 / (2 * i);
	cout << s;*/


	//tính tổng s=1+1.2+...+1.2.3.....n
	/*int n, i;
	long long s=0,p=1;
	do {
		cin >> n;
	} while (n <= 0);
	for (i = 1; i <= n; i++) {
		p = p * i;
		s = s + p;
	}
	cout << s;*/


	//liệt kê các số nguyên tố nhỏ hơn n nhập từ bàn phím
	int n, i;
	do {
		cin >> n;
	} while (n <= 0);
	for (i = 2; i <= n / 2; i++)
		if (n % i == 0)
			break;
	for ()









	return 0;	 
}
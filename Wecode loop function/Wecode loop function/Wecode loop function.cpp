//Tong cac chu so
/*
using namespace std;
int tong() {
	int n;
	int s = 0;
	do { 
		cin >> n; 
	} while (n < 1000 || n>9999);
	while (n > 0) {
		s = s + n % 10;
		n = n / 10;
	}
	cout << s << ", ";
	int t = s;
	while (t > 1) {
		t = s % 10;
		s = s / 10;
		cout << t << ", ";
	}
	return t;
}
int main() {
	tong();
	cout << " ";
	return 0;
}*/

//Binh xem phim voi gau
/*#include <iostream>
using namespace std;
int nhaptongtg() {
	int a;
	do {
		cin >> a;
	} while (a < 0);
	return a;
}
int nhaptgxem() {
	int x;
	do {
		cin >> x;
	} while (x < 0);
	return x;
}
int ucln(int s, int t) {
	int du, p = s * t;
	while (t != 0) {
		du = s % t;
		s = t;
		t = du;
	}
	return s;
}
int main() {
	int a, b, c, x, y, z;
	int s, t;
	double tile;
	a = nhaptongtg(); cout << " "; 
	b = nhaptongtg(); cout << " ";
	c = nhaptongtg(); cout << endl;
	x = nhaptgxem(); cout << " ";
	y = nhaptgxem(); cout << " ";
	z = nhaptgxem(); cout << endl;
	s = a * 3600 + b * 60 + c;
	t = x * 3600 + y * 60 + z;
	int p = ucln(s, t);
	s = s / p;
	t = t / p;
	cout << t << " " << s;
}*/



//UCLN
/*#include <iostream>
using namespace std;
int ucln(int a, int b) {
	if (a == 0 && b == 0) return -1;
    if (a < 0) a = a * (-1);
   	if (b < 0) b = b * (-1);
	if (a == 0 && b != 0) return b;
	if (a != 0 && b == 0) return a;
	if (a == 1 || b == 1) return 1;
	while (a != b) {
		if (a > b) a = a - b;
		else b = b - a;
	}
	return a;
}
int main() {
	int n, m;
	cin >> n >> m;
	if (ucln(n, m) == -1) cout << n << " va " << m << " khong co UCLN";
	else cout << "UCLN cua " << n << " va " << m << " la " << ucln(n, m);
	return 0;
}*/


//Kiểm tra số đối xứng
/*#include <iostream>
using namespace std;
int dx(int &n) {
	int s = 0, tr, t;
	cin >> n;
	for (t = n; n != 0; n = n / 10) {
		tr = n % 10;
		s = s * 10 + tr;
	}
	if (t == s) return 0;
    return 1;
}
int main() {
	int n;
	cout << dx(n);
}*/

//Bảng cửu chương
/*#include <iostream>
#include <iomanip>
using namespace std;
void gugudan(int n) {
	cout << "BANG CUU CHUONG: " << n << endl;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 10; j++)
			cout << setw(3) << i * j;
		cout << endl;
	}
}
void bang_cuu_chuong() {
	int so;
	cout << "Moi ban nhap 1 so: "; cin >> so; cout << endl;
	while (so < 1 || so > 9) {
		cout << "Moi ban nhap 1 so tu 1 den 9: "; cin >> so; cout << endl;
	}
	gugudan(so);
}
void menu() {
	char a;
	cout << "MENU" << endl;
	cout << "t) Tao ra bang cuu chuong" << endl;
	cout << "d) Thoat chuong trinh" << endl;
	cout << "Moi ban lua chon: "; cin >> a; cout << endl;
	if (a != 't' && a != 'd') {
		cout << "Lua chon khong hop le" << endl;
		menu();
	}
	if (a == 't') {
		bang_cuu_chuong();
		menu();
	}
	if (a == 'd') {
		cout << "Ban da chon thoat khoi chuong trinh. Cam on ban da su dung!";
	}
}
int main() {
	menu();
	return 0;
}*/

//Giai thừa nguyên tố
/*#include <iostream>
#include <cmath>
using namespace std;
void nhapso(int& n) {
	do { cin >> n; } while (n <= 1);
}
int snt(int &n) {
	int j; int p = 1; int n; int x;
	nhapso(n);
	for (j = 2; j <= sqrt(x); j++) {
		if (x % j == 0) {
			for (int i = 1; i <= n; i++) {
				p = p * x;
			}
		}
		return p;
	}
}
int main() {
	int n;
	nhapso(n);
	cout << snt(n);
}*/

//Lũy thừa của một số
/*#include <iostream>
#include <math.h>
using namespace std;
bool isPower(int n) {
	if (n == 1) return true;
	for (int i = 2; i <= n / 2; i++) {
		for (int j = 2; j <= n / 2; j++) {
			if (pow(i, j) > n) {
				break;  return 0;
			}
			if (pow(i, j) == n) return 1;
		}
	}
}
int main() {
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int n; cin >> n;
	cout << isPower(n) << endl;
	return 0;
}*/

//Tổng các số liên tiếp bằng n
/*#include <iostream>
using namespace std;
int isSumOfConsecutive(int &n) {
	int i, m, dem, a; double max;
	dem = 0;
	for (i = 2; i <= n/3; i++) {
		if ((n - i * (i - 1) / 2) % i == 0) {
			dem++;
		}
	}
	return dem;
}
int main() {
	int n; cin >> n;
	cout << isSumOfConsecutive(n) << endl;
	return 0;
}*/


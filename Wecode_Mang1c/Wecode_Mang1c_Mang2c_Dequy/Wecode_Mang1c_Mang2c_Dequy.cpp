
//Nhap mang, so nhap truoc xuat ra sau, so nhap sau xuat ra truoc
/*#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[10000];
	for (int i = 0; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = n - 1; i >= 0; i--) {
		cout << a[i] << endl;
	}
	return 0;
}*/

//Doi cho phan tu dau tien va phan tu cuoi cung
/*#include <iostream>
using namespace std;
int main() {
	int n;
	int a[50];
	int m;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int t = a[0];
	a[0] = a[n - 1];
	a[n - 1] = t;
	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
	}
	
}*/

//Tim x trong mang
/*#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n, a[50]; int x;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int i;
	cin >> x;
	for (i = 0; i < n; i++) {
		if (a[i] == x) {
			cout << x << " xuat hien dau tien tai vi tri thu " << i + 1 << " trong mang"; 
			break;
	    }
	}
	if (i == n) cout << "Khong tim thay " << x;
	return 0;
}*/

//Kiem tra mang toan so chan
/*#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int n, a[100];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int i;
	for (i = 0; i < n; i++) {
		if (a[i] % 2 != 0) cout << "no";
	}
	if (i == n) cout << "yes";
	return 0;
}*/

//Ma tran vuong
/*#include <iostream>
using namespace std;
int main() {
	int m, n; cin >> m >> n; int i, j;
	int a[1000][1000];
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			cout << a[i][j];
		}
	}
}*/

/*#include <iostream>
using namespace std;
#define MAX 16

void Nhapmang(int a[][MAX], int& n);
void Xuatmang(int a[][MAX], int n);
int fibo(int n) {
	if (n == 1 || n == 2) return 1;
	else return fibo(n - 1) + fibo(n - 2);
}
void Nhapmang(int a[][MAX], int& n) {
	int m, i, j;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			cin>>
		}
	}
}
int main() {
	int n, a[MAX][MAX];
	Nhapmang(a, n);
	Xuatmang(a, n);
	return 0;
}*/

//Dat chuoi trong ngoac 
/*#include <iostream>
#include <cstring>
using namespace std;
void encloseInBrackets(int a) {

}
int main() {
	char a[100];
	getline(a, 40);
	encloseInBrackets(a);
	cout << a;
	return 0;
}*/



//Kiem tra mang toan so chan hoac le
/*#include <iostream>
using namespace std;
int main() {
	int n;
	int a[100];
	int i;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	int r = 0;
	for (i = 0; i < n; i++) {
		if (a[i] == 0) r++;
	}
	if (r == n) cout << "Mang rong";
	int c = 0, l = 0;
	for (i = 0; i < n; i++) {
		if (a[i] % 2 == 0) c++;
		if (a[i] % 2 != 0) l++;
	}
	if (c == n) cout << "Mang chua toan so chan";
	if (l == n) cout << "Mang chua toan so le";
	if (c != n && l != n)cout << "Mang khong chua toan so chan hay so le";
}*/

//Dem so lan x xuat hien
/*#include <iostream>
using namespace std;
int main() {
	int n, a[10000];
	cin >> n;
	int i, dem = 0;
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	int x;  cin >> x;
	for (i = 0; i < n; i++) {
		if (a[i] == x) dem++;
	}
	cout << dem;
}*/

//Thay the x bang y
/*#include <iostream>
using namespace std;
int main() {
	int n, a[10];
	cin >> n;
	int i;
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	int x, y;
	cin >> x >> y;
	for (i = 0; i < n; i++) {
		if (a[i] == x) a[i] = y;
	}
	for (i = 0; i < n; i++) {
		cout << a[i] << endl;
	}
}*/

//Dem so nho nhat
/*#include <iostream>
using namespace std;
int main() {
	int n, a[10000];
	cin >> n;
	int i;
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	int min = a[0];
	for (i = 0; i < n; i++) {
		if (a[i] < min) min = a[i];
	}
	int dem = 0;
	for (i = 0; i < n; i++) {
		if (a[i] == min) dem++;
	}
	cout << min << " " << dem;

}*/

//Gop 2 mang thanh 1
/*#include <iostream>
using namespace std;
int main() {
	int a, b, A[10], B[10];
	cin >> a;
	int i, j;
	for (i = 0; i < a; i++) {
		cin >> A[i];
	}
	cin >> b;
	for (i = 0; i < b; i++) {
		cin >> B[i];
	}
	int C[20];
	int c = a + b;
	for (i = 0; i < a; i++) {
		C[i] = A[i];
	}
	for (i = 0; i < b; i++) {
		C[i + a] = B[i];
	}
	for (i = 0; i < c; i++) {
		cout << C[i] << " ";
	}
}*/

//Dao nguoc thu tu mang
/*#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int n, a[100];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	cout << "Mang da nhap:" << endl;
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	for (int i = 0; i < n/2; i++) {
		int t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}
	cout << endl << "Mang sau khi dao:" << endl;
	for (int i = 0; i < n; i++) cout << a[i] << " ";
	return 0;
}*/

//Tim vi tri phan tu nho nhat
/*#include <iostream>
#include <math.h>
using namespace std;
void inputArray(int a[], int &n) {
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
}
void outputArray(int a[], int n) {
	for (int i = 0; i < n; i++) cout << a[i] << " ";
}
int vitriMinDau(int a[], int n) {
	for (int i = 0; i < n; i++) {
		if (a[i] < a[i+1]) {
			return i;
			break;
		}
	}
}
int vitriMinCuoi(int a[], int n) {
	for (int i = n - 1; i >= 0; i--) {
		if (a[i] < a[i-1]) {
			return n-i;
			break;
		}
	}
}
int main() {
	int n, a[100];
	inputArray(a, n);
	cout << "Array:" << endl;
	outputArray(a, n);
	cout << endl;
	cout << "Vi tri phan tu nho nhat dau tien trong mang: " << vitriMinDau(a, n) << endl;
	cout << "Vi tri phan tu nho nhat cuoi cung trong mang: " << vitriMinCuoi(a, n) << endl;
	return 0;
}*/

//Chen 1 phan tu vao vi tri k
/*#include <iostream>
#include <math.h>

using namespace std;

void inputArray(int* a, int& n) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void outputArray(int* a, int& n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
void insertElement(int* a, int& n, int pos, int x) {
	if (pos<0 || pos>n) {
		cout << endl << "Loi: Vi tri khong hop le va se chen vao cuoi mang";
		pos = n;
	}
	for (int i = n; i > pos; i--) {
		a[i] = a[i - 1];
	}
	a[pos] = x;
	n++;
}


int main()
{
	int n, a[100], pos, x;
	inputArray(a, n);
	cin >> pos >> x;
	cout << "Before: ";
	outputArray(a, n);

	insertElement(a, n, pos, x);

	cout << "\nAfter: ";
	outputArray(a, n);

	return 0;
}*/

//Tim vi tri cua phan tu am lon nhat
/*#include <iostream>
using namespace std;
int sosanh(int a[], int& n) {
	int max = a[0], i;
	for (i = 0; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	for (i = 0; i < n; i++) {
		if (a[i] == max) {
			return i-1;
			break;
		}
	}
}
int main() {
	int n, a[100];
	cin >> n;
	int i;
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	int d = 0;
	for (i = 0; i < n; i++) {
		if (a[i] >= 0) d++;
		else if (a[i] < 0) sosanh(a, n);
	}
	if (d == n) cout << "-1";
	else cout << sosanh(a, n);
}*/

//Tach so duong
/*#include <iostream>
#include <math.h>
using namespace std;

void inputArray(int a[], int &na) {
	cin >> na;
	for (int i = 0; i < na; i++) {
		cin >> a[i];
	}
}

void outputArray(int b[], int nb) {
	for (int i = 0; i < nb; i++) {
		cout << b[i] << " ";
	}
}
void getPositiveNumber(int a[], int na, int b[], int &nb) {
	nb = 0;
	for (int i = 0; i < na; i++) {
		if (a[i] > 0) {
			b[nb] = a[i];
			nb += 1;
		}
	}
}
int main() {
	int na, a[100], nb, b[100];
	inputArray(a, na);
	cout << "Array a:" << endl;
	outputArray(a, na);
	cout << endl;
	getPositiveNumber(a, na, b, nb);
	cout << "Array b:" << endl;
	outputArray(b, nb);
	return 0;
}*/

//Gop 2 mang, mang b truoc, mang a sau, mang a dao nguoc
/*#include <iostream>
#include <math.h>
using namespace std;

void inputArray(int a[], int& na, int b[], int& nb) {
	cin >> na >> nb;
	for (int i = 0; i < na; i++) {
		cin >> a[i];
	}
	
	for (int i = 0; i < nb; i++) {
		cin >> b[i];
	}
}

void outputArray(int a[], int na) {
	for (int i = 0; i < na; i++) {
		cout << a[i] << " ";
	}
}

int dao(int a[], int na) {
	for (int i = 0; i < na / 2; i++) {
		int t = a[i];
		a[i] = a[na - 1 - i];
		a[na - 1 - i] = t;
	}
	return a[100];
}

void connect(int a[], int na, int b[], int nb, int c[], int &nc) {
	nc = 0;
	a[100] = dao(a, na);
	for (int i = 0; i < na + nb; i++) {
		if (i < nb) c[nc] = b[i];
		else c[nc] = a[i - nb];
		nc++;
	}
}
int main() {
	int na, a[100], nb, b[100], nc, c[100];
	inputArray(a, na, b, nb);
	cout << "Array a: "; outputArray(a, na);
	cout << "\nArray b: "; outputArray(b, nb);
	connect(a, na, b, nb, c, nc);
	cout << "\nArray c: "; outputArray(c, nc);
	return 0;
}*/

//Xoa 1 phan tu tai vi tri k
/*#include <iostream>
#include <math.h>
using namespace std;

void inputArray(int a[100], int &n) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void outputArray(int a[100], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

int deleteElement(int a[100], int &n, int pos) {
	if (pos < 0 || pos >= n) {
		cout << "Loi xoa: Vi tri khong hop le";
		return -1;
	}
	if (pos >= 0 && pos < n) {
		for (int i = pos; i < n - 1; i++) {
			a[i] = a[i + 1];
		}
	}
	n--;
	return a[100];
}
int main() {
	int n, a[100], pos;
	inputArray(a, n);
	cin >> pos;
	cout << "Before: ";
	outputArray(a, n);
	if (deleteElement(a, n, pos) != -1) {
		cout << "\nAfter: ";
		outputArray(a, n);
	}
	return 0;
}*/

//Kiem tra mang co theo quy luat Benford
/*#include <iostream>
using namespace std;
#define MAX 100

void Nhapmang(int a[MAX], int n = 10) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

bool isBenford(int a[MAX], int n) {
	int d1 = 0, d4 = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] / 10 == 1) d1++;
		else if (a[i] / 10 == 4) d4++;
	}
	for (int i = 0; i < n; i++) {
		if (a[i] / 100 == 1) d1++;
		else if (a[i] / 100 == 4) d4++;
	}
	for (int i = 0; i < n; i++) {
		if (a[i] / 1000 == 1) d1++;
		else if (a[i] / 1000 == 4) d4++;
	}
	for (int i = 0; i < n; i++) {
		if (a[i] / 10000 == 1) d1++;
		else if (a[i] / 10000 == 4) d4++;
	}
	if (d1 == 3 && d4 == 1) return true;
	if (d1 != 3 || d4 != 1) return false;
}
int main() {
	int a[MAX], n = 10;
	Nhapmang(a, n);
	if (isBenford(a, n) == true) {
		cout << "TRUE";
	}
	else cout << "FALSE";
	return 0;

}*/

//Tim y trong mang so nguyen to
/*#include <iostream>
#include <math.h>
using namespace std;
#define MAX 100
bool songuyento(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0) return 0;
	return 1;
}

void NhapmangSNT(int a[], int& n)
{
	cin >> n;
	int j = 0;
	for (int i = 2; j < n; i++) {
		if (songuyento(i) == 1)
		{
			a[j] = i;
			j++;
		}
	}
}
int SoPhanTuChuaY(int a[], int n, int y) {
	int d = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] < 10) {
			if (a[i] == y) d = d + 1;
		}
		else if (a[i] >= 10) {
			int s = a[i];
			for (;s > 0;) {
				if (s % 10 == y) { d = d + 1; break; }
				else s /= 10;
			}
		}
	}
	return d;
}
int main() {
	int a[MAX], n, y;
	cin >> y;
	NhapmangSNT(a, n);
	//cout << SoPhanTuChuaY(a, n, y) << endl;
	return 0;
}*/

//Xuat phan tu o vi tri le
/*#include <iostream>
using namespace std;
int main() {
	int a[100], n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (i % 2 != 0) cout << a[i] << " ";
	}
	return 0;
}*/

//Xuat so nguyen to trong mang
/*#include <iostream>
#include <cmath>
using namespace std;

bool ktnt(int n) {
	for(int i = 2; i <= sqrt(n); i++)
		if (n % i == 0) return 0;
	return 1;
}


int main() {
	int a[100], n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (ktnt(a[i]) == 1) cout << a[i] << " ";
	//}
	//for (int i = 0; i < n; i++) {
		else if (ktnt(a[i]) == 0) cout << "0";
	}
}*/

//Max trong mang
/*#include <iostream>
using namespace std;
int main() {
	int a[100]; int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int max = a[0]; int d = 0;
	for (int i = 0; i < n; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}
	for (int i = 0; i < n; i++) {
		if (a[i] == max) d++;
	}
	cout << max << endl << d;
}*/

//Tim so lon thu 2 trong mang
#include <iostream>
using namespace std;
int main() {
	short a[100]; int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int max = a[0];
	for (int i = 0; i < n; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}
	int max2 = a[0]; int d = 0;
	for (int i = 0; i < n; i++) {
		if (max2 < a[i] && a[i] < max) {
			max2 = a[i];
			d++;
		}
	}
	if (d == 0) cout << "0";
	if(d > 0) cout << max2;
}
//Nhap xuat ma tran don gian
/*#include <iostream>
using namespace std;
int () {
	int m, n;
	double A[100][100];
	cin >> m >> n;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> A[i][j];
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
}*/

//Ma tran vuong fibonacci
/*#include <iostream>
using namespace std;
#define MAX 16

void Nhapmang(int a[][MAX], int& n);
void Xuatmang(int a[][MAX], int n);
void Nhapmang(int a[][MAX], int& n) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

		}
	}
}
void Xuatmang(int a[][MAX], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j];
		}
	}
}
int main() {
	int n, a[MAX][MAX];
	Nhapmang(a, n);
	Xuatmang(a, n);
	return 0;
}*/

//Kiem tra ma tran vuong don vi
/*#include <iostream>
#define MAXR 100
#define MAXC 100
void NhapMaTran(int a[MAXR][MAXC], int &n) {
	std::cin >> n;
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			std::cin >> a[i][j];
		}
	}
}
bool isMaTranDonVi(int a[MAXR][MAXC], int& n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j && a[i][j] != 1) {
				return false; break;
			}
		    if (i != j && a[i][j] != 0) {
			    return false; break;
		    }
	    }
    }
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j && a[i][j] == 1) return true;
			if (i != j && a[i][j] == 0) return true;
		}
	}
}
int main() {
	int a[MAXR][MAXC], n;
	NhapMaTran(a, n);
	std::cout << std::boolalpha << isMaTranDonVi(a, n);
	return 0;
}*/

//Kiem tra ma tran frobenius
/*#include <iostream>
using namespace std;

int main()
{
	double a[100][100];
	int m, n, sum = 0;
	cin >> m >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)

			cin >> a[i][j];
	}
	for (int i = 0; i < m - 1; i++)
	{
		for (int j = i + 1; j != 0; j++)
		{
			if (a[i][j] != 0) sum = sum + a[i][j] + 1;
		}
	}
	if (sum > 1) cout << "Yes";
	else cout << "No";
}*/

//Ma tran chuyen vi
/*#include <iostream>;
using namespace std;
int main() {
	int m, n; double a[100][100];
	cin >> m >> n;
	int i, j;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			cout << a[j][i] << " ";
		}
		cout << endl;
	}
	return 0;
}*/

//Tinh tong phan tu o duong cheo chinh
/*#include <iostream>
using namespace std;
int main() {
	int m, n; double a[100][100]; double s = 0;
	cin >> m >> n;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) s = s + a[i][j];
		}
	}
	cout << s;
	return 0;
}*/

//Kiem tra ma tran duong cheo
/*#include <iostream>
using namespace std;
bool kiemtra(double a[100][100],int m, int n) {
	int y = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j && a[i][j] != 0) return true;
			if (i != j) {
				if (a[i][j] != 0) return false;
			}
		}
	}
}
int main() {
	int m, n; double a[100][100]; int y=0;
	cin >> m >> n;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	if (kiemtra(a, m, n) == 1) cout << "Yes";
	if (kiemtra(a, m, n) == 0) cout << "No";
	return 0;
}*/


//Kiem tra ma tran doi xung
/*#include <iostream>
using namespace std;
bool kiemtra(double a[100][100], int m, int n) {
	if (m != n) return 0;
	for (int i = 0; i < m - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i][j] != a[j][i]) return 0;
		}
	}
	return 1;
}
int main() {
	int m, n; double a[100][100];
	cin >> m >> n;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	if (kiemtra(a, m, n) == 1) cout << "Yes";
	if (kiemtra(a, m, n) == 0) cout << "No";
}*/

//Tong 2 ma tran
/*#include <iostream>
using namespace std;
int main() {
	int m, n, l, k, i, j;
	float a[100][100], b[100][100];
	cin >> m >> n;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	cin >> l >> k;
	for (i = 0; i < l; i++) {
		for (j = 0; j < k; j++) {
			cin >> b[i][j];
		}
	}
	float c[100][100];
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
}*/

//Tich 2 ma tran
/*#include <iostream>
using namespace std;
int main() {
	int m, n, l, k, i, j;
	float a[100][100], b[100][100], c[100][100];
	cin >> m >> n;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	cin >> l >> k;
	for (i = 0; i < l; i++) {
		for (j = 0; j < k; j++) {
			cin >> b[i][j];
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < k; j++) {
			c[i][j] = 0;
			for (int k = 0; k < n; k++) {
				c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
			}
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < k; j++) {
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
}*/

//

//Định nghĩa kiểu cấu trúc
/*#include <iostream>

using namespace std;

//###INSERT CODE HERE -
typedef struct PhanSo
{
    int tu;
    int mau;
}PS;

struct DIEM
{
    float x;
    float y;
};

struct VECTOR
{
    float x;
    float y;
    float z;
};

struct date
{
    int ngay;
    char thang[20];
    int nam;
};

struct nhancong
{
    char ten[30];
    char quequan[50];
    float bacluong;
    date ngaysinh;
};

int main()
{
    string test; cin >> test;

    PhanSo a = { 1,2 }; PS b;
    cout << a.tu << "/" << a.mau << endl;

    DIEM M = { 0.5,0.7 };
    cout << "(" << M.x << "," << M.y << ")" << endl;

    VECTOR P = { 1.2,0.3,1 };
    cout << "P(" << P.x << "," << P.y << "," << P.z << ")" << endl;

    nhancong nguoi_a = { "Hoang Nam","TP HCM",3.4,10,"Mot",1999 }, nguoi_b = { "Thuy Van","Dong Nai",4,21,"Muoi Hai",1990 }; // 1. T?o 2 nhân công ng??i a, ng??i b
    cout << nguoi_a.ten;		// 2. Xu?t tên c?a ng??i a
    float S = nguoi_a.bacluong + nguoi_b.bacluong;//	3. C?ng b?c l??ng c?a ng??i a và ng??i b
    cout << nguoi_b.ngaysinh.nam; //4. Xu?t ngày sinh c?a ng??i b 



    return 0;
}*/

//Tinh toan phan so
/*#include <iostream>
using namespace std;

typedef struct PhanSo
{
    int tuso;
    int mauso;
}PS;

int ucln(int a, int b) {
    if (b == 0) return a;
    if (a % b == 0) return b;
    return ucln(b, a % b);
}

PS rutgon(PS &a) {
    PS x;
    x.tuso = a.tuso / ucln(a.tuso, a.mauso);
    x.mauso = a.mauso / ucln(a.tuso, a.mauso);
    return x;
}

PS cong(PS x1, PS x2) {
    PS x;
    x.tuso = x1.tuso * x2.mauso + x1.mauso * x2.tuso;
    x.mauso = x1.mauso * x2.mauso;
    return x;
}

PS tru(PS x1, PS x2) {
    PS x;
    x.tuso = x1.tuso * x2.mauso - x1.mauso * x2.tuso;
    x.mauso = x1.mauso * x2.mauso;
    return x;
}

PS nhan(PS x1, PS x2) {
    PS x;
    x.tuso = x1.tuso * x2.tuso;
    x.mauso = x1.mauso * x2.mauso;
    return x;
}

PS chia(PS x1, PS x2) {
    PS x;
    x.tuso = x1.tuso * x2.mauso;
    x.mauso = x1.mauso * x2.tuso;
    return x;
}

void xuat(PS x) {
    x = rutgon(x);
    if (x.mauso == 1) cout << x.tuso;
    else if (x.mauso < 0 && x.tuso > 0) cout << x.tuso * (-1) << "/" << x.mauso * (-1);
    else if (x.mauso < 0 && x.tuso < 0) cout << x.tuso * (-1) << "/" << x.mauso * (-1);
    else if (x.mauso > 0 && x.tuso > 0 || x.mauso > 0 && x.tuso < 0) cout << x.tuso << "/" << x.mauso;
    else if (x.tuso == 0 && x.mauso != 0) cout << "0";
}

int main() {
    PS x1, x2, x;
    char n;
    cin >> x1.tuso >> x1.mauso;
    cin >> x2.tuso >> x2.mauso;
    cin >> n;
    if (x1.mauso == 0 || x2.mauso == 0) cout << "Khong thoa yeu cau bai toan";
    else {
        switch (n) {
        case '+': x = cong(x1, x2);
            xuat(x);
            break;
        case '-': x = tru(x1, x2);
            xuat(x);
            break;
        case '*': x = nhan(x1, x2);
            xuat(x);
            break;
        case '/': x = chia(x1, x2);
            xuat(x);
            break;
        }
    }

}*/

//Nhap xuat mang Phan so
/*#include <iostream>
using namespace std;

typedef struct PhanSo
{
    int tuso;
    int mauso;
}PS;

int ucln(int a, int b) {
    if (b == 0) return a;
    return ucln(b, a % b);
}

PS rutgon(PS a) {
    PS x;
    x.tuso = a.tuso / ucln(a.tuso, a.mauso);
    x.mauso = a.mauso / ucln(a.tuso, a.mauso);
    return x;
}

bool check(PS a) {
     if (a.mauso == 0)
     {
        return false;
     }
     return true;
}

void xuat(PS a) {
    if (check(a) == true) {
        if (a.mauso == 1 && a.tuso != 0) {
            cout << a.tuso;
        }
        else if (a.mauso != 0 && a.tuso == 0) {
            cout << "0";
        }
        else if (a.mauso > 0 && a.tuso != 0) {
            cout << a.tuso << "/" << a.mauso;
        }
        else if (a.mauso < 0) {
            cout << -1 * (a.tuso) << "/" << -1 * (a.mauso);
        }
    }
    if (check(a) == false) cout << "Khong thoa yeu cau bai toan";
}
int main() {
    PS a[10000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i].tuso >> a[i].mauso;
    }
    for (int i = n - 1; i >= 0; i--) {
            a[i] = rutgon(a[i]);
            xuat(a[i]);
            cout << endl;
    }
    }*/

//Quan ly sinh vien
/*#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;

struct DATE {
    int day, month, year;
};

typedef struct STUDENT {
    char id[11];
    char name[35];
    DATE dob;
    float math, phy, chem, aver;
}SV;

float tbc(float m, float p, float c) {
    float tbc = (m + p + c) / 3;
    return tbc;
}

void inputArrayStudents(SV *a, int &n) {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i].id;
        cin.ignore();
        cin.getline(a[i].name,35);
        fflush(stdin);
        cin >> a[i].dob.day >> a[i].dob.month >> a[i].dob.year;
        cin >> a[i].math >> a[i].phy >> a[i].chem;
    }
}



void outputArrayStudents(SV a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i].id << "\t|" << a[i].name << "\t|" << a[i].dob.day << "/" << a[i].dob.month << "/" << a[i].dob.year;
        cout << "\t|" << a[i].math << "\t|" << a[i].phy << "\t|" << a[i].chem << "\t|" << tbc(a[i].math, a[i].phy, a[i].chem);
        cout << endl;
    }
}

int main() {
    STUDENT a[100];
    int n;
    inputArrayStudents(a, n);
    cout << "ID\t|Full name\t|Date of birth\t|Maths\t|Phys\t|Chemis\t|Average score\n";
    outputArrayStudents(a, n);
    return 0;
}*/

//Nhap mang co kich thuoc lon
/*#include <iostream>
using namespace std;
#define MIN -1000
#define MAX 1000

int isTotalOven(int* a, int n) {
    for (int i = 0; i < n; i++)
        if (a[i] % 2 != 0) return 0;
        return 1;
}

int isValidValue(int* a, int n) {
    for (int i = 0; i < n; i++)
        if (a[i] < 2 * MIN || a[i] > 2 * MAX) return 0;
    return 1;
}

int main() {
    int n; cin >> n;
    srand(time(nullptr));
    int* a = new int[n];
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 2 * MAX + 2 * MIN;
        if (a[i] % 2 != 0) a[i] = a[i] + 1;
    }
    if (isTotalOven(a, n) == 1) cout << "Mang toan so chan" << endl;
    if (isValidValue(a, n) == 1) cout << "Mang chua cac gia tri nam trong khoang [" << 2 * MIN << "," << 2 * MAX << "]";
    return 0;
}*/

//Nhap mang kich thuoc lon tiep theo
#include <iostream>
using namespace std;

int isBinary(int **a, int m, int n) {
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] != 0 && a[i][j] != 1)
                return 0;
    return 1;
}

int main() {
    int m, n; cin >> m >> n;
    srand(time(nullptr));
    int **a = new int *[m];
    for (int i = 0; i < m; i++)
        a[i] = new int[n];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            a[i][j] = rand() % 1 + 0;
            if (a[i][j] != 0 && a[i][j] != 1) a[i][j]++;
        }
    if (isBinary(a, m, n) == 1) cout << "Ma tran nhi phan";
    return 0;
}



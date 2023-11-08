//Xoa khoang trang du thua
/*#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    for (int i = 0; i <= s.length(); i++) {
        if (s[i] == ' ' && s[i + 1] = ' ') {
            for (int j = i; j < s.length() - 1, j++) {
                s[i] = s[j + 1];
            }
        }
    }
    cout << s;
}*/

//Nhap, xuat chuoi
/*#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300
bool kiemtra(char a[MAX]) {
    for (int i = 0; i < MAX; i++) {
        if (a[i] >= '0' && a[i] <= '9') return false;
    }
    return true;
}
int main() {
    char a[MAX];
    cin.getline(a, MAX);
    if (kiemtra(a) == 1) cout << a;
    if (kiemtra(a) == 0) cout << "CHUOI KHONG HOP LE.";
    return 0;
}*/

//Noi chuoi, kiem tra co noi duoc khong
/*#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
#define MAX 255
int myStrlen(char s[]);
bool myStrcat(char s1[], char s2[]);
int main() {
    char s1[MAX], s2[MAX];
    fgets(s1, MAX, stdin);
    fgets(s2, MAX, stdin);
    bool kt = myStrcat(s1, s2);
    int a = myStrlen(s1), b = myStrlen(s2), c = a + b, i; char s[MAX];
    if (kt == 1) {
        cout << s1 << s2;
    }
    else if (kt == 0) cout << "Khong noi duoc.Khong du bo nho.";
    return 0;
}
char fgets(char s[]) {
    cin.getline(s, MAX);
    return s[MAX];
}
int myStrlen(char s[]) {
    int len = 0;
    for (int i = 0; s[i] != 0; i++) {
        len++;
    }
    return len;
}
bool myStrcat(char s1[], char s2[]) {
    if (myStrlen(s1) + myStrlen(s2) > MAX) return false;
    if (myStrlen(s1) + myStrlen(s2) <= MAX) return true;
}*/


//Chuan hoa dau cham cau
/*#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
#define MAX 300

void ChenChuoiTaiVitriK(char s[], char s1[], int k);
void Chuanhoa(char s[]);
int myStrlen(char s[], int k);
bool myStrcat(char s[], char s1[], char s2[]);
void myStrcpy(char s[], int vt, char s1[], int k);
int myStrstr(char s[], char s1[]);


int main()
{
    char s[MAX];

    fflush(stdin);
    fgets(s, MAX, stdin);

    char s1[MAX];
    myStrcpy(s1, 0, s, 0);
    Chuanhoa(s1);
    cout << s << endl << s1 << endl;
    return 0;
}

//###INSERT CODE HERE -

int myStrlen(char s[]) {
    int k = 0;
    while (s[k] != '\0') {
        k++;
    }
    return k + 1;
};
void xoa(char s[90], int vitrixoa)
{
    int n = myStrlen(s);
    for (int i = vitrixoa; i < n; i++)
        s[i] = s[i + 1];
    s[n - 1] = '\0';
}
void them(char* i, int vitri) {

}
void xoaKT(char* s)
{
    for (int i = 0; i < myStrlen(s); i++)
        if (s[i] == ' ' && s[i + 1] == ' ')
        {
            xoa(s, i);
            i--;
        }
    if (s[0] == ' ')
        xoa(s, 0);
    if (s[myStrlen(s) - 1] == ' ')
        xoa(s, myStrlen(s) - 1);
    for (int i = 0; i < myStrlen(s); i++) {
        if ((s[i] == ' ' && s[i + 1] == '.')) {
            xoa(s, i);
        }
    }

}

void myStrcpy(char s[], int vt, char s1[], int k) {
    for (int i = vt; i < myStrlen(s); i++) {
        s[i] = s1[i];
    }
};

void Chuanhoa(char s[]) {
    xoaKT(s);
    for (int i = 0; i < myStrlen(s); i++) {
        if (s[i] == '.' && s[i + 1] != ' ') {
            for (int j = myStrlen(s); j > i; j--) {
                s[i] = s[i - 1];
            }
            s[i] = '.';
            s[i + 1] = ' ';
        }
    }
    for (int i = 0; i < myStrlen(s); i++) {
        s[0] = toupper(s[0]);
        if (s[i] == '.' && s[i + 1] == ' ') {
            s[i + 2] = toupper(s[i + 2]);
        }
    }
};*/


/*#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
#define MAX 300

int myStrlen(char s[], int k); //Ham tra ve chieu dai chuoi s ke tu vi tri k
void myMemmove(char s[], int vt, int k); //Xoa k ky tu trong chuoi s, bat dau tu vi tri vt. 
int myStrstr(char s[], char s1[]); //Tim chuoi s1 trong chuoi s, neu tim thay tra ve vi tri s1[0] trong chuoi s, khong tin thay tra ve -1
void Chuanhoa(char s[]);

int main()
{
    char s[MAX];
    fgets(s, MAX, stdin);	//Nhap chuoi s	
    Chuanhoa(s);
    cout << s << endl;
    return 0;
}
int myStrlen(char s[], int vitri) {
    int k = vitri;
    while (s[k] != '\0') {
        k++;
    }
    return k + 1;
};

void xoa(char s[90], int vitrixoa)
{
    int n = myStrlen(s, 0);
    for (int i = vitrixoa; i < n; i++)
        s[i] = s[i + 1];
    s[n - 1] = '\0';
}

void xoaKT(char* s)
{
    for (int i = 0; i < myStrlen(s, 0); i++)
        if (s[i] == ' ' && s[i + 1] == ' ')
        {
            xoa(s, i);
            i--;
        }
    if (s[0] == ' ')
        xoa(s, 0);
    if (s[myStrlen(s, 0) - 1] == ' ')
        xoa(s, myStrlen(s, 0) - 1);
}
void Chuanhoa(char a[]) {
    xoaKT(a);
    a[0] = toupper(a[0]);
    for (int i = 1; i < myStrlen(a, 0); i++) {
        a[i] = tolower(a[i]);
    }
    for (int i = 1; i < myStrlen(a, 0); i++) {
        if (a[i] == ' ') {
            a[i + 1] = toupper(a[i + 1]);
        }
    }
}*/
//Chèn chuỗi
/*#include <iostream>
using namespace std;
#define MAX 300
int myStrlen(char s[], int k) {
    while (s[k] != '\0') {
        k++;
    }
    return k + 1;
}

char tach(char s[], char s1[], char s2[], int k) {
    int v;
    for (int i = 0; i < k; i++) {
        s1[i] = s[i];
    }
    for (int i = k; i < myStrlen(s,0); i++) {
        s2[i] = s[i];
    }
    return s1[MAX], s2[MAX];
}
int main()
{
    char s[MAX], s1[MAX];
    fgets(s, MAX, stdin);
    fgets(s1, MAX, stdin);
    int k;
    cin >> k;
    if (k < 0 || k>myStrlen(s, 0))
        cout << "Vi tri " << k << " khong thoa dieu kien." << endl;
    else
    {
        for (int i = 0; i < k; i++) {
            cout << s[i];
        }
        for (int i = 0; i < myStrlen(s1, 0) - 1; i++) {
            cout << s1[i];
        }
        for (int i = k; i < myStrlen(s, 0); i++) {
            cout << s[i];
        }
    }
}*/

//
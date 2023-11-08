//Dat chuoi trong dau ngoac
/*#include <iostream>
#include <cstring>
using namespace std;
char encloseInBrackets(char a[100]) {
    char b = '(';
    char c = ')';
    return b + a[100] + c;
}
int main()
{
    char a[100];
    cin.getline(a, 40);
    encloseInBrackets(a);
    cout << a;
    return 0;
}*/

//Dem khoang trang, ki tu hoa, thuong
/*#include <iostream>
#include <cstring>
using namespace std;
int countBlankSpace(char str[]) {
    int kt = 0;
    char str1[100];
    strcpy_s(str1, str);
    for (int i = 0; i < strlen(str1); i++) {
        if (str1[i] == ' ') kt++;
    }
    return kt;
}
void countUpperLower(char str[]) {
    int thuong = 0, hoa = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') thuong++;
        if (str[i] >= 'A' && str[i] <= 'Z') hoa++;
    }
    cout << endl;
    cout << "So ky tu hoa: " << hoa << endl;
    cout << "So ky tu thuong : " << thuong << endl;
}
int main() {
    char str[100], str1[100];
    cin.getline(str, 100);
    cout << "Chuoi: " << str;
    cout << "\nSo ky tu khoang trang: " << countBlankSpace(str);
    countUpperLower(str);
    return 0;
}*/

//Dem ky tu khong thuoc bang chu cai tieng Viet
/*#include<iostream>
#include<cstring>
using namespace std;
int countLetters(char s[]) {
    int d = 0;
    for (int i = 0; i <= strlen(s); i++) {
        if (s[i] == 'w' || s[i] == 'W' || s[i] == 'f' || s[i] == 'F' || s[i] == 'j' || s[i] == 'J' || s[i] == 'z' || s[i] == 'Z') {
            d++;
        }
    }
    return d;
}
int main()
{

    char s[256];
    cin.getline(s, 256);

    cout << countLetters(s) << endl;
    return 0;
}*/

//Doi chu hoa, thuong xen ke
/*#include <iostream>
#include<cstring>

using namespace std;

int main()
{
    char s1[200], s2[200];
    cout << "Nhap chuoi = ";
    cin.getline(s1, 200);
    for (int i = 0; i < 200; i++) {
        if (i % 2 == 0) s2[i] = toupper(s1[i]);
        if (i % 2 != 0) s2[i] = tolower(s1[i]);
    }
    //strcpy_s(s2, s1);
    

    cout << "\ns1=" << s1 << endl;
    cout << "s2=" << s2;

    return 0;
}*/

//Doi chu hoa chu thuong
/*#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s[10000];
    cin.getline(s, 10000);
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') s[i] = toupper(s[i]);
        else if (s[i] >= 'A' && s[i] <= 'Z') s[i] = tolower(s[i]);
    }
    cout << s;
}*/

//Viet hoa danh tu rieng
/*#include <iostream>
#include <cstring>
using namespace std;
void properNounCorrection(char str[100]) {
    char str1[100];
    strcpy_s(str1, str);
    for (int i = 0; i <= strlen(str); i++) {
        if (i == 0) str[i] = toupper(str[i]);
        if (str[i] == ' ') str[i + 1] = toupper(str[i + 1]);
        else str[i+1] = tolower(str[i+1]);
    }
}
int main() {
    char str[100], str1[100];
    cin.getline(str, 100);
    cout << "Chuoi ban dau: " << str;
    cout << "\nChuoi sau khi chuan hoa: ";
    properNounCorrection(str);
    cout << str;
    return 0;
}*/

//Thay the ky tu trong chuoi
/*#include <iostream>
#include <cstring>
using namespace std;
void replaceChar(char s1[100], char s2[100], char x) {
    for (int i = 0; i < strlen(s2); i++) {
        for (int j = 0; j < strlen(s1); j++) {
            if (s2[i] == s1[j]) s1[j] = '*';
        }
    }
}
int main() {
    char s1[100], s2[100];
    cin.getline(s1, 100);
    cin.getline(s2, 100);
    replaceChar(s1, s2, '*');
    cout << s1;
    return 0;
}*/

//Dat chuoi trong ngoac 2
/*#include <iostream>
#include <string>
using namespace std;
string encloseInBrackets(string a) {
    return '(' + a + ')';
}
int main() {
    string a;
    getline(cin, a);
    cout << encloseInBrackets(a);
    return 0;
}*/

//Viet hoa chu cai dau
/*#include <iostream>
#include <string>

using namespace std;
string properNounCorrection(string a) {
    for (int i = 0; i < a.length(); i++) {
        if (i == 0) a[i] = toupper(a[i]);
        else a[i] = tolower(a[i]);
    }
    return a;
}
int main()
{
    string a;
    getline(cin, a);
    cout << properNounCorrection(a);
    return 0;
}*/

//Viet hoa chu cai dau 2
/*#include <iostream>
#include <cstring>
using namespace std;
void properNounCorrection(char s[100]) {
    for (int i = 0; i < strlen(s); i++) {
        if (i == 0) s[i] = toupper(s[i]);
        else s[i] = tolower(s[i]);
    }
}
int main() {
    char s[100];
    cin.getline(s, 35);
    properNounCorrection(s);
    cout << s;
    return 0;
}*/

//Tim mien dia chi mail
/*#include <iostream>
#include <string>
using namespace std;
string findEmailDomain(string address) {
    size_t found = address.find_last_of('@');
    return address.substr(found);
}
int main() {
    string address;
    getline(cin, address);
    cout << findEmailDomain(address);
    return 0;
}*/

//Xoa khoang trang du thua
#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ' && s[i - 1] == ' ') s.erase(i - 1, 1);
    }
    cout << s;
    return 0;
}



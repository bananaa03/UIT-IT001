//Nhập xuát mảng lớn, đo thời gian hực hiện tác vụ
#include <iostream>
#include <time.h>
using namespace std;
#define MIN 0
#define MAX 1000

int getInteger(char* message);
int random(int a, int b);
void genArray(int a[], int n);
void printArray(int* a, int n);
void findElement(int* a, int n);

int main()
{
    srand((unsigned int)time(0));
    int n, choose, * a = NULL; 
    char answer; 
    int flag = 0; 

    do
    {
        cout << "\n\nMENU: ";
        cout << "\n1.Generate an array";
        cout << "\n2.Print the array";
        cout << "\n3.Find an element in the array";
        cout << "\nOther.EXIT";
        cout << "\nPlease choose an option: ";
        cin >> choose;
        switch (choose) {
        case 1: {
            char m[50] = "Please enter a number in range 1 .. 100,000,000: ";
            n = getInteger(m);
            flag = n;
            a = new int[n];
            clock_t start = clock();
            genArray(a, n);
            clock_t end = clock();
            cout << "\nTime to create an array: " << ((double)end - start) / CLOCKS_PER_SEC << " s" << endl;
            break; }
        case 2: { if (flag == 0) cout << "Please choose Option 1 to generate an array" << endl;
              else {
            clock_t start = clock();
            printArray(a, n);
            clock_t end = clock();
            cout << "\nTime to print the array: " << ((double)end - start) / CLOCKS_PER_SEC << " s" << endl;
        }
              break; }
        case 3: { if (flag == 0) cout << "Please choose Option 1 to generate an array" << endl;
              else {
            clock_t start = clock();
            findElement(a, n);
            clock_t end = clock();
            cout << "\nTime to find an element in the array: " << ((double)end - start) / CLOCKS_PER_SEC << " s" << endl;
        }
              break; }
        }
        if (choose == 1 || choose == 2 || choose == 3) {
            cout << "Do you want to continue(y/n): ";
            cin >> answer;
        }
        else answer = 'n';
        } while (answer == 'y');
        cout << "See you again";
}

int getInteger(char *message) {
    int n;
    do
    {
        cout << message;
        cin >> n;
    } while (n < 0 || n > 100000000);
    return n;
}

int random(int a, int b) {
    int c;
    c = rand() % (b - a + 1) + a;
    return c;
}

void genArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        a[i] = random(MIN, MAX);
    }
}

void printArray(int* a, int n) {
    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

void findElement(int* a, int n) {
    int d = 0;
    cout << "Enter an integer: "; int x; cin >> x;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            d++;
            cout << "The first index where " << x << " was found: " << i;
            break;
        }
    }
    if (d == 0) cout << x << " was not found in the array";
}

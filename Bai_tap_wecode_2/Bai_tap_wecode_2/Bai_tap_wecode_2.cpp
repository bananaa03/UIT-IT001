//Kiểm tra loại tam giác và tính diện tích
/*#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int a, b, c;
    double s, p;
    cin >> a;
    cout << endl;
    cin >> b;
    cout << endl;
    cin >> c;
    cout << endl;
    p = double(a + b + c) / 2.0;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    if (a + b <= c || b + c <= a || a + c <= b)
        cout << "Khong phai tam giac" << endl;
    else {
       if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
           cout << fixed << setprecision(2) << "Tam giac vuong, dien tich = " << s;
       else if (a == b && b == c && a == c)
           cout << fixed << setprecision(2) << "Tam giac deu, dien tich = " << s;
       else if (a == b || a == c || b == c)
           cout << fixed << setprecision(2) << "Tam giac can, dien tich = " << s;
       else cout << fixed << setprecision(2) << "Tam giac thuong, dien tich = " << s;
    }
    return 0;
}*/

//In ra thứ trong tuần từ 1 số nhập từ bàn phím
/*#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    switch (x) {
    case 2: cout << "Thu hai";
        break;
    case 3: cout << "Thu ba";
        break; 
    case 4: cout << "Thu tu";
        break; 
    case 5: cout << "Thu nam";
        break; 
    case 6: cout << "Thu sau";
        break; 
    case 7: cout << "Thu bay";
        break; 
    case 8: cout << "Chu nhat";
        break;  
    default: cout << "Khong co thu tuong duong";
        break; 
    }
    return 0;
}*/

//Kiểm tra tính hợp lệ của tháng, năm
/*#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int thang, nam;
    cin >> thang >> nam;
    if (thang <= 12 && thang >= 1 && nam > 1975) {
        if (thang == 2)
            if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0)
                cout << "29";
            else cout << "28";
        if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12)
            cout << "31";
        if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
            cout << "30";
    }
    else cout << "Khong hop le.";
    return 0;
}*/

//Kiểm tra đoạn mã giả có biến thành vòng lặp vô tận hay khong
/*
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    if (a < b) {
        a++;
        b--;
    }
    else {
        if (a == b) cout << "FALSE";
        else cout << "TRUE";
    }
    
    return 0;

}*/

//In các số thực theo thứ tự tăng dần
/*
#include <cmath>
using namespace std;
int main() {
    double a, b, c, m;
    cin >> a >> b >> c;
    if (a > b) {
        m = a;
        a = b;
        b = m;
    }
    if (a > c) {
        m = a;
        a = c;
        c = m;
    }
    if (b > c) {
        m = b;
        b = c;
        c = m;
    }
    cout << a << " " << b << " " << c;
    return 0;

}*/

//Năm con gì?
/*#include <iostream>
using namespace std;
int main() {
    int n,g;
    cin >> n;
    if(n>0){
        g=n-(n/12)*12;
        switch(g){
            case 1:{cout<<"DAU";
                break;
            }
            case 2:{cout<<"TUAT";
                break;
            }
            case 3:{cout<<"HOI";
                break;
            }
            case 4:{cout<<"TY'";
                break;
            }
            case 5:{cout<<"SUU";
                break;
            }
            case 6:{cout<<"DAN";
                break;
            }
            case 7:{cout<<"MEO";
                break;
            }
            case 8:{cout<<"THIN";
                break;
            }
            case 9:{cout<<"TY.";
                break;
            }
            case 10:{cout<<"NGO";
                break;
            }
            case 11:{cout<<"MUI";
                break;
            }
            case 12:{cout<<"THAN";
                break;
            }
            case 0:{cout<<"THAN";
                break;
            }
        }
        
    }
    if(n<0){
        g=n-(n/12)*12;
        switch(g){
            case -1:{cout<<"THAN";
                break;
            }
            case -2:{cout<<"MUI";
                break;
            }
            case -3:{cout<<"NGO";
                break;
            }
            case -4:{cout<<"TY.";
                break;
            }
            case -5:{cout<<"THIN";
                break;
            }
            case -6:{cout<<"MEO";
                break;
            }
            case -7:{cout<<"DAN";
                break;
            }
            case -8:{cout<<"SUU";
                break;
            }
            case -9:{cout<<"TY'";
                break;
            }
            case -10:{cout<<"HOI";
                break;
            }
            case -11:{cout<<"TUAT";
                break;
            }
            case -12:{cout<<"DAU";
                break;
            }
            case 0:{cout<<"DAU";
                break;
            }
        }
    }
    return 0;
}*/

//Kiểm tra tam giac_2
/*#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && b + c > a && a + c > b) {
        if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
            cout << "VUONG";
        else if (a == b && b == c && a == c)
            cout << "DEU";
        else if (a == b || b == c || a == c)
            cout << "CAN";
        else if (a * a + b * b < c * c || a * a + c * c < b * b || b * b + c * c < a * a)
            cout << "TU";
        else cout << "NHON";
    }
    else cout << "KHONG";
    return 0;
}*/

//Quay tia OA một góc, hỏi tia OA nằm ở góc phần tư thứ mấy
/*#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int x;
    cin >> x;
    //x = 4-(x/90)%4;
    x = (((-x % 360) + 360) % 360) / 90 + 1;
    cout << x;
    return 0;
}*/

//Tính giá cước taxi
/*#include <iostream>  
using namespace std;
int main() {
    double km;
    bool soluotdi;
    double tg;
    double s1 = 0, s3 = 0, s2 = 0;
    cin >> km >> soluotdi;



    if (soluotdi==0) {
        cin >> tg;
        s1 = s1 + 10000.0;
        if (km >= 2.0 && km <= 30.0) s1 = s1 + 13600.0 * km;
        else if (km > 30.0) s1 = s1 + 11000.0 * km;
        cout << s1;
    }



    if (soluotdi==1) {
        cin >> tg;
        if (tg < 0) {
            cout << "Gia tri khong hop le";
        }
        else {
            s1 = s1 + 10000;
            if (km >= 2.0 && km <= 30.0) s1 = s1 + 13600.0 * km;
            else if (km > 30.0) s1 = s1 + 11000.0 * km;
            s2 = s2 + 11000 * km + 10000;
            if (tg > 2.0) cout << s1 + (s2 - s2 * 0.4) + 20000 * tg;
            else cout << s1 + (s2 - s2 * 0.4);
        }
    }
    return 0;
}*/

//Tính phương trình bậc nhất

/*#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, b;
    double x;
    cin >> a >> b;
    if (a == 0) {
        if (b == 0) cout << "Phuong trinh 0x+0=0 co vo so nghiem" << endl;
        else cout << "Phuong trinh 0x+" << b << "=0 vo nghiem" << endl;
    }
    if(a!=0) {
        x = -b / double(a);
        cout << fixed << setprecision(5) << "Phuong trinh " << a << "x+" << b << "=0" << " co 1 nghiem x = " << x << endl;
    }
}*/

//Tính pt bậc 2 với a có thể bằng 0
/*#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    double a, b, c, delta, x1, x2;
    cin >> a >> b >> c;
    delta = b * b - 4 * a * c;
    if (a != 0) {
        if (delta > 0)
        {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            if (x1 < x2) cout << x1 << " " << x2 << endl;
            else cout << x2 << " " << x1 << endl;
        }
        else if (delta == 0) {
            x1 = -b / 2 * a;
            x2 = -b / 2 * a;
            cout << x1 << " " << x2;
        }
        else
            cout << "IE";
    }
    if (a == 0) {
        if (b == 0) {
            if (c == 0) cout << "INF";
            if (c != 0) cout << "IE";
        }
        if (b != 0) {
            x1 = -c/ b;
            cout << x1;
        }
    }
}*/

//Giếng ma thuật
/*#include <iostream>
using namespace std;
int main() {
    int a, b, n, s=0;
    cin >> a >> b >> n;
    for (int i = 1; i <= n; i++) {
        s = s + a * b;
        a++;
        b++;
    }
    cout << s;
}*/

//In dãy kí tự
/*#include <iostream>
using namespace std;
int main() {
    unsigned n;
    char x;
    cin >> n; cout << endl;
    while (n >= 0) {
        cin >> x; cout << endl; if (x == 'X') break;
        for (int i = 1; i <= n; i++) cout << x << " ";
        cout << endl;
    }
    return 0;
}*/

//Tính tổng ước số
/*#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, s=0;
    cin >> n;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) s = s + i;
    }
    cout << s;
    return 0;
}*/

//Xuất dãy số theo thứ tự
/*#include <iostream>
using namespace std;
int main() {
    int n, i;
    cin >> n;
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) cout << i << " ";
    }
    cout << endl;
    for (i = 1; i <= n; i++) {
        if (i % 2 != 0) cout << 50 - i << " ";
    }
    cout << endl;
    cout << "Done";
    return 0;
}*/

//Xuất dãy số
/*#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;
    for (i = 1; i <= n; i++) {
        if (i > 5 && i % 5 == 0) cout << i << " ";
    }
    cout << endl;
    for (i = 1; i <= n; i++)
        if (i > 10 && i % 10 == 0) cout << i << " ";
    return 0;

}*/

//Tổng các số nhỏ hơn n , chia hết cho a và không chia hết cho b
/*#include <iostream>
using namespace std;
int main() {
    int n, a, b, s = 0;
    cin >> n >> a >> b;
    for (int i = 1; i <= n; i++) {
        if (i % a == 0 && i % b != 0) s = s + i;
    }
    cout << s;
    return 0;
}*/

//Đếm số chữ số và dấu
/*#include <iostream>
using namespace std;
int main() {
    int n, i, d = 0, t;
    cin >> n;
    if(n==0) cout << "So 0 co 1 chu so";
    t = n;
    if (t > 0) {
        while (t > 0) {
            d++;
            t = t / 10;
        }
        cout << "So " << n << " co " << d << " chu so";
    }
    
    if (t < 0) {
        while (t < 0) {
            d++;
            t = int(t);
            t = t / 10;
        }
        cout << "So " << n << " co " << d << " chu so va 1 dau";
    }
  
}*/

//Xuất các chữ số của một số, mỗi chữ số 1 hàng
/*#include <iostream>
using namespace std;
int main() {
    int x, s;
    do {
        cin >> x;
    } while (x < 0);
    s = x;
    while (s > 0) {
        x = s % 10;
        s = s / 10;
        cout << x << endl;
    }
    return 0;
}*/

//Xuất các chữ số của một số như bên trên, thêm trường hợp số âm thì xuất dấu - BAN DEFINE INCLUDE USING FOR
/*#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int x, s;
    cin >> x;
    s = x;
    if (s > 0) {
        while (s > 0) {
            x = s % 10;
            s = s / 10;
            cout << x << endl;
        }
    }
    if (s < 0) {
        while (s < 0) {
            x = s % 10 *(-1);
            s = s / 10;
            cout << x << endl;
        }
        cout << "-";
    }
    return 0;
}*/

//Góc phần tư phiên bản vjp pro hơn
/*#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, x, y;
    cin >> n;
    for(int i=1;i<=n;i++) {
        cin >> x >> y; cout << endl;
        if (x > 0 && y > 0) cout << "I" << endl;
        if (x > 0 && y < 0) cout << "IV" << endl;
        if (x < 0 && y < 0) cout << "III" << endl;
        if (x < 0 && y > 0) cout << "II" << endl;
        if (y == 0 && x != 0) cout << "H" << endl;
        if (y != 0 && x == 0) cout << "T" << endl;
        if (x == 0 && y == 0) cout << "O" << endl;
    }
    return 0;
}*/

//Phân tích thành tổng 2 số
/*#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, left, right, i, d = 0;
    cin >> n >> left >> right;
    for (i = left; i <= right; i++) {
        if (left + right == n) cout << d++;
        else if (left + i == n) cout << d++;
        else if (right + i == n) cout << d++;
    }
}*/


//Tính 3 cái tổng
/*#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, i;
    double s1 = 0, s2 = 0, s3 = 0, s22 = 1, s33 = 0;
    cin >> n;
    for (i = 1; i <= n; i++) {
        s1 = s1 + pow(i, i);
    }
    cout << s1 << endl;
    for (i = 1; i <= n; i++) {
        s22 = s22 * i;
        s2 = s2 + s22;
    }
    cout << s2 << endl;
    for (i = 1; i <= n; i++) {
        s33 = s33 + i;
        s3 = s3 + 1 / s33;
    }
    cout << s3 << endl;


}*/


//Tính 3 cái tổng phiên bản nâng cấp
/*#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, i, x;
    double s1 = 1, s2 = 1, s3 = 1, s33 = 1;
    cin >> n >> x;
    for (i = 1; i <= n; i++) {
        s1 = s1 + pow(x, i);
    }
    cout << s1 << endl;
    for (i = 1; i <= n; i++) {
        s2 = s2 + pow(x, 2 * i);
    }
    cout << s2 << endl;
    for (i = 1; i <= n; i++) {
        s33 = s33 * i;
        s3 = s3 + pow(x, i) / s33;
    }
    cout << s3 << endl;
}*/

//Tính số PI bằng công thức
/*#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    double pi = 1, s = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        pi = pi + (pow(-1, i) / (2 * i + 1));
    }
    cout << 4 * pi << endl;
    return 0;
}*/

/*#include <iostream>
using namespace std;
int main() {
    int n, s, i;
    cin >> n;
    s = 0;
    int tachra;
    while (n!=0) {
        tachra = n % 10;
        s = s + tachra;
        n = n / 10;
    }
    cout << s;
}*/

//Kiểm tra số đối xứng
/*#include <iostream>
using namespace std;
int main() {
    int n, s = 0, tr, t;
    cin >> n;
    for (t = n; n != 0; n = n / 10) {
        tr = n % 10;
        s = s * 10 + tr;
    }
    if (t == s) cout << "true";
    else cout << "false";
    return 0;
}*/


//Số ngtố sinh đôi
/*#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, i;
    cin >> n;
    if (n < 2) return 0;
    if(n>2){
        for (i = 2; i < sqrt(n); i++) {
            if ()
        }
}*/


//Thời gian cuộc gọi
/*#include <iostream>
using namespace std;
int main() {
    int min1, min2_10, min11, s;
    cin >> min1 >> min2_10 >> min11 >> s;
    
    if (s = min1) cout << 1;
    if (s > min1 && s <= min1 + min2_10 * 9) {
        s = s - min1;
        cout << 1 + s / min2_10;
    }
    if (s > min1 + min2_10 * 9 && s <= min1 + min2_10 * 9 + min11) cout << 1 + 9 + 11;
    if (s > min1 + min2_10 * 9 + min11) {
        s = s - min1;
        s = s - min2_10 * 9;
        cout << 1 + 9 + s / min11;
    }
    return 0;
}*/


//Khám phá lâu đài cổ
/*#include <iostream>
using namespace std;

int main() {
    int w1, w2, v1, v2, max, v, w;
    cin >> v1 >> w1;
    cin >> v2 >> w2;
    cin >> max;

    if ((w1 + w2) <= max) {
        w = w1 + w2;
        v = v1 + v2;
    }
    else
    {
        if ((w1 > max) && (w2 > max)) {
            w = 0;
            v = 0;
        }
        if ((w1 <= max) && (w2 > max)) {
            w = w1;
            v = v1;
        }
        if ((w2 <= max) && (w1 > max)) {
            w = w2;
            v = v2;
        }
        if ((w1 <= max) && (w2 <= max)) {
            if (v1 < v2) {
                w = w2;
                v = v2;
            }
            else {
                w = w1;
                v = v1;
            }
        }
    }

    cout << v << " " << w;
}*/

//Tổng các chữ số của một số
/*#include <iostream>
using namespace std;
int main() {
    int n, tong = 0;
    cin >> n;
    while (n > 0) {
        tong = tong + n % 10;
        n = n / 10;
    }
    cout << tong;
    return 0;
}*/
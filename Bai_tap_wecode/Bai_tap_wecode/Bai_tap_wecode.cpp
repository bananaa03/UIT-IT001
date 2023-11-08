//Bài tập đổi độ F sang độ C, F sang K
/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
;
###End banned keyword*/
/*#include <iostream>

using namespace std;


int main()
{
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    double x;
    cin >> x;
    cout << (x - 32) * 5 / 9 << " " << ((x - 32) * 5 / 9) + 273.15
    

        //###INSERT CODE HERE -


        << endl;
    return 0;


}*/

//đổi đơn vị từ psi sang kg/cm^2
/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
;
###End banned keyword*/
/*#include <iostream>

using namespace std;



int main()
{
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    double x;

    cin >> x;

    cout << ( x*0.07030690061
        
        ) << endl;
    return 0;
}*/


//Tính độ dài L của n móc xích
/*#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    unsigned short d, r;
    int n;
    cin >> d >> r >> n;
    cout << 2 * d + 2 * r * n;
    return 0;

}*/


//số chắn in ra 0, số lẻ in ra 1
/*#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x;
    cin >> x;
    cout<<x%2;

    
    return 0;

}*/


//tính pt bậc 2 với a khác 0
/*#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a, delta, j, x1, x2;
    float b, c;
   
    do {
        cin >> a; cout << endl;
        cin >> b; cout << endl;
        cin >> c; cout << endl;
    } while (a == 0);
    delta = b * b - 4 * a * c;
    j = sqrt(delta);
   
    if (delta == 0) {
        x1 = x2 = -b / 2 * a;
        cout << "PT co nghiem kep: x1 = x2 = " << x1;
    }
    if (delta > 0) {
        x1 = (-b + j) / 2 * a;
        x2 = (-b - j) / 2 * a;
        cout << "PT co hai nghiem phan biet:" << endl << "x1 = " << x1 << endl << "x2 = " << x2 << endl;
    };
    x1 = (abs(x1) < 0.001) ? 0 : x1;
    x2 = (abs(x2) < 0.001) ? 0 : x2;
    if (delta < 0) cout << "PTVN";
    return 0;

}*/


//tính giá trị hàm số
/*#include<iostream>
#include<cmath>
#define e 2.718281828
using namespace std;
int main()
{
    float x,f;
    int i;
    cin >> x;
    if (x>10) f=x+sqrt(x);
    if((x>=-10)&&(x<=10)) f=exp(x);
    if (x < -10) f = pow(x, 3) - 2 * x + 1 / x;
    cout << f;
    return 0;

    
}*/

//Tính vận tốc theo đơn vị m/s với x km và y giờ
/*#include <iostream>
#include<cmath>
#include <iomanip>

using namespace std;
int main()
{
    int x, y;
    double v, n;
    cin >> x >> y;
    v = double(x * y) / 3.6;
    if (v >= 10 && v <= 99) cout << setprecision(16) << v;
    else cout << v;
    return 0;
}*/

//Bài toán gà chó
/*#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int c, g;
    int xxx, yy;
    cin >> xxx >> yy;
    for(c=1;c<xxx;c++)
        for(g=1;g<xxx;g++)
            if ((g + c == xxx) && (2 * g + 4 * c == yy)) {
                cout << g << " " << c;
            }
    return 0;
 }*/

//Làm tròn với phần thập phân có d chữ số
/*#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double x;
    int d;
    cin >> x;
    cin >> d;
    x = x * pow(10,d) + 0.5;
    x = int(x);
    x = x / pow(10,d);
    cout << x;

    

    return 0;
}*/

//Tính giá trị hàm again
/*#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;
int main()
{
    double x, f;
    cin >> x;
    if (x > 0) f = pow(x, 4) + log10(x) / x;
    if (x <= 0) f = sqrt(2 * abs(x)) + 6 * x;
    cout << fixed<<setprecision(2)<< f; 
    return 0;
}*/

//tính cộng trừ nhân chia(2 chữ số phần thập phân) ko dùng setprecision
/*#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a, b,x;
    cin >> a >> b;
    cout << "(" << a << ") " << "+ " << "(" << b << ") = "  << a + b << endl;
    cout << "(" << a << ") " << "- " << "(" << b << ") = " << a - b << endl;
    cout << "(" << a << ") " << "* " << "(" << b << ") = " << a * b << endl;
    x = a / b;
    x = roundf(x * 100) / 100;
    cout << "(" << a << ") " << "/ " << "(" << b << ") = " << x << endl;
    return 0;
}*/


//Tính diện tích tam giác theo công thức Heron
/*#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c;
    double p, s;
    do{
        cin >> a;
        cout << endl;
    } while (a > 20);
    do {
        cin >> b;
        cout << endl;
    } while (b > 20);
    do {
        cin >> c;
        cout << endl;
    } while (c > 20);
    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    s = s * pow(10, 2) + 0.5;
    s = int(s);
    s = s / pow(10, 2);
    cout << s;
    return 0;
}*/

//Phân loại nhân khẩu
/*#include<iostream>
using namespace std;
int main()
{
    int age; cin >> age;
    char gender; cin >> gender;
#include<iostream>
    using namespace std;
    int main()
    {
        int age; cin >> age;
        char gender; cin >> gender;
        if (age >= 21) {
            if ((gender == 'M') || (gender == 'm'))
                cout << "1" << endl;
            if ((gender == 'F') || (gender == 'f'))
                cout << "2" << endl;
        }
        if (age < 21) {
            if ((gender == 'M') || (gender == 'm'))
                cout << "3" << endl;
            if ((gender == 'F') || (gender == 'f'))
                cout << "4" << endl;
        }
        if (!((gender == 'M') || (gender == 'm') || (gender == 'F') || (gender == 'f')))
            cout << "I do not know why" << endl;
        return 0;
    }*/


    //Hỏi đáp
    /*
    using namespace std;
    int main() {
        int temperature;
        cout << "What is the outdoor temperature?";
        cin >> temperature;
        cout << endl;
        cout << "What is your plan today?" << endl;
        if (temperature >= 33)  cout << "Good day for swimming";
        if ((temperature >= 24) && (temperature < 33)) cout << "Good day for golfing";
        if (temperature < 10) cout << "Go to bed";
        return 0;
    }*/

    //Xuất tập nghiệm của ax+b=0
    /*
    #include<cmath>
    using namespace std;

    int main()
    {
        double a, b, x;
        cin >> a >> b;
        if (a == 0) {
            if (b == 0)
                cout << "ℝ";
            else cout << "Ø";
        };
        if (a != 0) {
            x = -b / a;
            cout << "{" << x << "}";
            return 0;
        }
    }*/

    //Làm tròn số lẻ đến mức 1/n
    /*#include <cmath>
    #include <iostream>
    int main()
    {
        float a;
        int n;
        std::cin >> a >> n;
        a = a * n;
        a = round(a);
        a = a * 1/n;
        std::cout.precision(10);
        std::cout << a;
        return 0;
    }*/

    //Tính điểm trung bình và xếp loại học lực
    /*#include <iostream>
    #include <cmath>
    #include <iomanip>
    using namespace std;
    int main()
    {
        int toan, ly, hoa;
        float dtb;
        cin >> toan;
        cout << endl;
        cin >> ly;
        cout << endl;
        cin >> hoa;
        cout << endl;

        cout << fixed << setprecision(2) << "DTB = " << dtb << endl;
        if ((dtb >= 9) && (dtb <= 10)) cout << "Loai: XUAT SAC";
        if ((dtb >= 8) && (dtb < 9)) cout << "Loai: GIOI";
        if ((dtb >= 7) && (dtb < 8)) cout << "Loai: KHA";
        if ((dtb >= 6) && (dtb < 7)) cout << "Loai: TB KHA";
        if ((dtb >= 5) && (dtb < 6)) cout << "Loai: TB";
        if ((dtb >= 4) && (dtb < 5)) cout << "Loai: YEU";
        if (dtb < 4) cout << "Loai: KEM";
        return 0;
    }*/

   
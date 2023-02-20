#include <bits/stdc++.h>
using namespace std;
 
void findRoots(int a, int b, int c)
{
    if (a == 0) {
        cout << "Invalid";
        return;
    }
 
    int d = b * b - 4 * a * c;
    double sqrt_val = sqrt(abs(d));
 
    if (d > 0) {
        cout << "Co nghiem phan biet \n";
        cout << (double)(-b + sqrt_val) / (2 * a) << "\n"
             << (double)(-b - sqrt_val) / (2 * a);
    }
    else if (d == 0) {
        cout << "Co nghiem giong nhau \n";
        cout << -(double)b / (2 * a);
    }
    else
    {
        cout << "Co vo so nghiem \n";
        cout << -(double)b / (2 * a) << " + i"
             << sqrt_val / (2 * a) << "\n"
             << -(double)b / (2 * a) << " - i"
             << sqrt_val / (2 * a);
    }
}

int main()
{
    int a,b,c;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    cout << "Nhap c: ";
    cin >> c;
    findRoots(a, b, c);
    return 0;
}

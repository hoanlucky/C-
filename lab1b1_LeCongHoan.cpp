#include <iostream>

using namespace std;

int tinhqd(float a, float b)
{
    float quangduong = 0;
    quangduong = a*b;
    return quangduong;
}

int main()
{
    cout << "Nhap vao toc do: ";
    float bd,kt;
    cin >> bd;
    cout << "Nhap vao so gio di: ";
    cin >> kt;
    if(bd<0 || kt<1){
    	cout << "Nhap sai gia tri";
    }
    else{
    	cout << tinhqd(bd,kt);
    }
}

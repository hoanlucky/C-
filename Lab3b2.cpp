#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int *ptr = arr;
    int sum = 0;
    cout << "Nhap 10 gia tri cua mang: ";
    for(int i = 0; i < 10; i++) {
        cin >> *(ptr++);
        sum += *(ptr-1);
    }
    cout << "tong cac phan tu mang: " << sum << endl;
    return 0;
}

#include <iostream>
using namespace std;

void swap(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int x = 3, y = 6;
    cout << "Truoc: x = " << x << ", y = " << y << endl;
    swap(&x, &y);
    cout << "Sau: x = " << x << ", y = " << y << endl;
    return 0;
}

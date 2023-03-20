#include <iostream>
#include "Lab5.h"
using namespace std;

int main(){
	int ip;
	cout << "Nhap vao nhiet do: " << endl;
	cin >> ip;
	LuuNhietDo test(ip);
	cout << "O nhiet do "<< ip <<" do K thi:"<< endl;
	if (test.ruousoi()){
		cout << "Ruou se soi "<< endl;
	}
	if (test.ruoudongbang()){
		cout << "Ruou se dong bang "<< endl;
	}
	if (test.nuocsoi()){
		cout << "Nuoc se sôi "<< endl;
	}
	if (test.nuocdongbang()){
		cout << "Nuoc se dong bang "<< endl;
	}
	if (test.oxysoi()){
		cout << "Oxy se soi "<< endl;
	}
	if (test.oxydongbang()){
		cout << "Oxy se dong bang "<< endl;
	}
	return 0;
}
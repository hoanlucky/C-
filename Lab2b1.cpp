#include <iostream>
#include<fstream>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;

bool check(int dodai){
	int hv[50][50];
	int tongcot = 0;
	int tonghang = 0;
	int sum = 0;
	for(int i=0;i<dodai;i++)
    {
		for(int j=0;j<dodai;j++)
		{
			cin>>hv[i][j];
        }
    }
    
    //tong cac cot
    for(int i=0;i<dodai;i++){
		tongcot = 0;
		for (int j = 0; j < n; j++) {
            tongcot += hv[j][i];
        }
        if (i != 0 && tongcot != sum) { 
            return false;
        }
        sum = rowSum;
		//tong cac hang
		// tong cac duong cheo
    }
    
    //tong cac hang
    for(int i=0;i<dodai;i++){
		tongcot = 0;
		for (int j = 0; j < n; j++) {
            tongcot += hv[i][j];
        }
        if (i != 0 && tongcot != sum) { 
            return false; 
        }
        sum = rowSum;
    }
    
}

int main(){
	int dodai;
	cout<<"Nhap vao chieu dai va rong: ";
	cin>>dodai;
	check(dodai);
}

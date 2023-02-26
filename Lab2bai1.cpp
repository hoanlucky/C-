#include <iostream>

using namespace std;

bool check(int arr[50][50], int n) 
{ 
	int sum = 0;
    int rowSum = 0; 
    for (int i = 0; i < n; i++) { 
        int rowSum = 0; 
        for (int j = 0; j < n; j++) { 
            rowSum += arr[i][j]; 
        } 
  
        if (i != 0 && rowSum != sum) { 
            return false; 
        } 
  
        sum = rowSum; 
    } 
  
    int colSum = 0; 
    for (int i = 0; i < n; i++) { 
        int colSum = 0; 
        for (int j = 0; j < n; j++) { 
            colSum += arr[j][i]; 
        } 
  

        if (colSum != sum) { 
            return false; 
        } 
    } 
  

    int d1Sum = 0; 
    for (int i = 0; i < n; i++) { 
        d1Sum += arr[i][i]; 
    } 

    if (d1Sum != sum) { 
        return false; 
    } 
  
    int d2Sum = 0; 
    for (int i = 0; i < n; i++) { 
        d2Sum += arr[i][n - i - 1]; 
    } 

    if (d2Sum != sum) { 
        return false; 
    } 

    return true;

}


int main(){
	int dodai;
	int hv[50][50];
	cout<<"Nhap vao chieu dai va rong: ";
	cin>>dodai;
	for(int i=0;i<dodai;i++)
    {
		for(int j=0;j<dodai;j++)
		{
			cin>>hv[i][j];
        }
    }
    if(check(hv,dodai)==true){
    	cout<<"La 1 La Shu Magic Square!";
	}else{
		cout<<"Khong phai la Shu Magic Square!";
	}
}

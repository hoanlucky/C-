#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Lab5b3.h"
using namespace std;

int main(){
	Coin coin;
	int solansap = 0;
	int solanngua = 0;
	cout << "Test: "<< coin.getSideUp()<< endl;
	for (int i = 0; i < 20; i++)
    {
        coin.toss();
        std::string currentSide = coin.getSideUp();
        std::cout << "Lan nem xu thu " << i+1 << " la: " << currentSide << std::endl;
        if (currentSide == "sap")
            solansap++;
        else
            solanngua++;
    }
    std::cout << "So lan sap: " << solansap << std::endl;
    std::cout << "So lan ngua: " << solanngua << std::endl;
    cout << "random: "<< rand()<<endl;
	return 0;
}
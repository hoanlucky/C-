#include "Lab5b3.h"
#include <cstdlib>
#include <ctime>

Coin::Coin()
{
    srand(time(nullptr));
    int randomNum = rand() % 2;
    if (randomNum == 0)
        sideUp = "sap";
    else
        sideUp = "ngua"; 
}
    
void Coin::toss()
{
    srand(time(nullptr));
    int randomNum = rand() % 2;
    if (randomNum == 0)
        sideUp = "sap";
    else
        sideUp = "ngua";  
}
    
std::string Coin::getSideUp()
{
    return sideUp;
}

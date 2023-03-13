#include <iostream>
#include <string>

using namespace std;

class RetailItem {
private:
    string description;
    int unitsOnHand;
    double price;
public:
    RetailItem(string desc, int units, double p) {
        description = desc;
        unitsOnHand = units;
        price = p;
    }
    void setDescription(string desc) {
        description = desc;
    }
    void setUnitsOnHand(int units) {
        unitsOnHand = units;
    }
    void setPrice(double p) {
        price = p;
    }
    string getDescription() {
        return description;
    }
    int getUnitsOnHand() {
        return unitsOnHand;
    }
    double getPrice() {
        return price;
    }
};

int main() {
    RetailItem item1("Shirt", 20, 19.99);
    RetailItem item2("Pants", 15, 29.99);
    RetailItem item3("Jacket", 10, 49.99);
    
    cout << "Mat hang1" << endl;
    cout << "Mo ta: " << item1.getDescription() << endl;
    cout << "Ton kho: " << item1.getUnitsOnHand() << endl;
    cout << "Gia: $" << item1.getPrice() << endl << endl;
    
    cout << "Mat hang2" << endl;
    cout << "Mo ta: " << item2.getDescription() << endl;
    cout << "Ton kho: " << item2.getUnitsOnHand() << endl;
    cout << "Gia: $" << item2.getPrice() << endl << endl;
    
    cout << "Mat hang3" << endl;
    cout << "Mo ta: " << item3.getDescription() << endl;
    cout << "Ton kho: " << item3.getUnitsOnHand() << endl;
    cout << "Gia: $" << item3.getPrice() << endl << endl;
    
    return 0;
}

#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    int yearModel;
    string make;
    int speed;
public:
    Car(int year, string carMake) {
        yearModel = year;
        make = carMake;
        speed = 0;
    }
    
    int getYearModel() {
        return yearModel;
    }
    
    string getMake() {
        return make;
    }
    
    int getSpeed() {
        return speed;
    }
    
    void accelerate() {
        speed += 5;
    }
    
    void brake() {
        speed -= 5;
    }
};

int main() {
    Car car(2023, "Toyota");
    
    cout << "Starting speed: " << car.getSpeed() << " mph." << endl << endl;

    for (int i = 1; i <= 5; i++) {
        car.accelerate();
        cout << "After acceleration " << i << ", current speed is: " << car.getSpeed() << " mph." << endl;
    }
    
    cout << endl;
    
    for (int i = 1; i <= 5; i++) {
        car.brake();
        cout << "After brake " << i << ", current speed is: " << car.getSpeed() << " mph." << endl;
    }
    
    return 0;
}

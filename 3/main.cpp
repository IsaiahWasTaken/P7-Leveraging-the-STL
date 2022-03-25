#include <iostream>
#include <random>
#include <algorithm>
#include <string>
#include "Utility.h"
#include "Car.h"


int main() {
    auto cars = randomCars();
    std::cout << "Cars: " << cars << "\n";

    double sum = accumulate(cars.begin(), cars.end(), 0);
    double avg  = ((sum)/cars.size());

    double min = 0;
    double max = cars[0].price();
    for(Car& x : cars) {
        if (x.price() > max){max = x.price();}
        if(x.price() < min){ min = x.price();}
    }
    double range  = (max - min);
    
    std::cout << "The average price is: $" << avg << "\n";

    std::cout << "The range is: $" << range << "\n";
}


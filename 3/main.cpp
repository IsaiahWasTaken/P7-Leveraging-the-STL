#include <iostream>
#include <random>
#include <algorithm>
#include <string>
#include "Utility.h"
#include "Car.h"

int main() {
    auto cars = randomCars();
    std::cout << "Cars: " << cars << "\n";

    // TODO: print the average price and price range
    std::cout << "The average price is: $" << "TODO" << "\n";

    std::cout << "The range is: $" << "TODO" << "\n";
}

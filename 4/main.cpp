#include <iostream>
#include <random>
#include <algorithm>
#include <string>
#include "Utility.h"
#include "Car.h"

bool anyPrime(const std::vector<int>& values);

int main() {
    auto integers = randomIntegers();
    std::cout << "Integers: " << integers << "\n";
    std::cout << "Are there any primes? " << (anyPrime(integers) ? "yes" : "no") << "\n";
}

bool anyPrime(const std::vector<int>& values) {
    auto result = false;
    for(int x : values){
        if(x==2) {
            result = true;
            break;
        }
        while(x != 0 && x%2 != 0){
            for(int i = 2; i<=x; i++){
                if(x%i==0){
                    result = false;
                }
                else{
                    result = true;
                }
            }

        }
    }

    return result;
}

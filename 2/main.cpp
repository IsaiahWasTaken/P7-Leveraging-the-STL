#include <iostream>
#include <random>
#include <algorithm>
#include <string>
#include "Utility.h"
#include "Car.h"
using namespace std;

int main() {
    auto integers = randomIntegers();
    std::cout << "Initial: " << integers << "\n";


    size_t total = integers.size();
    size_t half = integers.size() /2;
    vector<int> piece1(integers.begin() + half, integers.end());
    vector<int> piece2(integers.begin(), integers.begin() + half);

    sort(piece1.begin(), piece1.end(), greater<int>());
    sort(piece2.begin(), piece2.end());



   vector<int> bitonicList(total);
   bitonicList.insert(bitonicList.end(),piece1.begin(), piece2.end());




    std::cout << "Bitonic: " << bitonicList << "\n";
}

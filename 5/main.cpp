#include <iostream>
#include <random>
#include <algorithm>
#include <string>
#include "Utility.h"
#include "Car.h"
using namespace std;

template <typename T>
class Tag {
public:
    Tag(bool isTagged, T value) : _tagged{ isTagged }, _value{ value } {}

    bool isTagged() const { return _tagged; }
    T item() const { return _value; }

private:
    bool _tagged;
    T _value;
};

template <typename T>
std::ostream& operator<<(std::ostream& out, const Tag<T>& tag) {
    out << "TAG: tagged(" << (tag.isTagged() ? "true" : "false") << "), item(" << tag.item() << ")";
    return out;
}

int main() {
    auto cars = randomCars();
    std::cout << "Cars: " << cars << "\n";

    std::vector<Tag<Car>> taggedCars;
    for(Car x : cars){
        if(x.vin()[0] >= 'A' && x.vin()[0] <= 'F' || x.price() < 1000){
            taggedCars.push_back(Tag<Car>(true, x));
        }
        else {taggedCars.push_back(Tag<Car>(false, x));}
    }
    partition(taggedCars.begin(),taggedCars.end(),[](Tag<Car>& x){
        return x.isTagged();
    });

    std::cout << "Tagged Cars: " << taggedCars << "\n";
}

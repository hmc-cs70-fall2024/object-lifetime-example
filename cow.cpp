#include "cow.hpp"
#include <iostream>

using namespace std;

Cow::Cow() :
    numSpots_{0},
    age_{0} {
    cout << "Cow default constructor" << endl;
}

Cow::Cow(size_t numSpots, size_t age) :
    numSpots_{numSpots},
    age_{age} {
    cout << "Cow parameterized constructor" << endl;
}

Cow::Cow(const Cow& other) :
   numSpots_{other.numSpots_},
   age_{other.age_} {
    cout << "Cow copy constructor" << endl;
}

Cow::~Cow() {
    cout << "Cow destructor" << endl;
}

Cow& Cow::operator=(const Cow& rhs) {
    cout << "Cow assignment operator" << endl;
    numSpots_ = rhs.numSpots_;
    age_ = rhs.age_;
    return *this;
}

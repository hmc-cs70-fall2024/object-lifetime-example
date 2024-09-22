#include "barn.hpp"
#include <iostream>
#include "cow.hpp"

using namespace std;

Barn::Barn() {
    cout << "Barn default constructor" << endl;
}

Barn::Barn(const Barn& other) {
    cout << "Barn copy constructor" << endl;
    cows_[0] = other.cows_[0];
    cows_[1] = other.cows_[1];
}

Barn::~Barn() {
    cout << "Barn destructor" << endl;
}

Barn& Barn::operator=(const Barn& rhs) {
    cout << "Barn assignment operator" << endl;
    cows_[0] = rhs.cows_[0];
    cows_[1] = rhs.cows_[1];
    return *this;
}

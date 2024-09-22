#include <iostream>
#include "cow.hpp"
#include "barn.hpp"

using namespace std;

void partyCow(Cow cowToParty) {
    // What a good party!
}

int main() {
    Cow a{3, 5};
    Cow b;
    Barn c;
    Cow d = b;
    partyCow(d);
    Cow& e = d;
    b = a;
    e = b;
    Barn f = c;
    return 0;
}

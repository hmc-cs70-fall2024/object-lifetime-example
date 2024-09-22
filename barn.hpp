#ifndef BARN_INCLUDED_HPP
#define BARN_INCLUDED_HPP

#include "cow.hpp"

class Barn {
 public:
    Barn();
    Barn(const Barn& other);
    ~Barn();
    Barn& operator=(const Barn& rhs);

 private:
    Cow cows_[2];
};

#endif  // BARN_INCLUDED_HPP

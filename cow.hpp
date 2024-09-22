#ifndef COW_INCLUDED_HPP
#define COW_INCLUDED_HPP

#include <cstddef>

class Cow {
 public:
    Cow();
    Cow(size_t numSpots, size_t age);
    Cow(const Cow& other);
    ~Cow();
    Cow& operator=(const Cow& rhs);

 private:
    size_t numSpots_;
    size_t age_;
};

#endif  // COW_INCLUDED_HPP
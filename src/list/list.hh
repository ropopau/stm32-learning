#pragma once
#include <variant>
#include <vector>

template <typename T>
class StaticList {
    public:
        // Read
        const T& operator[](int index) const;
        // Write
        T& operator[](int index);

    private:
        std::vector<T> vect;
};
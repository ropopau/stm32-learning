#pragma once
#include <map>


template <typename T, typename S>
class StaticDict {
private:
    std::map<T, S> map;
};
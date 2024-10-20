#include "list.hh"

template <typename T>
const T& StaticList<T>::operator[](int index) const {
    if (index < 0) 
        index = (index * -1) - 1;
    
    if (index >= size) {
        // TODO EXCEPTION
        return -1;
    }
    return array[index];
};

template <typename T>
T& StaticList<T>::operator[](int index) {
    if (index < 0) 
        index = (index * -1) - 1;
    
    if (index >= size) {
        // TODO EXCEPTION
        return -1;
    }

    return array[index];
};

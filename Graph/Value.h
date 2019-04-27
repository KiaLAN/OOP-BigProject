#pragma once

#include <typeinfo>
#include <vector>
using namespace std;

#define GET_DTYPE(x) typeid(x).name()[0]

class Value
{
public:
    // header
    const char stype;        // shape type, 'S'calar, 'A'rray (to do)
    const vector<int> shape; // shape of the value. for scalar, shape = 1 
    const char dtype;        // data type, 'f'loat, 'i'nt, or 'b'ool if you want (to do)

    Value(char stype, vector<int> shape, char dtype) : stype(stype), shape(shape), dtype(dtype) {}
};

template <typename T>
class Scalar : public Value
{
public:
    T value;

    Scalar(T value) : Value('S', vector<int>(1, 1), GET_DTYPE(value)), value(value) {}
};

/*
template <typename T>
class Array : public Value
{
  public:
    vector<T> value;
    
    Array(vector<int> shape) : Value('A', shape, GET_DTYPE(value)) {}
    Array(vector<int> shape, vector<T> value) : Value('A', shape, GET_DTYPE(value)) {this->value = value;}
};
*/
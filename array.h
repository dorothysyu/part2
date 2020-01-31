//lang::CwC
#pragma once
#include "object.h"
class Array : public Object{
public:

    // Constructs a growable array with the given length.
    Array(int length);

    // Default deconstructor.
    virtual ~Array();

    // Returns the length of the array.
    virtual int get_length();

    // Adds the given object to the array.
    virtual void push(Object* obj);

    // Creates copies of the object and sets val as the value for all the elements in the array object.
    // Does nothing for an empty array
    // If it's partially filled/full, replace already-existing values with the given value.

    virtual void fill(Object* val);

    // Determines whether or not this array contains the obj.
    virtual bool contains(Object* obj);

    // Returns this Array's hash value.
    virtual size_t hash();

    // Compares the contents of the arrays to see if they are equal.
    virtual bool equals(Object* other);
};
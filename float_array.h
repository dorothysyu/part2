//lang::CwC
#pragma once
#include "array.h"

/** 
 * Represents an Array of Strings.
 */
class Float_Array : public Array {
    public:
    // Constructs a growable array with the given length.
    Float_Array(int length);

    // Default deconstructor.
    ~Float_Array();

    // Returns the element at the given index.
    // Terminates the program if given index is out of bounds.
    float at(int i);

    // Returns the length of the array.
    int get_length();

    // The value at the given index will now be the given float. 
    // Does nothin the string if the given index is out of bounds of the array.
    void put(int idx, float fl);

    // Adds the given float to the array.
    void push(float obj);

    // Sets val as the value for all the elements in the array object.
    // Does nothing for an empty array
    // If it's partially filled/full, replace already-existing values with the given value.
    void fill(float fl);

    // Determines whether or not this array contains the obj.
    bool contains(float obj);

    // Returns this Array's hash value.
    size_t hash();

    // Compares the contents of the arrays to see if they are equal.
    bool equals(Object* other);
};
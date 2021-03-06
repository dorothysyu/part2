//lang::CwC
#pragma once
#include "array.h"

/** 
 * Represents an Array of booleans.
 */
class Bool_Array : public Array {
    public:
    // Constructs a growable array with the given length.
    Bool_Array(int length);

    // Default deconstructor.
    ~Bool_Array();

    // Returns the element at the given index.
    // Terminates the program if given idx is out of bounds.
    bool at(int i);

    // Returns the length of the array.
    int get_length();

    // The value at the given index will now be the given boolean. 
    // Does nothin the string if the given index is out of bounds of the array.
    void put(int idx, bool b);

    // Adds the given boolean to the array.
    void push(bool b);

    // Sets val as the value for all the elements in the array object.
    // Does nothing for an empty array
    // If it's partially filled/full, replace already-existing values with the given value.
    void fill(bool b);

    // Determines whether or not this array contains the obj.
    bool contains(bool b);

    // Returns this Array's hash value.
    size_t hash();

    // Compares the contents of the arrays to see if they are equal.
    bool equals(Object* other);
};
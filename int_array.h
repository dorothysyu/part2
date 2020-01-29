#include "array.h"

/** 
 * Represents an Array of integers.
 */
class Int_Array : public Array {
    public:
    // Constructs a growable array with the given length.
    Int_Array(int length);

    // Default deconstructor.
    ~Int_Array();

    // Returns the element at the given index.
    int at(int i);

    // Returns the length of the array.
    int get_length();

    // Puts the integer at the given index.
    // Replaces the integer that was already there if it exists.
    void put(int idx, int i);

    // Adds the given integer to the array.
    void push(int i);

    // Fills the array with the given value.
    void fill(int i);

    // Determines whether or not this array contains the obj.
    bool contains(int i);

    // Returns this Array's hash value.
    size_t hash();

    // Compares the contents of the arrays to see if they are equal.
    bool equals(Object* other);
};
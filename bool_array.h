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
    bool at(int i);

    // Returns the length of the array.
    int get_length();

    // Puts the boolean at the given index.
    // Replaces the boolean that was already there if it exists.
    void put(int idx, bool b);

    // Adds the given boolean to the array.
    void push(bool b);

    // Fills the array with the given value.
    void fill(bool b);

    // Determines whether or not this array contains the obj.
    bool contains(bool b);

    // Returns this Array's hash value.
    size_t hash();

    // Compares the contents of the arrays to see if they are equal.
    bool equals(Object* other);
};
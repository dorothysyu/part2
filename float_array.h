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
    float at(int i);

    // Returns the length of the array.
    int get_length();

    // Puts the float at the given index.
    // Replaces the float that was already there if it exists.
    void put(int i, float fl);

    // Adds the given float to the array.
    void push(float obj);

    // Fills the array with the given value.
    virtual void fill(float fl);

    // Determines whether or not this array contains the obj.
    bool contains(float obj);

    // Returns this Array's hash value.
    size_t hash();

    // Compares the contents of the arrays to see if they are equal.
    bool equals(Object* other);
};
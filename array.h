//lang::CwC
#include "object.h"
class Array{
public:
    const char* type; // Represents what type the Array is.
    int length; // the length of the array

    // Constructs a fixed-size array with the given length.
    Array(const char* type, int length);

    // Default deconstructor.
    virtual ~Array();

    // Returns the element at the given index.
    Object* at(int i);

    // Returns the length of the array.
    int get_length();

    // Access the first element.
    Object* front();

    // Access last element.
    Object* back();

    // Checks that the given object is the same type as already-existing type.
    // If it is, puts the obj at the ith index. Replaces the object
    // that was already there if it exists.
    void put(int i, Object* obj);

    // Fills the array with the given value if the type of the object matches
    // the already existing type.
    void fill(Object* val);

    // Determines whether or not this array contains the obj.
    bool contains(Object* obj);
};
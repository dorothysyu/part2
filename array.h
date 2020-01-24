//lang::CwC
#include "object.h"
class Array{
public:
    int length; // the length of the array

    // Constructs a fixed-size array with the given length.
    Array(int length);

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

    // Returns whether or not the array is empty.
    bool is_empty();

    // TODO: rename? this seems more like a hashmap naming convention than 
    // array
    // Puts the obj at the ith index. Replaces the object that
    // was already there if it exists.
    void put(int i, Object* obj);

    // Fills the array with the given value.
    void fill(Object* val);

    // Returns a new array that is
    // the given array appended to this one.
    Array* append(Array* newArray);

    // Determines whether or not this array contains the obj.
    bool contains(Object* obj);
};
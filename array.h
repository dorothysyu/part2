//lang::CwC
#include "object.h"
class Array : public Object{
public:

    // Constructs a growable array with the given length.
    Array(int length);

    // Default deconstructor.
    virtual ~Array();

    // Returns the element at the given index.
    Object* at(int i);

    // Returns the length of the array.
    virtual int get_length();

    // Puts the object at the given index.
    // Replaces the object that was already there if it exists.
    virtual void put(int idx, Object* obj);

    // Adds the given object to the array.
    virtual void push(Object* obj);

    // Fills the array with the given value.
    virtual void fill(Object* val);

    // Determines whether or not this array contains the obj.
    virtual bool contains(Object* obj);

    // Returns this Array's hash value.
    virtual size_t hash();

    // Compares the contents of the arrays to see if they are equal.
    virtual bool equals(Object* other);
};
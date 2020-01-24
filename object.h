//lang::CwC
#include <stdlib.h>
class Object
{
public:
    // Constructor
    Object();

    // Deconstructor (deletes object and frees its data)
    virtual ~Object();

    // Returns a hash of the object.
    virtual size_t get_hash();

    // Computes the object's hash.
    virtual size_t hash_me();

    // Checks for equality (same data but two different obj)
    virtual bool equals(Object* other);

    // Checks if the given object points to the same address as this
    virtual bool identical(Object* other);

    // Returns a string representing what type the object is.
    virtual const char* get_class();
};
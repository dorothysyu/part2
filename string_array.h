#include "array.h"
#include "string.h"
/** 
 * Represents an Array of Strings.
 */
class String_Array : public Array {
    public:
    // Constructs a growable array with the given length.
    String_Array(int length);

    // Default deconstructor.
    ~String_Array();

    // Returns the element at the given index.
    String* at(int i);

    // Returns the length of the array.
    int get_length();

    // Puts the string at the given index.
    // Replaces the string that was already there if it exists.
    void put(int idx, String* str);

    // Adds the given string to the array.
    void push(String* str);

    // Fills the array with the given value.
    void fill(String* str);

    // Determines whether or not this array contains the obj.
    bool contains(String* str);

    // Returns this Array's hash value.
    size_t hash();

    // Compares the contents of the arrays to see if they are equal.
    bool equals(Object* other);
};
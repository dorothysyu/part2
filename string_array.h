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
    // Terminates the program if given index is out of bounds.
    String* at(int i);

    // Returns the length of the array.
    int get_length();

    // The value at the given index will now be the given string. 
    // Does nothin the string if the given index is out of bounds of the array.
    void put(int idx, String* str);

    // Adds the given string to the array.
    void push(String* str);

    // Sets val as the value for all the elements in the array object.
    // Does nothing for an empty array
    // If it's partially filled/full, replace already-existing values with the given value.
    // Creates a deep copy of the String.
    void fill(String* str);

    // Determines whether or not this array contains the obj.
    bool contains(String* str);

    // Returns this Array's hash value.
    size_t hash();

    // Compares the contents of the arrays to see if they are equal.
    bool equals(Object* other);
};
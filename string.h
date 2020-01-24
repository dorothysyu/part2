#include "object.h"

/* Represents a string object. Many stubs taken from @166 on Piazza.*/
class String : public Object {
public:
    char* val_; // data
    long size_; // number of chars (excluding \0)
    
    // Constructor
    String(char* chars);

    // Constructor
    String(const char* chars);

    // Deletes the string
    ~String();

    // Compares strings for equality
    bool equals(String* other);

    // Compares two strings.
    // Returns 0 if strings are equal, 
    // >0 if this string is larger than other,
    // <0 otherwise.
    int compare(String* other);

    // Returns a hash of the string
    long hash_me();

    // Returns a new string that is a concatenation of this
    // string with the other string.
    String* concat(String* other);

    // Prints the string on stdout.
    void print();
};
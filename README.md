We decided to use an Array implementation as the data structure to support having different types.
The Array class supports basic functionality, like Array creation, deletion, putting an element at an index, accessing elements, and checking whether an array contains a given element. <strike>Any time that an element is modified in the Array, the method checks that the given element is the correct type. The methods that return elements return Object pointers - this is because we are assuming that all data types will be inheriting from the Object class. If someone wants to support an array of a new data type, all they would have to do is create a new class that inherits the Object class and override the get_type() method.</strike> We are now creating typed array classes that inherit from Array (BoolArray, IntArray, FloatArray, StringArray).

To update the interface to match the spec that Arrays should be able to support ints, bools, and floats, we opted to change the interface so that there are separate array types that inherit from the Array class. These classes can only operate on their respective types.

<strike>The Object class methods are mostly virtual so that inheriting classes can override it. It supports functionality like Object creation, deletion, hashing, checking for equality and identity, and getting the class type of the object.

The String class supports functionality like String creation, deletion, all of the methods in the Object class, and additional functionality, including concatenating strings, printing, and getting the substring of a string.</strike>

The Object and String class APIs were taken from https://github.com/chasebish/cwc_object_string in the interest of having a common API with the rest of the class.

//lang::CwC
#pragma once

#include <cstdlib>

/**
 * This API was taken from https://github.com/chasebish/cwc_object_string
 * in the interest of keeping object and string APIs consistent throughout the class.
 * A class that represents the top of the object hierarchy.
 * author: chasebish */
class Object {
public:
  /** CONSTRUCTORS & DESTRUCTORS **/

  /* Default Object constructor */
  Object();

  /* Default Object destructor, to be overriden by subclasses */
  virtual ~Object();

  /** VIRTUAL METHODS **/

  /* Returns whether two objects are equal, to be overriden by subclasses */
  virtual bool equals(Object* const obj);

  /* Returns an object's hash value. Identical objects should have identical hashes */
  virtual size_t hash();
};
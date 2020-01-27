// lang:CwC
#pragma once

#include <cstdlib>

/**
 * Represents a basic object class that all classes inherit from
 * Author: SamedhG <gupta.sam@husky.neu.edu>, thomasharmon808
 * <harmon.t@huskt.neu.edu>
 */
class Object {
  public:
    /**
     * Constructs a new Object.
     */
    Object();

    /**
     * Deletes this object and any data it contains.
     */
    virtual ~Object();

    /**
     *  Check if this objec "equals" another"
     *  Sublasses can define what equal means in their context
     *  @param other       the object to compare to
     *  @return true if they are equal else false
     */
    virtual bool equals(Object* other);

    /**
     * Return the hash of this object.
     * Inheriting classes must override this if equals is overriden.
     * @return the hashcode
     */
    virtual size_t hash();
};

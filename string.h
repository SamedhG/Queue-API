// lang: CwC
#pragma once

#include "object.h"

/**
 * Wrapper for char arrays with convinience methods
 * Author samedh <gupta.sam@husky.neu.edu>, thomasharmon808
 * <harmon.t@husky.neu.edu>
 */
class String : public Object {
   public:
    /**
     * Construct a new string given a pointer to a mutable array of characters.
     * Creates a copy of the data in c.
     * @param c a pointer to an array of characters.
     */
    String(char* c);

    /**
     * Construct a new string given a pointer to an immutable array of characters.
     * Creates a copy of the data in c.
     * @param c a pointer to an array of characters.
     */
    String(const char* c);

    /**
     * A destructor, which deletes the data in this String.
     */
    ~String();

    /**
     * Get the length of this String.
     * @return the length of this String.
     */
    size_t length();

    /**
     * An implementation must override this method
     * @param other   The object to check for equality with this String.
     * @returns true if other is equal to this String.
     */
    bool equals(Object* other);

    /**
     * An implementation must override this method
     * @returns the hash code of this object.
     */
    size_t hash();
};

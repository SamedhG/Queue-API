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
     * Get the length of this String.
     * @return the length of this String.
     */
    size_t length();

    /**
     * Get the charector at a certain index
     * Crashes and exits if the given index is out of bounds
     * @param index	    the index to get the char from
     * @return the character at the given index
     */
    char char_at(size_t index);

    /**
     * Returns a new String which contains the data from the given string
     * appended at the end of `this`.
     * Note the caller now owns this new string and must delete it.
     * @param other	  The string to append to the end of this String.
     * @return the new concatenated string
     */
    String* concat(String* other);

    /**
     * Returns a new String containing the charecters between the 2 given
     * indices.
     * If the indices are out of bounds the program will terminate.
     * Note: The caller gets ownership of the new string and must delete it
     * @param begin_idx	     the begining index (inclusive)
     * @param end_idx	     the ending index (exclusive)
     * @return the new substring
     */
    String* substring(size_t begin_idx, size_t end_idx);

    /**
     * Compare this string to another in lexographical order.
     * @param other	     the string to compare to
     * @return 0 if they are equal,
     *         a negative number if this < other
     *         a positive number if this > other
     */
    int compare(String* other);

    /**
     * Compare this string to another lexographically, ignoring cases
     * @param other	     the string to compare to
     * @return 0 if they are equal,
     *         a negative number if this < other
     *         a positive number if this > other
     */
    int compare_ignore_case(String* other);

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

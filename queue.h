// lang::CwC
#pragma once

#include <cstdlib>

#include "object.h"
#include "string.h"

/**
 * A data structure representing a First In, First Out queue. The data 
 * structure contains `Object` pointers that any desired class may extend an 
 * `Object` and be stored in a `Queue`
 */
class Queue : public Object {
   public:

    /**
     * Creates an empty Queue.
     */
    Queue();

    /**
     * Deletes every element in this Queue and this Queue.
     */
    ~Queue();

    /**
     * Add the given object o to the back of this queue.
     * Takes ownership of o.
     * @param o      The object to add to this queue.
     */
    virtual void push(Object* o);

    /**
     * Get the object at the head of this queue without removing it.
     * This queue retains ownership of the returned object, meaning users
     * must not delete the object.
     * Note: Will return nullptr if the queue is empty.
     * @returns The object at the head of the queue.
     */
    virtual Object* peek();

    /**
     * Get the object at the head of this queue and removes it from the queue.
     * This returned object is now owned by the caller, who must delete it
     * when done using it.
     * Note: Will return nullptr if the queue is empty.
     * @returns The object at the head of the queue.
     */
    virtual Object* pop();

    /**
     * Get the number of objects in this queue.
     * @returns The length of the queue.
     */
    virtual size_t length();

    /**
     * Implementers must override this.
     * @param o     The object to check for comparison with this Queue.
     * @returns true if o is equal to this Queue.
     */
    bool equals(Object* o);

    /**
     * Implementers must override this.
     * @returns the hash code of this Queue.
     */
    size_t hash();
};

/**
 * A data structure representing a First In, First Out queue. The data 
 * structure contains `String` pointers.
 */
class StringQueue : public Queue {
   public:

    /**
     * Creates an empty Queue.
     */
    StringQueue();

    /**
     * Deletes every element in this Queue and this Queue.
     */
    ~StringQueue();

    /**
     * Add the given string o to the back of this queue.
     * Takes ownership of o.
     * @param o      The string to add to this queue.
     */
    void push(String* o);

    /**
     * Get the string at the head of this queue without removing it.
     * This queue retains ownership of the returned string, meaning users
     * must not delete the string.
     * Note: Will return nullptr if the queue is empty.
     * @returns The string at the head of the queue.
     */
    String* peek();

    /**
     * Get the string at the head of this queue and removes it from the queue.
     * This returned string is now owned by the caller, who must delete it
     * when done using it.
     * Note: Will return nullptr if the queue is empty.
     * @returns The string at the head of the queue.
     */
    virtual String* pop();

    /**
     * Get the number of objects in this queue.
     * @returns The length of the queue.
     */
    virtual size_t length();

    /**
     * Implementers must override this.
     * @param o     The object to check for comparison with this Queue.
     * @returns true if o is equal to this Queue.
     */
    bool equals(Object* o);

    /**
     * Implementers must override this.
     * @returns the hash code of this Queue.
     */
    size_t hash();
};


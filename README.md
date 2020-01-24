# Queue Interface

These header files describe the interface for `Object`s, `String`s, and 
`Queue`s. The `test.cpp` file also contains tests to guarantee correctness
of any implementation of these interfaces.

Implementers must adhere to the ownership rules described in the 
documentation for each method. Failure to do so will cause frustrating 
segfaults and memory leaks.

The purpose of an `Object` is to represent an abstract base class that
any class may extend in order to get useful methods such as `equals` and 
`hash`. It is imperative that classes extending `Object` override both
`equals` and `hash`.

The purpose of a `String` is to provide convient methods and a wrapper for when
needing to use an array of characters. The `String` class is also an example 
of a class that extends `Object`.

A `Queue` is a common data structure that may be convient when needing to use
an ordered list and efficiently access the front of the list.

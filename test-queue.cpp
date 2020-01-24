#include "object.h"
#include "queue.h"
#include "string.h"

// Tests for String->length
void test_string_length() {
    String* s1 = new String("");
    assert(s1->length() == 0);
    delete s1;
    String* s2 = new String("abc");
    assert(s->length() == 3);
    delete s2;
}

// Tests for String->char_at
void test_string_char_at() {
    String* s1 = new String("abc");
    assert(s1->char_at(0) == "a");
    delete s1;
    // Will crash for s1->char_at(4)
}

// Tests for String->concat
void test_string_concat() {
    String* s1 = new String("abc");
    String* s2 = new String("xyz");
    String* s3 = s1->concat(s2);
    String expected = new String("abcxyz");
    assert(s3.equals(expected));
    delete s1;
    delete s2;
    delete s3;
    delete expected;
}

// Tests for String->substring
void test_string_substring() {
    String* s1 = new String("abcxyz");
    String* s2 = s1->substring(1, 4) String expected = new String("bcx");
    assert(s2.equals(expected));
    delete s1;
    delete s2;
    delete expected;
}

// Tests for String->compare
void test_string_compare() {
    String* s1 = new String("abc");
    String* s2 = new String("xyz");
    String* s3 = new String("abc");
    assert(s1->compare(s2) < 0);
    assert(s2->compare(s1) > 0);
    assert(s1->compare(s3) == 0);
    delete s1;
    delete s2;
    delete s3;
}
// Tests for String->compare_ignore_case
void test_string_compare_ignore_case() {
    String* s1 = new String("abc");
    String* s2 = new String("xyz");
    String* s3 = new String("ABC");
    assert(s1->compare_ignore_case(s2) < 0);
    assert(s2->compare_ignore_case(s1) > 0);
    assert(s1->compare_ignore_case(s3) == 0);
    delete s1;
    delete s2;
    delete s3;
}

// Tests for String->equals
void test_string_equals_hash() {
    String* s1 = new String("abc");
    String* s2 = new String("abc");
    assert(s1->equals(s2));
    assert(s1->hash() == s2->hash());
    delete s1;
    delete s2;
}

void test_queue() {
    Queue* q = new Queue();
    // test queue.length when empty
    assert(q->length() == 0);
    // queue.peek when empty
    // should crash
    // queue.pop when empty
    // should crash

    // adding to the queue should increase the length
    String* s1 = new String("hello");
    q->push(s1);
    assert(q->length() == 1);

    // peeking works with queue of 1 element
    assert(q->peek()->equals(s1));
    // and doesn't decrease the length
    assert(q->length() == 1);

    // popping works with queue of 1 element
    assert(q->pop()->equals(s1));
    // and decreases the length
    assert(q->length() == 0);

    String* s2 = new String("World");
    // pushing works properly for multiple elements
    q->push(s1);
    q->push(s2);
    assert(q->length() == 2);

    // peeking with multiple elements returns the head of queue
    assert(q->peek()->equals(s1));
    // and doesn't decrease the length
    assert(q->length() == 2);

    // popping returns head of queue even w multiple elements
    assert(q->pop()->equals(s1));
    // and decreases the length
    assert(q->length() == 1);

    // equals works
    Queue* q2 = new Queue();
    String* q2_s2 = new String("World");
    q2->push(q2_s2);
    assert(q->equals(q2));
    // hash gives the same value for queues that are equal
    assert(q->hash() == q2->hash());
    q2->pop();
    // equals is false for queues that aren't equal
    assert(!(q->equals(q2)));
    assert(q->hash() != q2->hash());


    delete q;
    delete q2;
    delete s1;
    delete q2_s2;
    // s2 doesnt need to be deleted as q owns it and will delete it
}

int main(int argc, char** argv) {
    test_string_length();
    test_string_char_at();
    test_string_concat();
    test_string_substring();
    test_string_compare();
    test_string_compare_ignore_case();
    test_string_equals_hash();
    test_queue();

    return 0;
}

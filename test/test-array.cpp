#include <gtest/gtest.h>

#include "../object.h" 
#include "../string.h"
#include "../array.h"

#define CS4500_ASSERT_TRUE(a)  \
  ASSERT_EQ((a),true);
#define CS4500_ASSERT_FALSE(a) \
  ASSERT_EQ((a),false);
#define CS4500_ASSERT_EXIT_ZERO(a)  \
  ASSERT_EXIT(a(), ::testing::ExitedWithCode(0), ".*");

void testArrayCreation() {
    Array* a1 = new Array("String", 5);
    Array* a2 = new Array("Object", 10);
    CS4500_ASSERT_TRUE(a1->get_length()==5);
    CS4500_ASSERT_TRUE(a2->get_length()==10);
    exit(0);
}

void testAppend(){
    Array* a1 = new Array("String", 2);
    Array* a2 = new Array("String", 3);
    String* x = new String(new char[1]);
    String* y = new String(new char[2]);
    a1->fill(x);
    a2->fill(y);
    CS4500_ASSERT_TRUE(a1->get_length() == 2);
    CS4500_ASSERT_TRUE(a2->get_length() == 3);
}

void testAccessElements() {
    Array* a1 = new Array("String", 3);
    String* n = new String("n");
    String* o = new String("o");
    String* p = new String("p");
    a1->put(0, n);
    a1->put(1, o);
    a1->put(2, p);
    CS4500_ASSERT_TRUE(a1->at(0)->equals(n));
    CS4500_ASSERT_TRUE(a1->at(0)->equals(n));
    CS4500_ASSERT_TRUE(a1->at(1)->equals(o));
    CS4500_ASSERT_TRUE(a1->at(0)->equals(a1->front()));
    CS4500_ASSERT_TRUE(a1->at(2)->equals(a1->back()));
    CS4500_ASSERT_TRUE(a1->contains(n));
    Array* a2 = new Array("Object", 2);
    Object* obj = new Object();
    a2->put(0, obj);
    CS4500_ASSERT_TRUE(a2->at(0)->equals(obj));
    CS4500_ASSERT_TRUE(a2->contains(obj));
}

void testHash() {
    Object* obj1 = new Object();
    String* f = new String("f");
    String* f2 = new String("f");
    CS4500_ASSERT_TRUE(obj1->hash()==obj1->hash());
    CS4500_ASSERT_TRUE(f->hash()==f2->hash());
}

void testString() {
    String* g = new String("g");
    String* h = new String("h");
    String* gh = new String("gh");
    String* passed = new String("passed");
    CS4500_ASSERT_TRUE(g->concat(h)->equals(gh));
    CS4500_ASSERT_TRUE(g->cmp(g) == 0);
    CS4500_ASSERT_TRUE(g->cmp(h) < 0);
}

void testSize() {
    String* hello_world = new String("hello world");
    String* hello_world2 = new String(hello_world);
    CS4500_ASSERT_TRUE(hello_world->size()==11);
    CS4500_ASSERT_TRUE(hello_world2->size()==11);
}

int main()
{
    testArrayCreation();
    testAppend();
    testAccessElements();
    testHash();
    testString();
    testSize();
    return 0;
}
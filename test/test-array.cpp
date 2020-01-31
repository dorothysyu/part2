#include <gtest/gtest.h>

#include "../object.h" 
#include "../string.h"
#include "../array.h"
#include "../string_array.h"
#include "../float_array.h"
#include "../int_array.h"
#include "../bool_array.h"

#define CS4500_ASSERT_TRUE(a)  \
  ASSERT_EQ((a),true);
#define CS4500_ASSERT_FALSE(a) \
  ASSERT_EQ((a),false);
#define CS4500_ASSERT_EXIT_ZERO(a)  \
  ASSERT_EXIT(a(), ::testing::ExitedWithCode(0), ".*");
#define CS4500_ASSERT_DEATH(a)  \
  ASSERT_DEATH((a), ".*");

void testArrayCreation() {
    Array* a1 = new Array(5);
    Array* a2 = new Array(10);
    CS4500_ASSERT_TRUE(a1->get_length()==0);
    CS4500_ASSERT_TRUE(a2->get_length()==0);
    exit(0);
}

TEST(W1, testArrayCreation) {
  CS4500_ASSERT_EXIT_ZERO(testArrayCreation);
}

void testGrowth() {
    Array* a1 = new Array(1);
    Object* obj = new Object();
    CS4500_ASSERT_TRUE(a1->get_length() == 0);
    a1->push(obj);
    a1->push(obj);
    a1->push(obj);
    a1->push(obj);
    CS4500_ASSERT_TRUE(a1->get_length() > 1);
    exit(0);
}

TEST(W1, testGrowth) {
  CS4500_ASSERT_EXIT_ZERO(testGrowth);
}

void testLength(){
    String_Array* a1 = new String_Array(2);
    String_Array* a2 = new String_Array(3);
    String* x = new String(new char[1]);
    String* y = new String(new char[2]);
    a1->fill(x);
    a2->fill(y);
    CS4500_ASSERT_TRUE(a1->get_length() == 2);
    CS4500_ASSERT_TRUE(a2->get_length() == 3);
    exit(0);
}

TEST(W1, testLength) {
  CS4500_ASSERT_EXIT_ZERO(testLength);
}

void testAccessElements() {
    Int_Array* a1 = new Int_Array(3);
    a1->put(0, 70);
    a1->put(1, 80);
    CS4500_ASSERT_TRUE(a1->at(0) == 70);
    CS4500_ASSERT_TRUE(a1->at(1) == 80);
    CS4500_ASSERT_TRUE(a1->contains(70));
    Float_Array* a2 = new Float_Array(2);
    a2->put(0, 1.0);
    CS4500_ASSERT_TRUE(a2->at(0) == 1.0);
    CS4500_ASSERT_TRUE(a2->contains(1.0));
    exit(0);
}

TEST(W1, testAccessElements) {
  CS4500_ASSERT_EXIT_ZERO(testAccessElements);
}

void testArrayEquality() {
    Bool_Array* a1 = new Bool_Array(2);
    Bool_Array* a2 = new Bool_Array(2);
    Bool_Array* a3 = new Bool_Array(3);
    bool t = 1;
    a1->fill(t);
    a2->fill(t);
    CS4500_ASSERT_TRUE(a1->hash()==a2->hash());
    CS4500_ASSERT_TRUE(a1->equals(a2));
    exit(0);
}

TEST(W1, testArrayEquality) {
  CS4500_ASSERT_EXIT_ZERO(testArrayEquality);
}

void testHash() {
    Object* obj1 = new Object();
    String* f = new String("f");
    String* f2 = new String("f");
    CS4500_ASSERT_TRUE(obj1->hash()==obj1->hash());
    CS4500_ASSERT_TRUE(f->hash()==f2->hash());
    exit(0);
}

TEST(W1, testHash) {
  CS4500_ASSERT_EXIT_ZERO(testHash);
}

void testString() {
    String* g = new String("g");
    String* h = new String("h");
    String* gh = new String("gh");
    String* passed = new String("passed");
    CS4500_ASSERT_TRUE(g->concat(h)->equals(gh));
    CS4500_ASSERT_TRUE(g->cmp(g) == 0);
    CS4500_ASSERT_TRUE(g->cmp(h) < 0);
    exit(0);
}

TEST(W1, testString) {
  CS4500_ASSERT_EXIT_ZERO(testString);
}

void testStringSize() {
    String* hello_world = new String("hello world");
    String* hello_world2 = new String(hello_world);
    CS4500_ASSERT_TRUE(hello_world->size()==11);
    CS4500_ASSERT_TRUE(hello_world2->size()==11);
    exit(0);
}

TEST(W1, testStringSize) {
  CS4500_ASSERT_EXIT_ZERO(testStringSize);
}

void testAt() {
    Bool_Array* a1 = new Bool_Array(1);
    a1->put(0, 1);
    CS4500_ASSERT_TRUE(a1->at(0) == 1);
    CS4500_ASSERT_DEATH(a1->at(1));
    Int_Array* a2 = new Int_Array(2);
    a2->put(0, 30);
    a2->put(1, 40);
    CS4500_ASSERT_TRUE(a2->at(0) == 30);
    CS4500_ASSERT_TRUE(a2->at(1) == 40);
    CS4500_ASSERT_DEATH(a2->at(2));
    Float_Array* a3 = new Float_Array(1);
    a3->put(0, 1.00);
    CS4500_ASSERT_TRUE(a3->at(0) == 1.00);
    CS4500_ASSERT_DEATH(a3->at(1));
    String_Array* a4 = new String_Array(1);
    String* hi = new String("hi");
    a4->put(0, hi);
    CS4500_ASSERT_TRUE(a4->at(0) == hi);
    CS4500_ASSERT_DEATH(a4->at(1));
    exit(0);
}

TEST(W1, testAt) {
  CS4500_ASSERT_EXIT_ZERO(testAt);
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
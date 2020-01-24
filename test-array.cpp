//lang::CwC
#include <stdio.h>
#include "array.h"
#include "object.h"
#include "string.h"

void FAIL() { exit(1); }
void OK(const char *m) { printf("%s\n", m); /** print m */ }
void t_true(bool p){ if (!p) FAIL();}
void t_false(bool p){ if (p) FAIL(); }

void testArrayCreation() {
    Array* a1 = new Array(5);
    Array* a2 = new Array(10);
    t_true(a2->get_length()==15);
    t_true(a1->is_empty());
}

void testAppend(){
    Array* a1 = new Array(2);
    Array* a2 = new Array(3);
    String* x = new String(new char[1]);
    String* y = new String(new char[2]);
    a1->fill(x);
    a2->fill(y);
    t_true(a1->append(a2)->get_length() == 5);
}

void testAccessElements() {
    Array* a1 = new Array(3);
    String* n = new String("n");
    String* o = new String("o");
    String* p = new String("p");
    a1->put(0, n);
    a1->put(1, o);
    a1->put(2, p);
    t_true(a1->at(0)->equals(n));
    t_true(a1->at(0)->equals(n));
    t_true(a1->at(1)->equals(o));
    t_true(a1->at(0)->equals(a1->front()));
    t_true(a1->at(2)->equals(a1->back()));
    t_true(a1->contains(n));
    Array* a2 = new Array(2);
    Object* obj = new Object();
    a2->put(0, obj);
    t_true(a2->at(0)->equals(obj));
    t_true(a2->contains(obj));
}

void testHash() {
    Object* obj1 = new Object();
    String* f = new String("f");
    String* f2 = new String("f");
    t_true(obj1->hash_me()==obj1->get_hash());
    t_true(f->hash_me()==f2->hash_me());
    t_true(f->identical(f));
    t_false(f->identical(f2));
}

void testString() {
    String* g = new String("g");
    String* h = new String("h");
    String* gh = new String("gh");
    String* passed = new String("passed");
    t_true(g->concat(h)->equals(gh));
    t_true(g->compare(g) == 0);
    t_true(g->compare(h) < 0);
    passed->print();
}

int main()
{
    testArrayCreation();
    testAppend();
    testAccessElements();
    testHash();
    testString();
    return 0;
}
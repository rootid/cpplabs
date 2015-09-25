/*
 * Copyright SciSpike
 *
 * The declaration of the struct Person and its
 * manipulation functions
 */
#ifndef PERSON_H
#define PERSON_H

class Person {
public:
   Person( char* aName, int age);
   void print();
   void incrementAge();
private:
   char name[100];
   int age;
};

#endif

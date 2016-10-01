#include<iostream>

#ifndef OOP_H
#define OOP_H
using namespace std;
class Base
{
public:
   Base();
    ~Base();
    virtual void func() const;
};

class Child: public Base
{
public:
    Child();
    ~Child();

    void func() const;
};



void Function(const Base &obj);

#endif // OOP_H

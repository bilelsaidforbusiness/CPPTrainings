// order_of_destruction.cpp
#include <iostream>
using namespace std;

struct A1
{
    A1()
    {
        cout << "A1 ctor " << endl;
    }
    virtual ~A1()
    {
        cout << "A1 dtor " << endl;
    }
};
struct A2 : A1
{
    A2()
    {
        cout << "A2 ctor " << endl;
    }
    ~A2() override
    {
        cout << "A2 dtor " << endl;
    }
};
struct A3 final : A2
{
    A3()
    {
        cout << "A3 ctor " << endl;
    }
    ~A3() override
    {
        cout << "A3 dtor " << endl;
    }
};

struct B1
{
    ~B1() { cout << "B1 dtor " << endl; }
};
struct B2 : B1
{
    ~B2() { cout << "B2 dtor " << endl; }
};
struct B3 : B2
{
    ~B3() { cout << "B3 dtor " << endl; }
};

int main()
{
    A1 *a = new A3;
    printf("\n");
    printf("\n");
    delete a;
    printf("\n");

    B1 *b = new B3;
    delete b;
    printf("\n");

    B3 *c = new B3;
    delete c;
}
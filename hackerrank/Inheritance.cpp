This challenge is an extension of a previous challenge named Inheritance-Introduction. We highly recommend solving Inheritance-Introduction before solving this problem.

In the previous problem, we learned about inheritance and how can a derived class object use the member functions of the base class.

In this challenge, we explore multi-level inheritance. Suppose, we have a class A which is the base class and we have a class B which is derived from class A and we have a class C which is derived from class B, we can access the functions of both class A and class B by creating an object for class C. Hence, this mechanism is called multi-level inheritance. (B inherits A and C inherits B.)

Create a class called Equilateral which inherits from Isosceles and should have a function such that the output is as given below.

Sample Output

I am an equilateral triangle
I am an isosceles triangle
I am a triangle

Answer:
#include <iostream>
using namespace std;

class Triangle {
public:
    void triangle() {
        cout << "I am a triangle" << endl;
    }
};

class Isosceles : public Triangle {
public:
    void isosceles() {
        cout << "I am an isosceles triangle" << endl;
    }
};

class Equilateral : public Isosceles {
public:
    void equilateral() {
        cout << "I am an equilateral triangle" << endl;
    }
};

int main() {
    Equilateral eq;
    eq.equilateral();
    eq.isosceles();
    eq.triangle();

    return 0;
}

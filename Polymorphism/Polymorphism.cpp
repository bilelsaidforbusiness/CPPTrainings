// Polymorphism.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <memory>

class Shape {
public:
    virtual void draw() const = 0;
    virtual ~Shape() {
        std::cout << "Shape Destructor" << std::endl;
    }
};

class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a circle." << std::endl;
    }
};

class Square : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a square." << std::endl;
    }
};

int main() {
    // Utilisation de pointeurs intelligents pour gérer la mémoire
    Shape* shape1 = new Circle();
    Shape* shape2 = new Square();
    std::unique_ptr<Shape> shape1 = std::make_unique<Circle>();
    //std::unique_ptr<Shape> shape2 = std::make_unique<Square>();

    // Appel de la fonction draw() de manière polymorphique
    shape1->draw();
    shape2->draw();

    delete shape1;
    delete shape2;

    return 0;
}

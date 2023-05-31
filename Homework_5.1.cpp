#include <iostream>
#include <locale.h>
#include <string>

class Figure {
protected:
    int sides_count;
    std::string name;
public:
    Figure () {
        sides_count = 0;
        name = "Фигура";
    }
    int get_sides_count() {
        return sides_count;
    }
    std::string get_name() {
        return name;
    }
};

class Triangle : public Figure {
public:
    Triangle() {
        name = "Треугольник";
        sides_count = 3;
    }
};

class Quadrangle : public Figure {
public:
    Quadrangle() {
        name = "Четырёхугольник";
        sides_count = 4;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");

    Figure figure;
    Triangle triangle;
    Quadrangle quadrangle;

    std::cout << "Количество сторон:\n";
    std::cout << figure.get_name() << ": " << figure.get_sides_count() << std::endl;
    std::cout << triangle.get_name() << ": " << triangle.get_sides_count() << std::endl;
    std::cout << quadrangle.get_name() << ": " << quadrangle.get_sides_count() << std::endl;

    return 0;
}
#include <iostream>
#include <cmath>

class Vector3D {
private:
    double x, y, z;

public:
    // Конструктор ініціалізації трьома дійсними числами
    Vector3D(double x_, double y_, double z_) : x(x_), y(y_), z(z_) {}

    // Конструктор копіювання
    Vector3D(const Vector3D& other) : x(other.x), y(other.y), z(other.z) {}

    // Деструктор
    ~Vector3D() {}

    // Оператор присвоєння
    Vector3D& operator=(const Vector3D& other) {
        if (this != &other) {
            x = other.x;
            y = other.y;
            z = other.z;
        }
        return *this;
    }

    // Операція додавання
    Vector3D operator+(const Vector3D& other) const {
        return Vector3D(x + other.x, y + other.y, z + other.z);
    }

    // Операція віднімання
    Vector3D operator-(const Vector3D& other) const {
        return Vector3D(x - other.x, y - other.y, z - other.z);
    }

    // Скалярний добуток
    double dot(const Vector3D& other) const {
        return x * other.x + y * other.y + z * other.z;
    }

    // Векторний добуток
    Vector3D cross(const Vector3D& other) const {
        return Vector3D(
            y * other.z - z * other.y,
            z * other.x - x * other.z,
            x * other.y - y * other.x
        );
    }

    // Масштабування (множення на скаляр)
    Vector3D operator*(double scalar) const {
        return Vector3D(x * scalar, y * scalar, z * scalar);
    }

    // Масштабування (ділення на скаляр)
    Vector3D operator/(double scalar) const {
        return Vector3D(x / scalar, y / scalar, z / scalar);
    }

    // Віддзеркалення вектора 
    Vector3D operator-() const {
        return Vector3D(-x, -y, -z);
    }

    // Обчислення довжини вектора
    double norm() const {
        return std::sqrt(x * x + y * y + z * z);
    }

    // Вивід координат вектора
    void print() const {
        std::cout << "(" << x << ", " << y << ", " << z << ")";
    }
};

int main() {
    int x1, y1, z1;
    int x2, y2, z2;
    double c;

    std::cout << "Enter the vector value a (x1 y1 z1): ";
    std::cin >> x1 >> y1 >> z1;
    Vector3D a(x1, y1, z1);

    std::cout << "Enter the vector value b (x2 y2 z2): ";
    std::cin >> x2 >> y2 >> z2;
    Vector3D b(x2, y2, z2);
    
    std::cout << "Enter the scalar value c: ";
    std::cin >> c;

    // Додавання
    Vector3D sum = a + b;
    std::cout << "a + b = ";
    sum.print();
    std::cout << std::endl;

    // Віднімання 
    Vector3D diff1 = a - b;
    std::cout << "a - b = ";
    diff1.print();
    std::cout << std::endl;

    Vector3D diff2 = b - a;
    std::cout << "b - a = ";
    diff2.print();
    std::cout << std::endl;

    // Скалярний добуток
    double dot = a.dot(b);
    std::cout << "Dot product a . b = " << dot << std::endl;

    // Векторний добуток
    Vector3D cross = a.cross(b);
    std::cout << "Cross product a x b = ";
    cross.print();
    std::cout << std::endl;

    // Масштабування
    Vector3D scaled1 = a * c;
    std::cout << "a * c = ";
    scaled1.print();
    std::cout << std::endl;

    Vector3D scaled2 = b * c;
    std::cout << "b * c = ";
    scaled2.print();
    std::cout << std::endl;

    // Ділення на скаляр
    Vector3D divided1 = a / c;
    std::cout << "a / c = ";
    divided1.print();
    std::cout << std::endl;

    Vector3D divided2 = b / c;
    std::cout << "b / c = ";
    divided2.print();
    std::cout << std::endl;

    // Віддзеркалення
    Vector3D negated1 = -a;
    std::cout << "-a = ";
    negated1.print();
    std::cout << std::endl;

    Vector3D negated2 = -b;
    std::cout << "-b = ";
    negated2.print();
    std::cout << std::endl;

    // Довжина
    std::cout << "Norm of a = " << a.norm() << std::endl;

    std::cout << "Norm of b = " << b.norm() << std::endl;

    return 0;
}

Vector3D Operations

This project demonstrates the implementation of a Vector3D class in C++ for performing basic operations on three-dimensional vectors.

Features

Vector initialization and copy constructor.

Operations:

Vector addition and subtraction.

Dot product.

Cross product.

Scaling (multiplication/division by a scalar).

Vector negation (reflection).

Vector length (norm) calculation.

Usage Example

The program asks the user to input two vectors and a scalar, then performs various operations and prints the results:

Enter the vector value a (x1 y1 z1): 1 2 3
Enter the vector value b (x2 y2 z2): 4 5 6
Enter the scalar value c: 2

a + b = (5, 7, 9)
a - b = (-3, -3, -3)
...
Norm of a = 3.74166

How to Run

Compile the code using g++:

g++ ppp.cpp -o vector3d

Run the executable:

./vector3d

Requirements

C++11 or higher.

Standard libraries cmath and iostream.

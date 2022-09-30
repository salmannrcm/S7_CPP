#pragma once

#include <ostream>

#include "config.h"

class Vector
{
public:
// DO NOT CHANGE THIS
    Vector(const Vector&) = default;
    Vector& operator=(const Vector&) = default;
    ~Vector() = default;
//

// Add suitable constructors
    Vector();
    Vector(const int a, const int b);
    // possibly more

// Public Member functions here
    int getX() const { return x; };
    int getY() const { return y; };
    Vector& operator+=(const Vector& rhs);
    Vector& operator-=(const Vector& rhs);
    value operator*=(const Vector& rhs);
    Vector& operator*=(int a);
    Vector& operator+=(int a);
    int& operator[](int a);
private:
// Private Member functions here
int x,y;
// Member variables are ALWAYS private, and they go here
};


Vector& operator+(Vector& lhs, const Vector& rhs);
Vector& operator-(Vector& lhs, const Vector& rhs);
value operator*(Vector& lhs, const Vector& rhs);
Vector& operator*(Vector& lhs, const int a);
Vector& operator+(Vector& lhs, const int a);

std::ostream& operator<<(std::ostream& os, const Vector& rhs);
// Nonmember function operators go here

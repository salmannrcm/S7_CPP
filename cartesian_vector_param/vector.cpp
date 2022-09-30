#include <ostream>
#include <iostream>

#include "vector.h"


Vector::Vector()
{
    x = 0;
    y = 0;
}

Vector::Vector(int a, int b) : x{a}, y{b}
{}

Vector& Vector::operator+=(const Vector& rhs)
{
    x += rhs.x;
    y += rhs.y;
    return *this;
}



Vector& Vector::operator-=(const Vector& rhs)
{
    x -= rhs.x;
    y -= rhs.y;
    return *this;
}

value Vector::operator*=(const Vector& rhs)
{
    return x*rhs.getX()+y*rhs.getY();
}

Vector& Vector::operator*=(int a)
{
    x *= a;
    y *= a;
    return *this;
}

Vector& Vector::operator+=(int a)
{
    x += a;
    y += a;
    return *this;
}

int& Vector::operator[](int a)
{
    return ( a == 0 ? x : y);
}

std::ostream& operator<<(std::ostream& os, const Vector& rhs)
{
  return os << '{' << rhs.getX() << ',' << rhs.getY() << '}';
}

Vector& operator+(Vector& lhs, const Vector& rhs)
{
    return lhs += rhs;
}

Vector& operator-(Vector& lhs, const Vector& rhs)
{
    return lhs -= rhs;
}

value operator*(Vector& lhs, const Vector& rhs)
{
    return lhs *= rhs;
}

Vector& operator*(Vector& lhs, const int a)
{
    return lhs *= a;
}

Vector& operator+(Vector& lhs, const int a)
{
    return lhs += a;
}

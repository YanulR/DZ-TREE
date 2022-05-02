#include "Vector666.h"

Vector666::Vector666()
{
	x = y = z = 0;
}
Vector666::Vector666(double x, double y, double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}
void Vector666::SetXYZ(double x, double y, double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}
void Vector666::SetX(double x)
{
	this->x = x;
}
void Vector666::Sety(double y)
{
	this->y = y;
}
void Vector666::Setz(double z)
{
	this->z = z;
}
Vector666 Vector666::operator+(Vector666& v) {
	return { x + v.x, y + v.y, z + v.z };
}
Vector666 Vector666::operator-(Vector666& v) {
	return { x - v.x, y - v.y, z - v.z };
}
Vector666 Vector666::operator*(Vector666& v) {
	return { x * v.x, y * v.y, z * v.z };
}
Vector666 Vector666::operator*(double k) {
	return { x * k, y * k, z * k };
}
Vector666 Vector666::operator/(double k) {
	return { x / k, y / k, z / k };
}
std::ostream& operator<<(std::ostream& out, const Vector666& v)
{
	return { out << "(" << v.x << "  " << v.y << "  " << v.z << ")" };
}
double Vector666::Abs()
{
	return { sqrt(x * x + y * y + z * z) };
}
#include <ostream>
#ifndef VECTOR666_H_
#define VECTOR666_H_
class Vector666 {
private:
	double x, y, z;
public:
	Vector666();
	Vector666(double x, double y, double z);
	void SetXYZ(double x, double y, double z);
	void SetX(double x);
	void Sety(double y);
	void Setz(double z);
	Vector666 operator+(Vector666& v);
	Vector666 operator-(Vector666& v);
	Vector666 operator*(Vector666& v);
	Vector666 operator*(double k);
	Vector666 operator/(double k);
	friend std::ostream& operator<<(std::ostream& out, const Vector666& v);
	double Abs();
};
#endif 
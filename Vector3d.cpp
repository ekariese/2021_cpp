#define _USE_MATH_DEFINES
#include <cmath>

#include "Vector3d.h"

Vector3d::Vector3d()
{

	double x = 0;
	double y = 0;
	double z = 0;

}

Vector3d::Vector3d(double x, double y, double z)
{
	mX = x;
	mY = y;
	mZ = z;
}

double Vector3d::GetX() const
{
	return mX;
}

double Vector3d::GetY() const
{
	return mY;
}

double Vector3d::GetZ() const
{
	return mZ;
}

void Vector3d::SetX(double x)
{
	mX = x;
}

void Vector3d::SetY(double y)
{
	mY = y;
}

void Vector3d::SetZ(double z)
{
	mZ = z;
}


Vector3d Vector3d::Add(double c) const
{
	Vector3d v3;
	v3.mX = mX + c;
	v3.mY = mY + c;
	v3.mZ = mZ + c;
	return v3;
}

Vector3d Vector3d::Add(const Vector3d& v) const
{
	Vector3d v3;
	v3.mX = mX + v.mX;
	v3.mY = mY + v.mY;
	v3.mZ = mZ + v.mZ;
	return v3;
}

Vector3d Vector3d::Sub(double c) const
{
	Vector3d v3;
	v3.mX = mX - c;
	v3.mY = mY - c;
	v3.mZ = mZ - c;
	return v3;
}

Vector3d Vector3d::Sub(const Vector3d& v) const
{
	Vector3d v3;
	v3.mX = mX - v.mX;
	v3.mY = mY - v.mY;
	v3.mZ = mZ - v.mZ;
	return v3;
}


Vector3d Vector3d::Mul(double c) const
{
	Vector3d v3;
	v3.mX = mX * c;
	v3.mY = mY * c;
	v3.mZ = mZ * c;
	return v3;
}

Vector3d Vector3d::Mul(const Vector3d& v) const
{
	Vector3d v3;
	v3.mX = mX * v.mX;
	v3.mY = mY * v.mY;
	v3.mZ = mZ * v.mZ;
	return v3;
}

Vector3d Vector3d::Div(double c) const
{
	Vector3d v3;
	v3.mX = mX / c;
	v3.mY = mY / c;
	v3.mZ = mZ / c;
	return v3;
}

Vector3d Vector3d::Div(const Vector3d& v) const
{
	Vector3d v3;
	v3.mX = mX / v.mX;
	v3.mY = mY / v.mY;
	v3.mZ = mZ / v.mZ;
	return v3;
}

double Vector3d::Sum() const
{
	Vector3d v3;
	double result;
	result = v3.mX + v3.mY + v3.mZ;
	return result;
}
double Vector3d::Length() const
{
	Vector3d v;
	return sqrt((v.mX * v.mX) + (v.mY * v.mY) + (v.mZ * v.mZ));
}

double Vector3d::Distance(const Vector3d& v) const
{
	double c;
	c = sqrt((v.mX - mX) * (v.mX - mX) + (v.mY - mY) * (v.mY - mY) + (v.mZ - mZ) * (v.mZ - mZ));
	return c;
}

double Vector3d::Inner(const Vector3d& v) const
{
	Vector3d v3;
	double result;
	result = (v3.mX * v.mX) + (v3.mY * v.mY) + (v3.mZ * v.mZ);
	return result;
}

Vector3d Vector3d::Cross(const Vector3d& v) const
{
	Vector3d v3;
	v3.mX = mY * v.mZ - mZ * v.mY;
	v3.mY = mZ * v.mX - mX * v.mZ;
	v3.mZ = mX * v.mY - mY * v.mX;
	return v3;
}

double Vector3d::Angle(const Vector3d& v, bool radian) const
{
	double c;
	c = (mX * v.mX) + (mY * v.mY) + (mZ * v.mZ);
	double v0size, vsize;
	v0size = sqrt(mX * mX + mY * mY + mZ * mZ);
	vsize = sqrt(v.mX * v.mX + v.mY * v.mY + v.mZ * v.mZ);
	double k;
	k = acos(c / (v0size * vsize));
	if (radian == true) {
		return k;
	}
	else {
		return (k * (180 / M_PI));
	}
}

#include "Pvector.h"
#include <math.h> 

// Pvector function definitions from Pvector.h //

void Pvector::set(float i, float j) {
	x = i;
	y = j;
}

void Pvector::addVector(Pvector v) {
	x += v.x;
	y += v.y;
}

void Pvector::addScalar(float s) {
	x += s;
	y += s;
}

void Pvector::subVector(Pvector v) {
	x -= v.x;
	y -= v.y;
}

Pvector Pvector::subTwoVector(Pvector v1, Pvector v2) {
	Pvector tmp;
	tmp.x = v1.x - v2.x;
	tmp.y = v1.y - v2.y;
	return tmp;
}

void Pvector::subScalar(float s) {
	x -= s;
	y -= s;
}

void Pvector::mulVector(Pvector v) {
	x *= v.x;
	y *= v.y;
}

void Pvector::mulScalar(float s) {
	x *= s;
	y *= s;
}

void Pvector::divVector(Pvector v) {
	x /= v.x;
	y /= v.y;
}

void Pvector::divScalar(float s) {
	x /= s;
	y /= s;
}

void Pvector::limit(float s) {
	normalise();
	mulScalar(s);
}

float Pvector::distance(Pvector v) const {
	double dx = x - v.x;
	double dy = y - v.y;
	double dist = sqrt((dx*dx) + (dy*dy));
	return dist;
}

float Pvector::dotProduct(Pvector v) const {
	return (x*v.x) + (y*v.y);
}

float Pvector::magnitude() const {
	return sqrt((x*x) + (y*y));
}

float Pvector::angleBetween(Pvector v) const {
	if ((x == 0 && y == 0) || (v.x == 0 && v.y == 0))
		return 0.0;

	float amt = dotProduct(v) / (magnitude() * v.magnitude());
	if (amt <= -1)
		return M_PI;
	else if (amt >= 1)
		return 0.0;
	return acos(amt);
}

void Pvector::normalise() {
	float m = magnitude();
	if (m > 0)
		set(x / m, y / m);
	else
		set(x, y);
}

float Pvector::getAngleRad() const {
	float a = atan2(x, y);
	a = a*(a >= 0) + (a + 2 * M_PI)*(a < 0);
	return a;
}

unsigned int Pvector::getAngleDeg() const {
	float a = atan2(x, y);
	a = a*(a >= 0) + (a + 2 * M_PI)*(a < 0);
	return unsigned int(round(a*(180 / M_PI)));
}

Pvector Pvector::copy(Pvector v) {
	Pvector copy(v.x, v.y);
	return copy;
}

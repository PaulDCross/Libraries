#include "Pvector.h"

// Pvector function definitions from Pvector.h //

// Sets the x and y values for Pvector
void Pvector::set(float i, float j) {
	x = i;
	y = j;
}

// Adds the x and y components of the vector object used as the parameter to the components in this object
void Pvector::addVector(Pvector v) {
	x += v.x;
	y += v.y;
}

void Pvector::addScalar(float s) {
	x += s;
	y += s;
}

// Subtracts the x and y components of the vector object used as the parameter from the components in this object
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

// Subtracts from the Pvector a constant number
void Pvector::subScalar(float s) {
	x -= s;
	y -= s;
}

// Multiplies two vectors
void Pvector::mulVector(Pvector v) {
	x *= v.x;
	y *= v.y;
}

// Multiplies the vector by a constant number
void Pvector::mulScalar(float s) {
	x *= s;
	y *= s;
}

// Divides two vectors
void Pvector::divVector(Pvector v) {
	x /= v.x;
	y /= v.y;
}

// Divides the vector by a constant value
void Pvector::divScalar(float s) {
	x /= s;
	y /= s;
}

// Limits the vector to a given magnitude
void Pvector::limit(float s) {
	normalise();
	mulScalar(s);
}

// Calculates the distance between the first Pvector and the second Pvector
float Pvector::distance(Pvector v) const {
	float dx = x - v.x;
	float dy = y - v.y;
	float dist = sqrt((dx*dx) + (dy*dy));
	return dist;
}

// Calculates the dot product between vector 1 and vector 2
float Pvector::dotProduct(Pvector v) const {
	return (x*v.x) + (y*v.y);
}

// Calculates the magnitude of the vector
float Pvector::magnitude() const {
	return sqrt((x*x) + (y*y));
}

// Calculates the angle between the first and second vectors
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

// Normalise divides x and y by magnitude if it has a magnitude
void Pvector::normalise() {
	float m = magnitude();
	if (m > 0)
		set(x / m, y / m);
	else
		set(x, y);
}

float Pvector::getAngle() const {
	float a = atan2(x, y);
	a = a*(a >= 0) + (a + 2 * M_PI)*(a < 0);
	return a;
}


// Creates and returns a copy of the Pvector used as a parameter
Pvector Pvector::copy(Pvector v) {
	Pvector copy(v.x, v.y);
	return copy;
}

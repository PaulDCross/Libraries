
#ifndef PVECTOR_H
#define PVECTOR_H
#define _USE_MATH_DEFINES
#include <math.h> 


class Pvector {
public:
	float x;
	float y;

	Pvector() {
		x = 0;
		y = 0;
	}

	Pvector(float xCoordinate, float yCoordinate) {
		x = xCoordinate;
		y = yCoordinate;
	}

	~Pvector() {}

	// Mutator Functions

	void set(float, float);

	// Adds the x and y components of the vector object used as the parameter to the components in this object
	void addVector(Pvector);
	void addScalar(float);

	// Subtracts the x and y components of the vector object used as the parameter from the components in this object
	void subVector(Pvector);
	static Pvector subTwoVector(Pvector, Pvector);
	void subScalar(float);

	void mulVector(Pvector);
	void mulScalar(float);

	void divVector(Pvector);
	void divScalar(float);

	void limit(float);

	// Calculating functions
	float distance(Pvector) const;
	float dotProduct(Pvector) const;
	float magnitude() const;
	float angleBetween(Pvector) const;
	void normalise();
	float getAngle() const;

	static Pvector copy(Pvector);
};

#endif //!PVECTOR_H
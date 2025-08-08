#ifndef VEHICLE_H
#define VEHICLE_H

#include "../Pvector/Pvector.h"

class Vehicle {
public:
	// Attributes
	Pvector _acceleration;
	Pvector _velocity;
	Pvector _location;
	float _maxSpeed;
	float _maxForce;

	// Constructor functions
	Vehicle();
	~Vehicle();

	// 
	void update();
	void applyForce(Pvector);
	void seek(Pvector);
	void avoid(Pvector);
	void applyWalls();


};

#endif // !VEHICLE_H

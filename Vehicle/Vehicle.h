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
	update();
	applyForce();
	seek();
	avoid();
	applyWalls();


};

#endif // !VEHICLE_H

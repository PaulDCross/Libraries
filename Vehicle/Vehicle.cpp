
#include "Vehicle.h"


Vehicle::Vehicle() {

}

Vehicle::~Vehicle() {

}


void Vehicle::update() {
	// Update velocity
	_velocity.addVector(_acceleration);
	// Limit velocity
	_velocity.limit(_maxSpeed);
	// Update location
	_location.addVector(_velocity);
	// Reset acceleration each cycle
	_acceleration.mulScalar(0.0);
}

void Vehicle::applyForce(Pvector v) {
	// We could add mass here if we want A = F / M
	_acceleration.addVector(v);
}

void Vehicle::applyWalls(){

	if (_location.x < d) {
		Pvector desired(_maxSpeed, _velocity.y);
	}
	else if (_location.x > width - d) {
		Pvector desired(-_maxSpeed, _velocity.y);
	}

	if (_location.y < d) {
		Pvector desired(_velocity.x, _maxSpeed);
	}
	else if (_location.y > height - d) {
		Pvector desired(_velocity.x, -_maxSpeed);
	}

	if (desired !== null) {
		desired.setMagnitude(_maxSpeed);
		desired.subVector(_velocity);
		desired.limit(_maxForce);
		applyForce(desired);
	}
};
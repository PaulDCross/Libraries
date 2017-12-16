
#ifndef Pvector_h__
#define Pvector_h__

#define _USE_MATH_DEFINES

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

	//************************************
	// Method:    set
	// FullName:  Pvector::set
	// Access:    public 
	// Returns:   void
	// Qualifier:
	// Parameter: float i
	// Parameter: float j
	// Sets the x and y values for Pvector
	//************************************
	void set(float i, float j);

	//************************************
	// Method:    addVector
	// FullName:  Pvector::addVector
	// Access:    public 
	// Returns:   void
	// Qualifier:
	// Parameter: Pvector v
	// Adds the x and y components of the Pvector object used as the parameter to this object's x and y components.
	//************************************
	void addVector(Pvector v);

	//************************************
	// Method:    addScalar
	// FullName:  Pvector::addScalar
	// Access:    public 
	// Returns:   void
	// Qualifier:
	// Parameter: float s
	// Adds the scalar parameter to the x and y components of this Pvector object.
	//************************************
	void addScalar(float s);

	//************************************
	// Method:    subVector
	// FullName:  Pvector::subVector
	// Access:    public 
	// Returns:   void
	// Qualifier:
	// Parameter: Pvector v
	// Subtracts the x and y components of the Pvector object used as the parameter to this object's x and y components.
	//************************************
	void subVector(Pvector v);

	//************************************
	// Method:    subTwoVector
	// FullName:  Pvector::subTwoVector
	// Access:    public static 
	// Returns:   Pvector
	// Qualifier:
	// Parameter: Pvector v1
	// Parameter: Pvector v2
	// Takes two Pvector objects as parameters and subtracts their corresponding x and y values.
	//************************************
	static Pvector subTwoVector(Pvector v1, Pvector v2);

	//************************************
	// Method:    subScalar
	// FullName:  Pvector::subScalar
	// Access:    public 
	// Returns:   void
	// Qualifier:
	// Parameter: float s
	// Subtracts the scalar parameter from both x and y values of this Pvector object.
	//************************************
	void subScalar(float s);

	//************************************
	// Method:    mulVector
	// FullName:  Pvector::mulVector
	// Access:    public 
	// Returns:   void
	// Qualifier:
	// Parameter: Pvector v
	// Multiplies the x and y components of this Pvector object by the corresponding components of the vector parameter.
	//************************************
	void mulVector(Pvector v);

	//************************************
	// Method:    mulScalar
	// FullName:  Pvector::mulScalar
	// Access:    public 
	// Returns:   void
	// Qualifier:
	// Parameter: float s
	// Multiplies the x and y components of this Pvector object by the scalar parameter.
	//************************************
	void mulScalar(float s);

	//************************************
	// Method:    divVector
	// FullName:  Pvector::divVector
	// Access:    public 
	// Returns:   void
	// Qualifier:
	// Parameter: Pvector v
	// Divides the x and y components of this Pvector object by the corresponding values of the vector parameter.
	//************************************
	void divVector(Pvector v);

	//************************************
	// Method:    divScalar
	// FullName:  Pvector::divScalar
	// Access:    public 
	// Returns:   void
	// Qualifier:
	// Parameter: float s
	// Divides the x and y components of this Pvector object by the scalar parameter.
	//************************************
	void divScalar(float s);

	//************************************
	// Method:    limit
	// FullName:  Pvector::limit
	// Access:    public 
	// Returns:   void
	// Qualifier:
	// Parameter: float s
	// Limits the magnitude of this Pvector object to the value of the parameter parsed.
	//************************************
	void limit(float s);

	//************************************
	// Method:    distance
	// FullName:  Pvector::distance
	// Access:    public 
	// Returns:   float
	// Qualifier: const
	// Parameter: Pvector v
	// Calculates the distance between this Pvector object and the Pvector object parsed.
	//************************************
	float distance(Pvector v) const;

	//************************************
	// Method:    dotProduct
	// FullName:  Pvector::dotProduct
	// Access:    public 
	// Returns:   float
	// Qualifier: const
	// Parameter: Pvector v
	// Calculates the dot product between this Pvector object and the Pvector object parsed.
	//************************************
	float dotProduct(Pvector v) const;

	//************************************
	// Method:    magnitude
	// FullName:  Pvector::magnitude
	// Access:    public 
	// Returns:   float
	// Qualifier: const
	// Calculates the magnitude of this Pvector object.
	//************************************
	float magnitude() const;

	//************************************
	// Method:    angleBetween
	// FullName:  Pvector::angleBetween
	// Access:    public 
	// Returns:   float
	// Qualifier: const
	// Parameter: Pvector v
	// Calculates the angle between the vector of this Pvector object and the vector of the Pvector object used as the parameter.
	//************************************
	float angleBetween(Pvector v) const;

	//************************************
	// Method:    normalise
	// FullName:  Pvector::normalise
	// Access:    public 
	// Returns:   void
	// Qualifier:
	// Divides the x and y components of this Pvector object by it's magnitude if it has a magnitude.
	//************************************
	void normalise();

	//************************************
	// Method:    getAngleRad
	// FullName:  Pvector::getAngleRad
	// Access:    public 
	// Returns:   float
	// Qualifier: const
	// Returns the angle between the vertical axis and the vector of this Pvector object in radians.
	//************************************
	float getAngleRad() const;

	//************************************
	// Method:    getAngleDeg
	// FullName:  Pvector::getAngleDeg
	// Access:    public 
	// Returns:   unsigned int
	// Qualifier: const
	// Returns the angle between the vertical axis and the vector of the Pvector object in degrees.
	//************************************
	unsigned int getAngleDeg() const;

	//************************************
	// Method:    copy
	// FullName:  Pvector::copy
	// Access:    public static 
	// Returns:   Pvector
	// Qualifier:
	// Parameter: Pvector v
	// Creates and returns a copy of the Pvector used as a parameter
	//************************************
	static Pvector copy(Pvector v);
};
#endif // Pvector_h__

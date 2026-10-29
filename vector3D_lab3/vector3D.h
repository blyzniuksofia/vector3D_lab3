#pragma once
#include <iostream>

class vector3D{
	double x, y, z;
public:
	vector3D();
	vector3D(double x, double y, double z);
	vector3D(const vector3D& other);
	~vector3D();

	void Init(double x, double y, double z);
	void Read();
	void Display() const;
	std::string toString() const;
	vector3D add(const vector3D& other) const;
	vector3D sub(const vector3D& other) const;
	double dot(const vector3D& other) const;
	vector3D mul(double k) const;
	bool equals(const vector3D& other) const;
	double length() const;
	int comparelength(const vector3D& other) const;
};


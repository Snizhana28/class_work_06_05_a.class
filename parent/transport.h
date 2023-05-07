#ifndef transport_class
#define transport_class

#include <iostream>
#include <string>
using namespace std;

class Transport abstract     //type of transport (car,bicycle,viz)
{
protected:			         
	string company;          //manufacturer
	string name;             //Audi Q7
	string model;            //body type	
	string color; 
	int year;               
	//Technic characteristics
	string engine_type;      //engine type (diesel,petrol,electric)
	double fuel_consumption; //fuel consumption L/100 km
	double speed;            // in km/h
	//Gabarits
	double lenght;           // in meters
	double width;            // in meters
public:
	//constructors
	Transport()
	{
		company = "No company";
		name = "No name";
		model = "No model";
		color = "No color";
		year = 0;
		engine_type = "No engine type";
		fuel_consumption = 0;
		speed = 0;
		lenght = 0;
		width = 0;
	}
	virtual double get_speed() = 0;	
	//method for calculating travel time
	virtual double Time(double distance, double speed) = 0;
	//method for calculating the cost of movement
	virtual double Cost(double distance, double weight) = 0;

	virtual void Print() = 0;
	//destructor
	 ~Transport()
	{
		company.clear();
		name.clear();
		model.clear();
		color.clear();
		year = 0;
		lenght = 0;
		width = 0;
		speed = 0;
	}
};
#endif 

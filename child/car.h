#include "../parent/transport.h"

class Car : public Transport
{
public:
	Car() 
	{
		this->company = "Toyota Motor Corporation";
		this->name = "Tayota camry 70 hybrid";
		this->model = "Sedan";
		this->color = "White";
		this->year = 2020;
		this->engine_type = "Petrol";
		this->fuel_consumption = 6.8;
		this->speed = 105;
		this->lenght = 4.885;
		this->width = 1.840;
	}
	double get_speed() override
	{
		return this->speed;
	}
	double Time(double distance, double speed) override
	{
		return distance / speed;
	}
	double Cost(double distance, double weight) override
	{
		double fuelCost = fuel_consumption / 100.0 * distance * 25;
		return fuelCost;
	}
	void Print() override
	{
		cout << "---------->Car<----------" << endl;
		cout << "Company: " << this->company << endl;
		cout << "Name: " << this->name << endl;
		cout << "Model: " << this->model << endl;
		cout << "Color: " << this->color << endl;
		cout << "Year: " << this->year << endl;
		cout << "Engine type: " << this->engine_type << endl;
		cout << "Fuel consumption: " << this->fuel_consumption << endl;
		cout << "Speed: " << this->speed << endl;
		cout << "Lenght: " << this->lenght << endl;
		cout << "Width: " << this->width << endl;
		cout << "-------------------------" << endl << endl;
	}
	~Car()
	{
		company.clear();
		name.clear();
		model.clear();
		color.clear();
		engine_type.clear();
		year = 0;
		fuel_consumption = 0;
		speed = 0;
		lenght = 0;
		width = 0;
	};
};

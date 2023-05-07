#include "../parent/transport.h"

class Bicycle : public Transport
{
public:
	Bicycle()
	{
		this->company = "Giant";
		this->name = "Giant Talon 2 GE";
		this->model = "Hardtail";
		this->color = "Black";
		this->year = 2020;
		this->engine_type = "None";
		this->fuel_consumption = 0;
		this->speed = 30;
		this->lenght = 1.8;
		this->width = 0.7;
	}
	void Print() override
	{
		cout << "---------->Bicycle<----------" << endl;
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
		cout << "-----------------------------" << endl << endl;
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
		return 0; // The bike does not need fuel, so the transportation cost is 0
	}
	~Bicycle()
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
	}
};

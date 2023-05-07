#include "../parent/transport.h"

class Viz : public Transport
{
public:
	Viz()
	{
		this->company = "Viz";
		this->name = "Viz";
		this->model = "Viz";
		this->color = "Viz";
		this->year = 2020;
		this->engine_type = "Viz";
		this->fuel_consumption = 0;
		this->speed = 0;
		this->lenght = 0;
		this->width = 0;
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
		// Let's assume that the cost of transporting one kilogram of cargo is UAH 5
		double weightCost = weight * 5;
		return weightCost;
	}
	void Print()
	{
		cout << "---------->Viz<----------" << endl;
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
	~Viz()
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

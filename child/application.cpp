#include "car.h"
#include "bicycle.h"
#include "viz.h"

#include <vector>

int main()
{
	vector<Transport*> transport;
	transport.push_back(new Car());
	transport.push_back(new Bicycle());
	transport.push_back(new Viz());
	for (int i = 0; i < transport.size(); i++)
	{
		transport[i]->Print();
	}
	cout << "-------------------------" << endl << endl;
	for (int i = 0; i < transport.size(); i++)
	{
		cout << "Time: " << transport[i]->Time(200, transport[i]->get_speed()) << endl;
		cout << "Cost: " << transport[i]->Cost(200, 10) << endl;
		cout << "-------------------------" << endl << endl;
	}

	for (int i = 0; i < transport.size(); i++)
	{
		delete transport[i];
	}
	transport.clear();
	
	return 0;
}
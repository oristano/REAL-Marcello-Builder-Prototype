#include <vector>
#include <iostream>
using namespace std;
class Car
{
public:
	virtual Car* Clone() = 0;
	virtual void PrintMe() = 0;
};

class Factory
{
public:
	static Car* make_Car(int choice);
private:
	static Car* s_prototypes[4];
};


class Mitsubishi : public Car
{
public:
	Car*   Clone() { return new Mitsubishi; }
	void PrintMe() {
		cout << "My model is Mitsubishi\n";
	}
};

class Subaru : public Car
{
public:
	Car*   Clone() { return new Subaru; }
	void PrintMe() {
		cout << "My model is Subaru\n";
	}
};

class Mazda : public Car
{
public:
	Car*   Clone() { return new Mazda; }
	void PrintMe() {
		cout << "My model is Mazda\n";
	}
};

Car* Factory::s_prototypes[] = {0, new Mitsubishi, new Subaru, new Mazda};



Car* Factory::make_Car(int choice)
{
	return s_prototypes[choice]->Clone();
}

int main1()
{
	vector<Car*> cars;
	Factory ori;
	int             choice;

	while (true) {
		cout << "Mitsubishi(1) Subaru(2) Mazda(3) exit(0)";
		cin >> choice;
		if (choice == 0)
			break;
		cars.push_back(Factory::make_Car(choice));
	}

	for (int i = 0; i < cars.size(); ++i)
		cars[i]->PrintMe();
	for (int i = 0; i < cars.size(); ++i)
		delete cars[i];
	getchar();
	return 1;
}

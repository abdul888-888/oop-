#include <iostream>
#include "Customer.h"
#include "Car.h"

using namespace std;



class IndividualCustomer : public Customer
{
	Car* rented_car;
public:
	IndividualCustomer();
	IndividualCustomer(strings _n);
	bool rent_a_car(Car* c);
	void return_a_car(Car* c);
	void print_bill();
	void display_info();
};
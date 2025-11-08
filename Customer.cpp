#include "Customer.h"

Customer::Customer(strings n) :name(n) {};

int  Customer::get_rented_cars_count()
{
	return rented_cars_count;
}
void Customer::display_info()
{
	cout << "name of customer:" << name << "\n";
	cout << "total rented cars:" << rented_cars_count;
}
bool Customer::rent_a_car(Car *c)
{
	
}
void Customer:: return_a_car(Car* c)
{

}
void Customer::print_bill()
{}
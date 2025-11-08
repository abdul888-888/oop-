#include <iostream>
#include "strings.h"
#include "Car.h"

#ifndef CUSTOMER_H
#define CUSTOMER_H

using namespace std;


class Customer
{
	strings name;
	int rented_cars_count;
public:
	Customer(strings _n);
	strings get_name();
	int get_rented_cars_count();
    virtual void display_info();
    virtual	bool rent_a_car(Car* c) ;
	virtual void return_a_car(Car* c);
	virtual void print_bill();
};

#endif
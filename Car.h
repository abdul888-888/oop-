#include<iostream>
#include "strings.h"
#include "Customer.h"

#ifndef CAR_H
#define CAR_H
using namespace std;

class Car {
private:
	strings reg_no;
	strings brand;
	bool is_rented_;
	bool is_premium;
	double rent_price;
	//Customer* renter;
public:
	Car(strings _r, strings _b, bool _ip, double _rp);
	bool is_rented();
	Customer* get_renter();
	strings get_brand();
	strings get_reg_no();
	void display_info();
	double get_rent_price();
	bool is_it_premium_car();
};

#endif //!

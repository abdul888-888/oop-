#include "Car.h"


Car::Car(strings _r, strings _b, bool _ip, double _rp) :reg_no(_r), brand(_b), is_rented_(false), is_premium(false), rent_price(0)
{};
bool Car::is_rented()
{
	return(is_rented_);
	
}
Customer* Car::get_renter()
{

}
strings get_brand();
strings get_reg_no();
void display_info();
double get_rent_price();
bool is_it_premium_car();
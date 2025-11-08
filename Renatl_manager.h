class RentalManager {
private:
	int cars_count;
	int customer_count;
	Car** cars_collection;
	Customer** customers_list;
public:
	RentalManager();
	void add_a_car(Car* c);
	void add_a_customer(Customer* c);
	void rent_out_a_car(Car* car, Customer* customer);
	void get_back_a_car(Car* car, Customer* customer);
	void remove_a_customer_from_list(Customer* c);
	void display_info();
	void display_customer_bill(Customer* customer);
};
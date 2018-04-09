#include <iostream>
#include <cstring>
using namespace std;

class Car{
	public:
	string color;
	string make;
	string model;
	int year;
	int mph;
	bool running;
	void user_choice(char);
	void set_make(Car);
	void set_model(Car);
	void set_year(Car);
	void start_car(bool);
	void stop_car(bool);
	void speed_change (Car);
};

class Operate{

};

Car user {"Blue", "Nissan", "Sentra", 2013, 0};

char yesno = 'y';

void print_car(Car);
void instruct();

int main(){
	
	print_car(user);
	instruct();
	print_car(user);
	
	return 0;
}

void print_car(Car a){
	cout << "Color: " << a.color << endl << "Make: " << a.make << endl << "Model: "
		 << a.model << endl << "Year: " << a.year << endl << "Current speed: " 
		 << a.mph << " MPH" << endl;
}

void instruct(){
	cout << "Select an action: \n" << "	set make (m)\n	set model (o)\n	set year (y)\n"
		 << "	start car (s)\n 	stop car (S)\n	print (p)\nWhat would you like to do?: ";
}
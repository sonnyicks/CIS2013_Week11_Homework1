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
	void set_make();
	void set_model();
	void set_year();
	void start_car();
	void stop_car();
	void speed_change();
};

Car user {"Blue", "Nissan", "Sentra", 2013, 0};

char yesno = 'y';
char user_choice;
bool program_running = true;

void print_car(Car);
void instruct();
void choose(char);

int main(){
	
	print_car(user);
	instruct();
	while (program_running){
		cout << "What would you like to do?: ";
		cin >> user_choice;
		choose(user_choice);
	}
	
	return 0;
}

void print_car(Car a){
	cout << "Color: " << a.color << endl << "Make: " << a.make << endl << "Model: "
		 << a.model << endl << "Year: " << a.year << endl << "Current speed: " 
		 << a.mph << " MPH" << endl << "The car is ";
		 if (a.running==false){cout << "off." << endl;}
		 else {cout << "on." << endl;}
}

void instruct(){
	cout << "Select an action: \n" << "	set make (m)\n	set model (o)\n	set year (y)\n"
		 << "	start car (s)\n 	stop car (S)\n	change speed (d)\n	print (p)\n";
}

void choose(char a){
	if (a=='m'){user.set_make();}
	else if (a=='o'){user.set_model();}
	else if (a=='y'){user.set_year();}
	else if (a=='s'){user.start_car();}
	else if (a=='S'){user.stop_car();}
	else if (a=='d'){user.speed_change();}
	else if (a=='p'){
		print_car(user);
		instruct();
	}
	else{cout << "Invalid Entry -";}
}

void Car::set_make(){
	cout << "Change make: ";
	cin >> user.make;
	}
void Car::set_model(){
	cout << "Change model: ";
	cin >> user.model;
	}
void Car::set_year(){
	cout << "Change year: ";
	cin >> user.year;
	}
void Car::start_car(){
	if (user.running==true){
		cout << "Car is already running." << endl;
	}
	else {user.running=true;}
}
void Car::stop_car(){
	if (user.running==false){cout << "Car is already off." << endl;}
	else {user.running=false;}}
	
void Car::speed_change(){
	cout << "How fast do you want to go?: ";
	cin >> user.mph;
}
















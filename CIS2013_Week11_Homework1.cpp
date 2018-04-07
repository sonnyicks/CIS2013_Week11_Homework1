#include <iostream>
#include <cstring>
using namespace std;

struct Car{
	string color;
	string make;
	string model;
	int year;
	int mph;
};

Car user;

char yesno = 'y';

void print(Car);

int main(){
	
	user.color = "Blue";
	user.make = "Nissan";
	user.model = "Sentra";
	user.year = 2013;
	user.mph = 0;
	
	print(user);
	cout << "Do you want to paint your car?";
	cin >> yesno;
	if ((yesno == 'y')||(yesno == 'Y')){
		cout << "What color?";
		cin >> user.color;
	}
	print(user);
	
	return 0;
}

void print(Car a){
	cout << "Color: " << a.color << endl << "Make: " << a.make << endl << "Model: "
		 << a.model << endl << "Year: " << a.year << endl << "Current speed: " 
		 << a.mph << " MPH" << endl;
}
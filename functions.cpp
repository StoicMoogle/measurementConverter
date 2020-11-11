#include <iostream>
using namespace std;

void getMetricInput(int& meters, int& centimeters);
int convertToInches(int meters, int centimeters);
int convertToFeet(int& inches);

void getImperialInput(int& feet, int& inches);
int convertToCentimeters(int feet, int centimeters);
int convertToMeters(int& centimeters);

void output(int meters, int centimeters, int feet, int inches, int choice);

int main() {
	int meters, centimeters, inches, feet, choice;

	cout << "Enter '1' to convert from Metric to Imperial" << endl << "Enter '2' to convert from Imperial to Metric" << endl;
	cin >> choice;
	if (choice == 1) {
		getMetricInput(meters, centimeters);
		inches = convertToInches(meters, centimeters);
		feet = convertToFeet(inches);
		output(meters, centimeters, feet, inches, choice);
		return 0;
	}

	else if (choice == 2) {
		getImperialInput(feet, inches);
		centimeters = convertToCentimeters(feet, inches);
		meters = convertToMeters(centimeters);
		output(meters, centimeters, feet, inches, choice);
		return 0;
	}
	else {
		cout << "That was not a valid option. Goodbye" << endl;
		return 0;
	}
}

void getMetricInput(int& meters, int& centimeters) {
	cout << "Enter meters" << endl;
	cin >> meters;
	cout << "Enter centimeters" << endl;
	cin >> centimeters;
}

int convertToInches(int meters, int centimeters) {
	int inches = 0;
	inches += meters * 39;
	inches += centimeters * 0.39;
	return inches;
}

int convertToFeet(int& inches) {
	int feet = 0;
	feet += inches / 12;
	inches %= 12;
	return feet;
}

void getImperialInput(int& feet, int& inches) {
	cout << "Enter feet" << endl;
	cin >> feet;
	cout << "Enter inches" << endl;
	cin >> inches;
}


int convertToCentimeters(int feet, int inches) {
	int centimeters = 0;
	centimeters += inches * 2.54;
	centimeters += feet * 30.48;
	return centimeters;
}


int convertToMeters(int& centimeters) {
	int meters = 0;
	meters += centimeters / 100;
	centimeters %= 100;
	return meters;
}




void output(int meters, int centimeters, int feet, int inches, int choice) {
	if (choice == 1) {
		cout << meters << " meters and " << centimeters << " centimeters are converted to " << feet << " feet and " << inches << " inches." << endl;
	}

	else if (choice == 2) {
		cout << feet << " feet and " << inches << " inches are converted to " << meters << " meters and " << centimeters << " centimeters." << endl;
	}
}


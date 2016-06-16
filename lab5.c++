// salary calculated by Diem Pham

#include <iostream>
#include <iomanip>

using namespace std;


int main() {
	int workDays;
	double totalPay = 0.0, salary = 0.05;
	cout << "Please enter how many days you are going to work: ";
	cin >> workDays;

	cout << "Day" << setw(20) << "Salary" << endl;
	cout << "======================" << endl;

	for (int day = 1; day <= workDays; day++) {
		cout << day << setw(20) << salary << endl;
		totalPay += salary;
		salary = salary * 2;		
	}
	cout << "\nYour total salary is $" << totalPay << endl;
	return 0;
}
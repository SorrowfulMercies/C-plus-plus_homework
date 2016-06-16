// Average grade by DiemPham

using namespace std;
#include <iostream>

int main()
{
	double grade1, grade2, grade3, grade4, averageGrade;

	cout << "Please enter the first grade: ";
	cin >> grade1;
	cout << "Please enter the seconde grade: ";
	cin >> grade2;
	cout << "Please enter the third grade: ";
	cin >> grade3;
	cout << "Please enter the forth grade: ";
	cin >> grade4;
	averageGrade = (grade1 + grade2 + grade3 + grade4) / 4;
	cout << "The average grade is " << averageGrade << ".\n";

	if (averageGrade >= 90) {
		cout << "Your grade is A." << endl;
	}
	else {
		if (averageGrade >= 80) {
			cout << "Your grade is B." << endl;
		}
		else {
			if (averageGrade >= 70) {
				cout << "Your grade is C." << endl;
			}
			else {
				if (averageGrade >= 60) {
					cout << "Your grade is D." << endl;
				}
				else {
					cout << "Your grade is F." << endl;
				}
			}
		}
	}
	return 0;

}



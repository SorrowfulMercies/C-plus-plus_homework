// compute falling distance by Diem Pham
#include <iostream>

using namespace std;

double FallingDistance(int);

int main() {
	double distance;
	
	cout << "Seconds      Distance" << endl;
	cout << "=====================" << endl;

	for (int seconds = 1; seconds < 11; seconds++) {
		distance = FallingDistance(seconds);
		cout << seconds << "\t\t" << distance << endl;
	}
	return 0;
}

double FallingDistance(int secs) {
	return (1.0 / 2.0 * 32.2 * secs * secs);
}


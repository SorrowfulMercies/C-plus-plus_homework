// request and verify password program by Diem Pham
#include <iostream>
#include <cstring>

using namespace std;

int getPass(char[], int);
bool verifyPass(char[], int, int, int, int);

const int SIZE = 40;


int main() {
	char passWord[SIZE];
	int length;
	int upcount = 0;
	int lowcount = 0;
	int nonalcount = 0;

	length = getPass(passWord, SIZE);
	while (!verifyPass(passWord, length, upcount, lowcount, nonalcount)) {
		length = getPass(passWord, SIZE);
	}
	return 0;
}

int getPass(char passWord[], int SIZE) {
	cout << "Please enter a password: " << endl;
	cin.getline(passWord, SIZE);
	return strlen(passWord);
}

bool verifyPass(char passWord[], int length, int upcount, int lowcount, int nonalcount) {
	for (int x = 0; x < length; x++) {
		if (!isalpha(passWord[x])) {
			nonalcount += 1;
		}
		else {
			if (islower(passWord[x])) {
				lowcount += 1;
			}
			else {
				upcount += 1;
			}
		}
	}
	int total;
	total = upcount + lowcount + nonalcount;

	if (total >= 8) {
		if (upcount == 0 && lowcount != 0) {
			cout << "Password must include at least one uppercase." << endl;
			return false;
		}
		else if (lowcount == 0 && upcount != 0) {
			cout << "Password must contain at least one lowercase letter." << endl;
			return false;
		}
		else if (upcount == 0 && lowcount == 0) {
			cout << "Password must contain at least one lowercase and one uppercase." << endl;
			return false;
		}
		else
		{
			cout << "Thank you, this is a valid password." << endl;
			return true;
		}
	}
	else {
		cout << "Password must be at least 8 characters long." << endl;
		return false;
	}
}

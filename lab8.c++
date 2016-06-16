//quiz grader by Diem Pham

#include <iostream>
#include <iomanip>

using namespace std;

void inputAnswers(int [], int);
void numberCorrect(int [], int [], int, int, int[]);
void numberWrong(int [], int, int);

const int SIZE = 10;

int main() {
	
	int numRight = 0;
	int numWrong = 0;
	int givenAnswers[SIZE];
	int wrongAnswers[SIZE];

	int correctAnswers[SIZE] = { 5, 22, 35, 0, 16, 28, 4, 3, 42, 51 };
	inputAnswers(givenAnswers, SIZE);
	numberCorrect(givenAnswers, correctAnswers, numRight, SIZE, wrongAnswers);

	cout << "You answered the following questions incorrectly : ";
	numberWrong(wrongAnswers, SIZE, numWrong);
	
	return 0;
}


void inputAnswers(int givenAnswers [], int SIZE) {
	for (int count = 0; count < SIZE; count++) {
		cout << "Please enter your answer for question #" << (count + 1) << ": ";
		cin >> givenAnswers[count];
	}
}

void numberCorrect(int givenAnswers[], int correctAnswers[], int numRight, int SIZE, int wrongAnswers []) {
	for (int count = 0; count < SIZE; count++) {
		if (givenAnswers[count] == correctAnswers[count]) {
			numRight += 10;
			wrongAnswers[count] = 0;					
		}else {
			wrongAnswers[count] = count;
		}
	}
	cout << "Your quiz grade is " << numRight << "%" << endl;
}

void numberWrong(int wrongAnswers[], int SIZE, int numWrong) {
	for (int count = 0; count < SIZE; count++) {
		if (wrongAnswers[count] > 0) {
			numWrong = wrongAnswers[count] + 1;
			cout << " " << numWrong;
		}
	}	
}


 // text reading program by Diem Pham

#include <fstream>
#include <iostream>
#include <string>

using namespace std;


int main() {
	fstream inputFile;
	ofstream outputFile;
	string input;

	inputFile.open("plain.txt", ios::in);
	outputFile.open("encoded.txt");

	if (inputFile) {
		while (getline(inputFile, input)) {
			cout << input << endl;
			for (int i = 0; i < input.length(); i++) {
				input[i] = char(int(input[i] + 4));
				}
				outputFile << input << endl;
		}inputFile.close();
	}
	else {
		cout << "Error: Cannot open file." << endl;
	}
	return 0;
}


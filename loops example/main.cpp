#include<iostream>

using namespace std;

int main() {
	for (int i = 0; i < 80; i += 10) {
		cout << i << " ";
	}
	cout << endl;

	for (int i = 20; i > -20; i--) {
		cout << i << " ";
	}
	cout << endl;

	for (int i = 3; i < 2000; i *= 5) {
		cout << i << " ";
	}
	cout << endl;

	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 7; j++) {
			cout << "*";
		}
		cout << "*" << endl;
	}
	cout << endl << endl;

	int shuffleTimes = 0;
	int currShuffle = 0;
	cout << "How many times would you like to shuffle your cards? ";
	cin >> shuffleTimes;
	while (currShuffle < shuffleTimes) {
		cout << "shuffle ";
		currShuffle++;
	}

}
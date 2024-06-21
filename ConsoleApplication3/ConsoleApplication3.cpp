// BASIC CALCULATOR FROM BIGGEST QUI BRO v.4 (added easter egg)
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	float quibitch1, quibitch2, quifatherless{};
	char quidicksucker;
	bool dumb = false;
	bool cheat = false;
	
	cout << "0 or 1?" << endl;
	cin >> cheat;

	if (cheat == false) {
		cout << "Enter first number if qui bitch" << endl;
		cin >> quibitch1;

		cout << "Enter second number if qui dick sucker" << endl;
		cin >> quibitch2;

		cout << "Enter what we do (+, -, *, /) if qui fatherless" << endl;
		cin >> quidicksucker;


		switch (quidicksucker) {
		case '+': quifatherless = quibitch1 + quibitch2; break;
		case '/': quifatherless = quibitch1 / quibitch2; break;
		case '-': quifatherless = quibitch1 - quibitch2; break;
		case '*': quifatherless = quibitch1 * quibitch2; break;
		default: dumb = true; break;
		}

		if (dumb == true) {
			cout << "are ya cant read or what";
			return 0;
		}
		else if (dumb == false) {
			cout << quifatherless;
			return 0;
		}

	}
	else if (cheat == true) {
		cout << "u hacked calculator" << endl;
		for (short sigma = 1488; sigma > 1;) {
			cout << sigma;
		 }
	}

	return 0;
}
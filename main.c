#include <iostream>
#include <string>
using namespace std;

int main() {
	string letter;
	while (1 == 1) {
		cout << "Type the letter 'a'.\n";
		cin >> letter;
		if (letter == "a") {
			cout << ("You're right!");
			return 0;
		}
		else {
			cout << ("Hmm. That's not the letter a. Try again.\n");
		}
	}
}

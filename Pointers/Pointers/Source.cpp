// Karl Cavanaugh
// Pointers Sample Program

#include <string>
#include <iostream>

using namespace std;



	int main() {
		
		// Declare Variables and Assign Constants
		string words[2] = { "Hello", "World" };
		string * pWord;
		string ** delimiter;

		// Assign Base variable values
		pWord = words;
		delimiter = &pWord;

		// Output Memory Address and What is Stored There
		for (int i = 0; i < 2; i++) {

			cout << endl << pWord << endl;
			cout << **delimiter << endl << endl;
			pWord++;
		
		}

		system("pause");
		return 0;

	};
	

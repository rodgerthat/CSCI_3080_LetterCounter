// LetterCounter.cpp : Count the frequency of a letter in an array of chars

#include <iostream>

using namespace::std;

int main()
{
	int x[26] = { 0 };
	int i;
	char c;

	cout << "start typing. hit enter to get results";
	while ((c = cin.get()) != '\n') {

		++x[c - 'a'];
	}
	
	for (i = 0; i < 26; i++) {
		char currentLetter = 'a' + i;
		cout << currentLetter << " : " << x[i] << endl;
	}

    return 0;
}


#include <iostream>
#include <string>

using namespace std;

//int main()
//{
//	string name;
//	cout << "Who are you?";
//	cin >> name;
//	string greeting = "Hello, " + name;
//	if (name == "Simon")
//	{
//		greeting += ", I know you!";
//	}
//	cout << greeting << endl;
//
//	int l = greeting.length();
//	cout << "\"" + greeting + "\" is "
//		<< l << " characters long." << endl;
//	auto space = greeting.find(' ');
//	string beginning = greeting.substr(space + 1);
//	cout << beginning << endl;
//	if (beginning == name)
//	{
//		cout << "expected result." << endl;
//	}
//
//	return 0;
//}

int main()
{
	string word1;
	string word2;

	cout << "Plz enter a word: ";
	cin >> word1;
	cout << "Plz enter another word: ";
	cin >> word2;

	if (word1.length() < word2.length())
	{
		cout << "The word length of " + word1 + " less than "
			+ word2 + "!";
	}
	if (word1.length() > word2.length())
	{
		cout << "The word length of " + word1 + " greater than "
			+ word2 + "!";
	}
	if (word1.length() == word2.length())
	{
		cout << "The word length of " + word1 + " and "
			+ word2 + " is the same!";
	}

	return 0;
}
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<string> fairytale;

	string word1("Once");
	string word2("upon");
	string word3("a");
	string word4("time");
	string word5("there");

	fairytale.push_back(word1);
	fairytale.push_back(word2);
	fairytale.push_back(word3);
	fairytale.push_back(word4);
	fairytale.push_back(word5);

	sort(fairytale.begin(), fairytale.end() );

	vector<string>::iterator runner;
	for( runner=fairytale.begin(); runner!=fairytale.end(); ++runner) {
		cout << *runner << endl;
	}

	return 0;
}

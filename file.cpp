#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(int argc, char* argv[]) {
  ifstream in;
  in.open(argv[1]);
  stringstream ss;
  ss << in.rdbuf();
  string input = ss.str();
  int letters = 0;
  int digits = 0;
  int spaces = 0;
  int lines = 0;
  int chars = 0;
	for (auto c : input){
		if (isalpha(c)){
			letters++;
		}

		if (isdigit(c)){
			digits++;
		}

		if (isspace(c)){
			spaces++;
		}

		if (c == '\n'){
			lines++;
		}

		chars++;
	}
 in.close();

	cout << "chars: " << chars << endl;
	cout << "lines: " << lines << endl;
        cout << "spaces: " << spaces << endl;
        cout << "digits: " << digits << endl;
        cout << "letters: " << letters << endl;
}

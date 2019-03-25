#include <string>
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
using std::string;
string ReverseSentence(string str) {
	stack<string> stackStr;
	string singleWord = "";
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == ' ') {
			stackStr.push(singleWord);
			singleWord = "";
		}
		else if (i == str.size() - 1) {
			singleWord += str[i];
			stackStr.push(singleWord);
		}
		else
			singleWord += str[i];
	}
	string newstr = "";
	while (!stackStr.empty()) {
		if (stackStr.size() == 1)
		{		newstr += stackStr.top();
		break;
	}

			newstr += stackStr.top() + ' ';
		stackStr.pop();
	}
	return newstr;
}
int main() {
	//string in = "I am a student.";
	string in = "Iam a student. hao";
	std::cout << in.size() << ReverseSentence(in) << ReverseSentence(in).size() << endl;

	system("pause");
}

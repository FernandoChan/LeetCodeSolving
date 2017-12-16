#include <iostream>
#include <string>
using namespace std;

void counter(char ch, int* store) {
	int asc = (int)ch;
	if ((asc >= 65 && asc < 91)) store[asc - 65]++;//*(store + (asc - 65))
	if ((asc >= 97 && asc < 123)) store[asc - 97]++;
}
void print(int* store) {
	for (int i = 0; i < 26; i++) {
		if (*(store + i) == 0)continue;
		cout << ((char)(65 + i)) << " " << *(store + i) << endl;
	}
	return;
}


int main() {
	std::string readline;
	std::getline(std::cin, readline);

	int store[26] = { 0 };  // 别忘了初始化
	for (auto i : readline) counter(i, store);
	print(store);
}
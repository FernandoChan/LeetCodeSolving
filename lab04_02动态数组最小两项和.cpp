/*

Mary collected n number of stones, where 1 ≤ s ≤ 6000. She would like to
organize them into one group. Assume that there are s stone groups at first and
each of them has an integer e, which indicate the energy needed by Mary to move
that stone group. In each merging, the energy for each merging is the sum of two e
of the two stone groups. After merging, two stone groups will be combined as one
stone group and its e is the sum of the e of the previous groups. We would like to
know the minimum energy for Mary to merge all the stone groups into one.
For example
Given s = 5 and their e are : 1 2 3 4 5. The answer is 33. The detail calculation is
as follows:
Original Group Selected Groups After Merging Energy used
1 2 3 4 5 1 2 3 4 5 1 + 2 = 3
3 3 4 5 3 3 6 4 5 3 + 3 = 6
6 4 5 4 5 6 9 4 + 5 = 9
9 6 9 6 15 9 + 6 = 15
Therefore, total energy is 33
First line contains the number of cases (n), where 1 ≤ n ≤ 10. Every case contains
two lines. First line is s (1 ≤ n ≤ 6000), means there are s stone groups. Second
line is s required energy (e), where 1 ≤ e ≤ 10000. You need to output the answer
of the minimum energy needed by Mary for each case.

Example:
Input:
2
5
1 2 3 4 5
3
4 6 7


Output:
33
27

*/#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <numeric>
#include <list>
using namespace std	;

int main() {

	int cases = 0; // 1-10
	int s = 0;
	vector <int> arr;
	
	// readInput
	cin >> cases;
	for (int i = 0; i < cases; i++) {
		cin >> s;
		arr.resize(s);
		for (int j = 0; j < s; j++) {
			cin >> arr.at(j);
		};
		
		vector<int> energyUsed;

		int pos = 0;
		while (arr.size() != (size_t) 1)
		{
			sort(arr.begin(), arr.end());
			arr.at(pos) += arr.at(pos + 1);
			energyUsed.push_back(arr.at(pos));

			vector<int>::iterator ait = arr.begin();
			ait = arr.begin() + pos + 1;
			arr.erase(ait);
	
		}

		int sumOfEnergy = 0;
		sumOfEnergy = std::accumulate(energyUsed.begin(), energyUsed.end(), 0);
		
		cout << sumOfEnergy << endl;
	}
	return 0;
}
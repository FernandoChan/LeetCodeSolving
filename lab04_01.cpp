/*There are many stars in the space. The star has different brightness represented by
a value (b) from 1 to N. Larger b value means a brighter star. We would like to
know the ith brightness star.
First line of input contains the number of cases (n), where 1 ≤ n ≤ 10. For each
case, the first line contains two numbers S and Q, where 1 ≤ S, Q ≤ 20000. S and
Q represent the number of stars and the number enquiries respectively. In next line,
S numbers of integers represent the brightness of each star, i.e. the ith value
represents the brightness of the ith star. In each next Q lines show the position of
the star. By assume there is no tie situation, you need to output the ranks of the
given stars for each enquiry.

Example:
Input:
2
5 3
5 2 6 8 1
1
3
2
11 1
1 8 7 6 5 100 2 9 12 11 99
11

Output:
3
2
4
2
*/

#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <numeric>
#include <list>
using namespace std	;

int  rankInArr(vector<int> arr,int pos) {
	int rank =1;
	for (size_t i = 0; i < arr.size(); i++) {
		if ( arr.at(i) > arr.at(pos) ) rank++;
	}
	return rank ;
}

int main() {

	int cases = 0; // 1-10
	int s = 0;
	int q = 0;
	vector <int> sarr;
	
	// readInput
	cin >> cases;
	for (int i = 0; i < cases; i++) {
		cin >> s >> q;
		sarr.resize(s);
		
		for (int j = 0; j < s; j++) {
			cin >> sarr.at(j);
		};

		for (int k = 0; k < q; k++) {
			int posRequired;
			cin >> posRequired;
			int rankOfPo = rankInArr(sarr, posRequired - 1);
			cout << rankOfPo<< endl;
		}
	}
	return 0;
}
/*An ascending sorted sequence of distinct values is one in which some form of a
less-than operator is used to order the elements from smallest to largest. For
example, the sorted sequence A, B, C, D implies that A < B, B < C and C < D. in
this problem, we will give you a set of relations of the form A < B and ask you to
determine whether a sorted order has been specified or not.
Input consists of multiple problem instances. Each instance starts with a line
containing two positive integers n and m. the first value indicated the number of
objects to sort, where 2 ≤ n ≤ 26. The objects to be sorted will be the first n
characters of the uppercase alphabet. The second value m indicates the number of
relations of the form A < B which will be given in this problem instance. Next
will be m lines, each containing one such relation consisting of three characters:
an uppercase letter, the character "<" and a second uppercase letter. No letter will
be outside the range of the first n letters of the alphabet. Values of n = m = 0
indicate end of input.
For each problem instance, output consists of one line. This line should be one of
the following three:
	Sorted sequence determined after xxx relations: yyy...y.
Sorted sequence cannot be determined.
Inconsistency found after xxx relations.
where xxx is the number of relations processed at the time either a sorted
sequence is determined or an inconsistency is found, whichever comes first, and
yyy...y is the sorted, ascending sequence.
Example:
Input:
4 6
A<B
A<C
B<C
C<D
B<D
A<B
3 2
A<B
B<A
26 1
A<Z
0 0

Output:
Sorted sequence determined after 4 relations: ABCD.
Inconsistency found after 2 relations.
Sorted sequence cannot be determined.


*/#include <iostream>
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
	int n = 0 ,m = 0;  // N : the number of letters to be sort ; 
	vector <int> sarr;
	
	// readInput
	while (cin >> n >> m ){
		if (n == 0 && m == 0) break;
		
		for (int i = 0; i < m; i++) {

			cin.get('<');
		}













		int whichCase;
		switch (whichCase) {
			case 0:
				cout << "Sorted sequence determined after" << "relations: " << ".\n";
				break;
			case 1:
				cout << "Sorted sequence cannot be determined.\n";
				break;

			case 2:
				cout << "Inconsistency found after " <<  " relations.\n";
				break;
			default: 
				break;
		}
		
	}
	return 0;
}
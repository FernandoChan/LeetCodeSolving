/*Given a function:
f(x, y) = 6*x^7+9*x^6+5*x^3+2*x^2-y*x

By given a particular y value, you should output the minimum value of f(x, y)
when x is between 0 and 200.

The first line of the input contains the number of cases (n), where 1 ≤ n ≤ 100.
Each next n lines has one real numbers y, where 0 < y < 100000000). You should
output the x with 4 decimal points which cause f(x, y) is minimum in the range of
1 ≤ x ≤ 200.
Example:
Input:
3
100
200
17198


Output:
-78.2106
-183.4391
-37078.9130

*/

/*
由于x 的特殊范围限定给出了一个特殊情况。
*/
#include <iostream>
#include <cstring>
#include <algorithm>
#include <numeric>
#include <iomanip>
using namespace std;

double func(double x, double y) {
	return ( 6*pow(x,7) + 9*pow(x,6) + 5*pow(x,3) + 2*pow(x,2) - y*x );
}

double func_prime(double x, double y) {   // in the range of (0, 200) ,F` is increasing
	return  42 * pow(x, 6) + 54 * pow(x, 5) + 15 * pow(x, 2) + 4 * pow(x, 1) - y;
}

/* 一阶导数的左半边是关于x 的一阶单调递增函数，无论y的值是多少，一阶导是单调递增的，且f`(0,Ymin) < 0 , f`(200, Ymax) > 0 ，说明一阶导必然单调递增且只有一次穿过X轴 ，在该点必然为最小值    */
/*使用二分法求该点*/

//partition (0 ,200 ,y )

double partition1(double xmin, double xmax, double y, int cnter) {
	// 判断是否达到精度

	if ( cnter--  < 0 ) return (xmin + xmax) / 2;
	if (func_prime((xmin + xmax) / 2, y) < 0)  return  partition1((xmin + xmax) / 2, xmax, y ,cnter );
	else if (func_prime((xmin + xmax) / 2, y) > 0)  return partition1(xmin ,(xmin + xmax) / 2, y , cnter);
	else return  (xmin + xmax) / 2;  // the medium is the value
}

int main() {

	int cases = 0; // 1-10
	double x = 0.0;
	double y = 0.0;
	double ans = 0.0;

	cin >> cases;
	for (int i = 0; i < cases; i++) {
		cin >> y;

		ans = partition1(0.0, 200.0, y , 300);

		cout <<fixed<<setprecision(4)<<func(ans,y)<<endl;
	}

	return 0;
}



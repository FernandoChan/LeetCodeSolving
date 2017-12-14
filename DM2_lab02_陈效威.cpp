#include <iostream>
#include <vector>

class Solution {
private:
	static int nodes;
	std::vector<std::vector<int>> matrix;

	//访问过的edge就改成0 
public:


	void print () ;

	void setToZero(int column,int row);


}
bool isSymmetry(vector<vector<int>>* matrix,int nodes){
	for (int i = 0; i < nodes ; ++i) { //ROW	
		for (int j = 0; j < nodes; ++j)//column
			if (matrix [i][j] != matrix[j][i] ) 
				return false; 
	}
	return true; 
}
//
int  isPathOrCircuit (vector<vector<int>>* matrix,int nodes){
	     isSymmetry( matrix, nodes);


	bool ioflag = true;
	int oddCntr=0;
	for (int i = 0; i < nodes ; ++i) { //ROW	
		int rowSum = 0, colSum = 0; 
		for (int j = 0; j < nodes; ++j) {
			 rowSum+=matrix[i][j];//column
			 colSum+=matrix[j][i];//column
		}
		if ( rowSum!=colSum) {    // #in #out 
			ioflag = !ioflag;
	 		oddCntr ++ ; 
	 	}
	} 

	if (oddCntr == 2 )	return 1;  //Path  
	else if (oddCntr == 0 )  return 2; // circuit  
	else return 0; 
}

std::vector<int> nodeStack;
int visit(vector<vector<int>>* matrix, int nodes )
{

	if  (!) visit([i][j])
}


// DM2_Lab02-2_undirected Graph

int visit (std::vector<std::vector<int>> paths ) {

 
	vist( ,)
	stack.push () 
}


int  () {

	return ; 
}
int main () { 
	
	int nodes ;
	cin >> nodes; 
	std::vector<int> matrix [nodes] [nodes] ;

	if (isPathOrCircuit(matrix,nodes)==2) visit(matrix,nodes);
	return 0;
}





#include<iostream>
#include<vector>
using namespace std;

const int M = 100;

bool flag=false;
int position;
vector<int> mt;
struct stack
{
	int top; 
	int node[M];
}s;
int e[M][M], n;

void dfs(int x)
{
	int i;
	s.node[++s.top] = x;
	for (i = 0; i<n; i++)
	{
		if (e[i][x]>0)
		{
			e[i][x] = e[x][i] = 0; 
			dfs(i);
			break;
		}
	}
}
void fleury(int x)
{
	int i, flag;
	s.top = 0; s.node[s.top] = x;
	while (s.top >= 0)
	{
		flag = 0;
		for (i = 0; i<n; i++)
		{
			if (e[s.node[s.top]][i]>0)
			{
				flag = 1;
				break;
			}
		}
		if (!flag) {
			mt.push_back(s.node[s.top--] + 1);
		}
		else dfs(s.node[s.top--]);
	}
	for (int i = 0; i < mt.size()-1; ++i) {
		cout << "source: " << mt[i] << " destination " << mt[i+1] << endl;
	}
	puts("");
}



int main() {

	int degree=0,num=0,start=0;
	cout << "Enter the number of nodes in the graph: " << endl;
	cin >> n;

	cout << "Enter the adjacency matrix: " << endl;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			int flag = 0;
			cin >> flag;
			if (flag == 1)
				e[i][j] = 1;
		}
	}
	for (int i = 0; i < n; ++i) {
		degree = 0;
		for (int j = 0; j < n; ++j)
			degree += e[i][j];

		if (degree & 1)
		{
			start = i;
			num++;
		}
	}
	if (num == 0) {
		cout << "There is an Euler circuit of:" << endl;
		fleury(start); }
	else if (num <= 2) {
		cout << "There is an Euler circuit of:" << endl;
		fleury(start);
	}
	else printf("No Euler path\n");
}


//Assume the input is in the following  

// 1-0-2

// 3-4

void counter(vector<vector<int>>& matrix,int nodes ) {
	std::vector<std::vector<int> > v;
	v.resize (nodes);
	for (int i = 0; i < nodes; ++i)
	{
		for( int  j = nodes-1 ; j > i  , j-- )
			if (matrix[i] [j] == 1 )	
				v[i].push_back(j);
	}
	for (int i = 0 ; i  <nodes ; ++i){
		if ( !v.at(i).empty() ) {
			cout<< V.at[i];
			for (int j = 0; j < v.at(i).size(); ++i)
		{
			cout<<"-"<< v.at(i).at(j);
		}}
}

int main () { 
	vector<vector<int>> matrix ; 
	cout << "There are " <<cntr << "connected components in above undirected graph";
	counter(matrix,nodes)

return 0 ; }
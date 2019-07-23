/*
You are given a cubic dice with 6 faces. All the individual faces have a number printed on them. The numbers are in the range of 1 to 6, like any ordinary dice. You will be provided with a face of this cube, your task is to guess the number on the opposite face of the cube.

Input:
The first line of the input contains a single integer T, denoting the number of testcases. Then T test case follows, a single line of the input containing a positive integer N.

Output:
For each testcase, print the number that is on the opposite side of the given face.

Constraints:
1 <= T <= 100
1 <= N <= 6

Example:
Input:
2
6
2

Output:
1
5

Explanation:
Testcase 1: For dice facing number 6 opposite face will have the number 1.

** For More Input/Output Examples Use 'Expected Output' option **
*/

#include <iostream>
using namespace std;

int main() {
	//code
	int a,b[100],i,c[100];
	
	cin>>a;
	for(i=1;i<=a;i++){
	    cin>>b[i];
	}
	
	
	for(i=1;i<=a;i++){
	    if(b[i]==1){
	        c[i]=6;
	    }
	    else if(b[i]==2){
	        c[i]=5;
	    }
	    else if(b[i]==3){
	        c[i]=4;
	    }
	    else if(b[i]==4){
	        c[i]=3;
	    }
	    else if(b[i]==5){
	        c[i]=2;
	    }
	    else if(b[i]==6){
	        c[i]=1;
	    }
	}
	
	for(i=1;i<=a;i++){
	    cout<<c[i];
	    cout<<"\n";
	}
	
	return 0;
}

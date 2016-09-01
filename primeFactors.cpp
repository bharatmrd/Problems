#include <iostream>
#include <cmath>
using namespace std;

void printPrimeFactor ( int x ) {
	while ( x % 2 == 0 ) {
		cout<<2<<" ";
		x /= 2;
	}
	
	for ( int i = 3; i <= sqrt(x); i += 2 ) {
		while ( x % i == 0 ) {
			cout<<i<<" ";
			x /= i;
		}
	}
	
	if ( x > 2 )
		cout<<x;
}

int main() {
	int n;
	cout<<"Enter a number to print all its prime factors:"<<endl;
	cin>>n;
	while ( n <= 0 ) {
		cout<<"please enter a positive integer:"<<endl;
		cin>>n;
	}
	printPrimeFactor( n );
	return 0;
}
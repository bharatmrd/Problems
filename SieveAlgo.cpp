#include<iostream>
#include<cstring>
using namespace std;

void Sieve ( int x ) {
	bool prime[x + 1];
	memset(prime, true, sizeof(prime));

	for ( int i = 2; i * i <= x; i++) {
		if ( prime[i] ) {
			for ( int j = 2 * i; j <= x; j += i )
				prime[j] = false;
		}
	}
	for ( int i = 2; i <= x; i++ )
		if ( prime[i] )
			cout<<i<<" ";
}

int main() {
	int n;
	cout<<"Enter a number to print all prime numbers less than this:"<<endl;
	cin>>n;
	Sieve(n);
	return 0;
}
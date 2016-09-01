#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;

int b2d ( string s ) {
	int length = s.length();
	int ans = 0;
	for ( int i = length - 1; i >= 0; i-- ) {
		ans += pow(2, i) * ((int)s[length - 1 - i] - '0');
	}
	return ans;
}

string d2b ( int x ){
	string ans = "";
	while ( x ) {
		int temp = x % 2;
		x /= 2;
		if ( temp == 0 )
			ans += "0";
		else
			ans += "1";
	}
	reverse(ans.begin(), ans.end());
	return ans;
}

int main() {
	int s, number;
	string bin;
	cout<<"Choose conversion type( 0 for binary to decimal and 1 for decimal to binary):"<<endl;
	cin>>s;
	
	switch(s) {
		case 0:
			cout<<"enter binary string:"<<endl;
			cin>>bin;
			cout<<b2d( bin );
			break;
		case 1:
			cout<<"enter a decimal number:"<<endl;
			cin>>number;
			cout<<d2b( number );
			break;
		default:
			cout<<"Invalid conversion!"<<endl;
	}
	
	return 0;
}

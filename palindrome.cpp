#include <iostream>
#include <cstring>

using namespace std;

bool isPalindrome ( char* s ) {
	int upper = strlen(s) - 1;
	int lower = 0;
	while ( upper > lower ) {
		if ( s[lower++] != s[upper--] )
			return false;
	}
	return true;
}

int main() {
	char a[10000005];
	cin.getline(a, 10000005);
	if ( isPalindrome(a) )
		cout<<"String is palindrome"<<endl;
	else
		cout<<"String is not palindrome"<<endl;
}
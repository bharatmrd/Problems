#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

void pigLatin (char *s) {
	int length = strlen(s);
	char temp = *(s);
	for ( int i = 0; i < length - 1; i++ ) {
		*(s + i)  = *(s + i + 1);
	}
	*(s + length - 1) = temp;
	*(s + length) = 'a';
	*(s + length + 1) = 'y';
}

int main() {
	char c[100005];
	cin.getline(c,100005);
	pigLatin(c);
	cout<<c<<endl;
}
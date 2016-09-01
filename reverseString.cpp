#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

void reverse (char *s) {
	stack<char> temp;
	int length = strlen(s);
	for ( int i = 0; i < length; i++ ) {
		temp.push(*(s + i));
	}
	for ( int i = 0; i < length; i++ ) {
		*(s + i) = temp.top();
		temp.pop();
	}
}

int main() {
	char c[100005];
	cin.getline(c,100005);
	reverse(c);
	cout<<c<<endl;
}
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string s;
	cout<<"Enter a string:"<<endl;
	getline(cin, s);
	int A = 0, E = 0, I = 0, O = 0, U = 0;
	for ( int i = 0; i < s.length(); i++ ) {
		char temp = tolower(s[i]);
		switch(temp) {
			case 'a':
				A++;
				break;
			case 'e':
				E++;
				break;
			case 'i':
				I++;
				break;
			case 'o':
				O++;
				break;
			case 'u':
				U++;
				break;
		}
	}
	cout<<"appearance of 'a':"<<A<<endl<<"appearance of 'e':"<<E<<endl<<"appearance of 'i':"<<I<<endl<<"appearance of 'o':"<<O<<endl<<"appearance of 'u':"<<U<<endl;
}
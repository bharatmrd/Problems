#include <iostream>
using namespace std;

int main() {
	int n;
	cout<<"How many fibonacci number do you want?"<<endl;
	cin>>n;
	while ( n <= 0 ) {
		cout<<"please enter a positive integer:"<<endl;
		cin>>n;
	}
	int pre1 = 0, pre2 = 1;
	if ( n == 1 )
		cout<<pre1<<endl;
	else {
		cout<<pre1<<" "<<pre2<<" ";
		int curr;
		for ( int i = 3; i <= n; i++ ) {
			curr = pre1 + pre2;
			cout<<curr<<" ";
			pre1 = pre2;
			pre2 = curr;
		}
	}
}
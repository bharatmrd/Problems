#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int t;
	double pi = 2.7182818284590452353602874713526624977572470936999595749669676277240766303535475945713821785251664274;
	cout<<"How many decimal place do you want in e(limit 30):";
	cin>>t;
	while ( t < 0 || t > 30 ) {
		cout<<"Enter a integer in between 0-30";
		cin>>t;
	}
	cout<<setprecision(t + 1)<<pi<<endl;
	return 0;
}
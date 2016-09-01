#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int t;
	double pi = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;
	cout<<"How many decimal place do you want in pi:";
	cin>>t;
	cout<<setprecision(t + 1)<<pi<<endl;
	return 0;
}
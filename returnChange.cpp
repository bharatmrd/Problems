#include <iostream>
using namespace std;

int main() {
	double Cost, money;
	cout<<"Enter total amount:"<<endl;
	cin>>Cost;
	cout<<"Enter given money:"<<endl;
	cin>>money;
	
	if ( money > Cost ) {
		int change = (int)((money*100) - (Cost*100));
		cout<<change<<endl;
		int quarters = 0, dimes = 0, nickels = 0, pennies = 0;
		if ( change >= 25 ) {
			quarters = change / 25;
			change -= (quarters * 25);
		}
		if ( change >= 10 ) {
			dimes = (change / 10);
			change -= (dimes * 10);
		}
		if ( change >= 5 ) {
			nickels = change / 5;
			change -= (nickels * 5);
		}
		if ( change >= 1 ) {
			pennies = change;
		}
		cout<<"quarters: "<<quarters<<endl<<"dimes: "<<dimes<<endl<<"nickels: "<<nickels<<endl<<"pennies: "<<pennies<<endl;
	} else {
		cout<<"You have to give extra money!"<<endl;
	}
}
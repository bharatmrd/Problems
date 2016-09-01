#include <iostream>
using namespace std;

int main() {
	int height, width;
	double tileCost;
	cout<<"Enter heigth and width separated by space:"<<endl;
	cin>>height>>width;
	cout<<"Enter the cost of a tile"<<endl;
	cin>>tileCost;
	double ans = (double)(height * width) * tileCost;
	cout<<"Cost for tiling a "<<height<<" x "<<width<<" floor is : "<<ans<<endl;
	return 0;
}

#include <iostream>
using namespace std;
 
int cakes, ovenTime, maxCakes, secondOven;
 
int oneOven() {
	int caked = 0, time = 0;
	while(caked < cakes) {
		time++;
		if(time % ovenTime == 0) {
			caked+=maxCakes;
		}
	}
	return time;
}
 
int twoOvens() {
	int time = 0, caked = 0;
	while(caked < cakes) {
		static bool two = false;
		time++;
		static int secondTime = -1;
		if(time == secondOven) {
			two = true;
		}
		if(time % ovenTime == 0) {
			caked += maxCakes;
		}
		if(two) {
			secondTime++;
			if(secondTime % ovenTime == 0 && secondTime != 0) {
				caked+=maxCakes;
			}
		}
	}
	return time;
}
 
int main() {
	cin>>cakes>>ovenTime>>maxCakes>>secondOven;
	int oneOvenTime = oneOven();
	int twoOvensTime = twoOvens();
	if(oneOvenTime > twoOvensTime) {
		cout<<"YES";
	} 
	else {
		cout<<"NO";
	}
	return 0;
}
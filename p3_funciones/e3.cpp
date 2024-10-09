#include<iostream>
using namespace std;

#import <cmath>

namespace e3{
	float f(float x); // Prototipo
	
	int main(int argc, char *argv[]) {	
		cout << f(0) <<"==-30"<<endl;
		cout << f(1) <<"==-30"<<endl;
		return 0;
	}
	
	float f(float x){
		return pow(x,4)+3*pow(x,3)-6*pow(x,2)+2*x-30;
	}
}

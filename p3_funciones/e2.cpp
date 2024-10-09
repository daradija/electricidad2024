#include <iostream>
using namespace std;
#include <cmath>

// https://www.w3schools.com/cpp/cpp_math.asp

namespace e2{
	int main(int argc, char *argv[]){
		float x,y;
		cout<<"Numero x:";
		cin >> x;
		cout<<"Numero y:";
		cin >> y;
		
		cout<<"x^y:"<<pow(x,y)<<endl;
		cout<<"y^x:"<<pow(y,x)<<endl;
		cout<<"max(x,y):"<<max(x,y)<<endl;
		cout<<"hypot(x,y):"<<hypot(x,y)<<endl;
		
		return 0;
	}
}


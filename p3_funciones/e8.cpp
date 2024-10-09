#include <iostream>
using namespace std;
#include <cmath>

#define VAL 520.75

namespace e8{
	float f(float x);
	float g(float y);
	float h(float z);
	float compuesta(float x);
	
	int main(int argc, char *argv[]){
		cout << "Le solicito un valor:";
		float valor;
		cin >> valor;
		float vf=f(valor);
		float vg=g(valor);
		float vh=h(valor);
		cout <<"f(x):"<<vf<<endl;
		cout <<"g(x):"<<vg<<endl;
		cout <<"h(x):"<<vh<<endl;
		float c=compuesta(valor);
		cout <<"compuesta(x):"<<c<<endl;
		
		return 0;
	}
		
		
	float f(float x){
		return pow(x,4)+8/x+300;
	}

	float g(float y){
		return f(y)/(19-5*y)+pow(y,3);
	}

	float h(float z){
		return VAL+sqrt(g(f(z)));
	}
		
	float compuesta(float u){
		return pow(f(u),int(round(f(2*u))) % 3)+5*g(pow(u,7))/h(9*u);
	}
}

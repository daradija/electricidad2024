#include<iostream>
using namespace std;

float area_triangulo2(float base, float altura); // Prototipo

int main2 (int argc, char *argv[]) {	
	cout << area_triangulo2(3.5, 4.7);
	return 0;
}


// Definición de función
float area_triangulo2(float base,float altura){
	float area;
	area=base*altura/2;
	return area;
}

#include <iostream>
using namespace std;

//namespace e1{
	int mi_funcion(int); // Prototipo
	int main(int argc, char *argv[]) {
		int y1;
		y1=mi_funcion(800);
		cout << y1;
		return 0;
	}
	// Definición de la función
	int mi_funcion(int x){ 
		int y = 3*x;
		return y;
	}
//}

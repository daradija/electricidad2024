#include <iostream>
using namespace std;

namespace t2{
	float area_triangulo(float base, float altura); // Prototipo

	int main(int argc, char *argv[]) {
		float altura_t1, base_t1, area_t1, area_t2;
		altura_t1 = 4.5; base_t1 = 5.5;
		area_t1 = area_triangulo(base_t1, altura_t1); // Una llamada a la función
		area_t2 = area_triangulo(base_t1/3, 7.8); // Otra llamada, distintos valores
		cout << "El área del triángulo 1 es:" << area_t1 << endl;
		cout << "El área del triángulo 2 es:" << area_t1 << endl;
		return 0;
	}

	// Definición de la función
	float area_triangulo(float base, float altura){ 
		float area;
		area = base*altura/2;
		return area;
	}
}		

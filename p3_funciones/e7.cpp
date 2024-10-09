#include <iostream>
#define PI 3.14159
using namespace std;

namespace e7{
	// Prototipos de las funciones
	float area_triangulo(float base, float altura);
	float area_circulo(float radio);
	float area_prisma(float area_base, float altura);

	// Definiciones de las funciones
	// Definición de la función para calcular el área de un triángulo
	float area_triangulo(float base, float altura) {
		return (base * altura) / 2;
	}

	// Definición de la función para calcular el área de un círculo
	float area_circulo(float radio) {
		return PI * radio * radio;
	}

	// Definición de la función para calcular el volumen de un prisma o cilindro
	float area_prisma(float area_base, float altura) {
		return area_base * altura;
	}

	// Función principal
	int main() {
		float base, altura_triangulo, radio, altura_prisma, altura_cilindro;
		
		// Solicitar valores al usuario
		cout << "Introduce la base del triángulo (en unidades): ";
		cin >> base;
		cout << "Introduce la altura del triángulo (en unidades): ";
		cin >> altura_triangulo;
		
		cout << "Introduce el radio del círculo (en unidades): ";
		cin >> radio;
		
		cout << "Introduce la altura del prisma de base triangular (en unidades): ";
		cin >> altura_prisma;
		
		cout << "Introduce la altura del cilindro (en unidades): ";
		cin >> altura_cilindro;
		
		// Calcular el área del triángulo
		float areaTriangulo = area_triangulo(base, altura_triangulo);
		
		// Calcular el área del círculo
		float areaCirculo = area_circulo(radio);
		
		// Calcular el volumen del prisma de base triangular
		float volumenPrisma = area_prisma(areaTriangulo, altura_prisma);
		
		// Calcular el volumen del cilindro
		float volumenCilindro = area_prisma(areaCirculo, altura_cilindro);
		
		// Mostrar los resultados
		cout << "\nResultados:\n";
		cout << "Área del triángulo: " << areaTriangulo << " unidades cuadradas" << endl;
		cout << "Área del círculo: " << areaCirculo << " unidades cuadradas" << endl;
		cout << "Volumen del prisma de base triangular: " << volumenPrisma << " unidades cúbicas" << endl;
		cout << "Volumen del cilindro: " << volumenCilindro << " unidades cúbicas" << endl;
		
		return 0;
	}
}

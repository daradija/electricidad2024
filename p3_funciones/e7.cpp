#include <iostream>
#define PI 3.14159
using namespace std;

namespace e7{
	// Prototipos de las funciones
	float area_triangulo(float base, float altura);
	float area_circulo(float radio);
	float area_prisma(float area_base, float altura);

	// Definiciones de las funciones
	// Definici�n de la funci�n para calcular el �rea de un tri�ngulo
	float area_triangulo(float base, float altura) {
		return (base * altura) / 2;
	}

	// Definici�n de la funci�n para calcular el �rea de un c�rculo
	float area_circulo(float radio) {
		return PI * radio * radio;
	}

	// Definici�n de la funci�n para calcular el volumen de un prisma o cilindro
	float area_prisma(float area_base, float altura) {
		return area_base * altura;
	}

	// Funci�n principal
	int main() {
		float base, altura_triangulo, radio, altura_prisma, altura_cilindro;
		
		// Solicitar valores al usuario
		cout << "Introduce la base del tri�ngulo (en unidades): ";
		cin >> base;
		cout << "Introduce la altura del tri�ngulo (en unidades): ";
		cin >> altura_triangulo;
		
		cout << "Introduce el radio del c�rculo (en unidades): ";
		cin >> radio;
		
		cout << "Introduce la altura del prisma de base triangular (en unidades): ";
		cin >> altura_prisma;
		
		cout << "Introduce la altura del cilindro (en unidades): ";
		cin >> altura_cilindro;
		
		// Calcular el �rea del tri�ngulo
		float areaTriangulo = area_triangulo(base, altura_triangulo);
		
		// Calcular el �rea del c�rculo
		float areaCirculo = area_circulo(radio);
		
		// Calcular el volumen del prisma de base triangular
		float volumenPrisma = area_prisma(areaTriangulo, altura_prisma);
		
		// Calcular el volumen del cilindro
		float volumenCilindro = area_prisma(areaCirculo, altura_cilindro);
		
		// Mostrar los resultados
		cout << "\nResultados:\n";
		cout << "�rea del tri�ngulo: " << areaTriangulo << " unidades cuadradas" << endl;
		cout << "�rea del c�rculo: " << areaCirculo << " unidades cuadradas" << endl;
		cout << "Volumen del prisma de base triangular: " << volumenPrisma << " unidades c�bicas" << endl;
		cout << "Volumen del cilindro: " << volumenCilindro << " unidades c�bicas" << endl;
		
		return 0;
	}
}

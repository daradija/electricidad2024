#include <iostream>
using namespace std;

namespace e4{
	// Prototipo de la funci�n
	float calificacion_final(float nota_teoria, float nota_practica);

	// Funci�n principal
	int main() {
		float nota_teoria, nota_practica, nota_final;
		
		// Solicitar las notas al usuario
		cout << "Introduce la nota de teor�a (sobre 10): ";
		cin >> nota_teoria;
		cout << "Introduce la nota de pr�cticas (sobre 10): ";
		cin >> nota_practica;
		
		// Calcular la nota final
		nota_final = calificacion_final(nota_teoria, nota_practica);
		
		// Mostrar el resultado
		cout << "La nota final es: " << nota_final << endl;
		
		return 0;
	}

	// Definici�n de la funci�n
	float calificacion_final(float nota_teoria, float nota_practica) {
		return (0.4 * nota_teoria) + (0.6 * nota_practica);
	}
}

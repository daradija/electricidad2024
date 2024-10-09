#include <iostream>
using namespace std;

namespace e5{
	float resistencias_serie(float R1, float R2);
	float resistencias_paralelo(float R1, float R2);
	float calcula_intensidad(float resistencia, float voltaje);
		

	// Función principal
	int main() {
		float R1, R2, voltaje;
		
		// Solicitar valores al usuario
		cout << "Introduce el valor de la resistencia R1 (en ohmios): ";
		cin >> R1;
		cout << "Introduce el valor de la resistencia R2 (en ohmios): ";
		cin >> R2;
		cout << "Introduce el valor del voltaje (en voltios): ";
		cin >> voltaje;
		
		// Calcular resistencia equivalente en serie y paralelo
		float resistencia_serie = resistencias_serie(R1, R2);
		float resistencia_paralelo = resistencias_paralelo(R1, R2);
		
		// Calcular la intensidad para cada circuito
		float intensidad_serie = calcula_intensidad(resistencia_serie, voltaje);
		float intensidad_paralelo = calcula_intensidad(resistencia_paralelo, voltaje);
		
		// Mostrar los resultados
		cout << "\nResultados para los circuitos:\n";
		cout << "Resistencia equivalente en serie: " << resistencia_serie << " ohmios" << endl;
		cout << "Intensidad en el circuito en serie: " << intensidad_serie << " amperios" << endl;
		cout << "\nResistencia equivalente en paralelo: " << resistencia_paralelo << " ohmios" << endl;
		cout << "Intensidad en el circuito en paralelo: " << intensidad_paralelo << " amperios" << endl;
		
		return 0;
	}

	// Función para calcular la resistencia equivalente en serie
	float resistencias_serie(float R1, float R2) {
		return R1 + R2;
	}

	// Función para calcular la resistencia equivalente en paralelo
	float resistencias_paralelo(float R1, float R2) {
		return 1 / ((1 / R1) + (1 / R2));
	}

	// Función para calcular la intensidad usando la ley de Ohm
	float calcula_intensidad(float resistencia, float voltaje) {
		return voltaje / resistencia;
	}
}

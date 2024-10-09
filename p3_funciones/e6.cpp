#include <iostream>
using namespace std;

namespace e6{
	// Prototipos de las funciones
	float resistencias_serie(float R1, float R2);
	float resistencias_paralelo(float R1, float R2);
	float calcula_intensidad(float resistencia, float voltaje);

	// Función principal
	int main() {
		float R1, R2, R3, R4, voltaje;
		
		// Solicitar valores al usuario
		cout << "Introduce el valor de la resistencia R1 (en ohmios): ";
		cin >> R1;
		cout << "Introduce el valor de la resistencia R2 (en ohmios): ";
		cin >> R2;
		cout << "Introduce el valor de la resistencia R3 (en ohmios): ";
		cin >> R3;
		cout << "Introduce el valor de la resistencia R4 (en ohmios): ";
		cin >> R4;
		cout << "Introduce el valor del voltaje (en voltios): ";
		cin >> voltaje;
		
		// Calcular la resistencia equivalente del circuito
		// R2 y R3 están en serie
		float R23_serie = resistencias_serie(R2, R3);
		
		// R1 y R23_serie están en paralelo
		float R123_paralelo = resistencias_paralelo(R1, R23_serie);
		
		// R123_paralelo y R4 están en serie
		float resistencia_equivalente = resistencias_serie(R123_paralelo, R4);
		
		// Calcular la intensidad total del circuito
		float intensidad = calcula_intensidad(resistencia_equivalente, voltaje);
		
		// Mostrar los resultados
		cout << "\nResultados para el circuito:\n";
		cout << "Resistencia equivalente del circuito: " << resistencia_equivalente << " ohmios" << endl;
		cout << "Intensidad total en el circuito: " << intensidad << " amperios" << endl;
		
		return 0;
	}

	// Definición de la función para calcular la resistencia equivalente en serie
	float resistencias_serie(float R1, float R2) {
		return R1 + R2;
	}

	// Definición de la función para calcular la resistencia equivalente en paralelo
	float resistencias_paralelo(float R1, float R2) {
		return 1 / ((1 / R1) + (1 / R2));
	}

	// Definición de la función para calcular la intensidad usando la ley de Ohm
	float calcula_intensidad(float resistencia, float voltaje) {
		return voltaje / resistencia;
	}
}

Leer antes la práctica.

Usar / Crear

Utilidad: 
* Factor común.
* La programación es el arte de mover código poco a poco.


![alt text](image.png)

![alt text](image-1.png)

![alt text](image-2.png)

```cpp
#include<iostream>
using namespace std;

float area_triangulo(float base, float altura); // Prototipo

int main (int argc, char *argv[]) {	
	return 0;
}


// Definición de función
float areas_triangulo(float base,float altura){
	float area;
	area=base*altura/2;
	return area;
}
```

![alt text](image-3.png)

* Hay que indicar ¿qué se devuelve?, float, se ponde delante.
  * Tanto el la función.
  * Tanto en los parámetros.  
* Lo parámetros se separan por comas.
* El *Prototipo* es como ver la caja desde fuera.
* La *Definición* es el interior.
  * Las llaves {} representan una caja.
  * Recibe el nombre de cuerpo.
* Recuerda: Es el mismo orden en el que se pinta la caja, salvo que el tipo va primero, y la caja son llaves.
* ¿Qué fallo hay en este código?

# ¿Por qué existe el prototipo?
* Es un índice.
* Una forma de solucionar los problemas de huevo-gallina.
  * Porque las funciones pueden ser construidas por otras funciones.
  * Escribir el código sin prototipos es posible. Difícil cuando crece el código. No imposible.
* Es mas claro, leer el main, y luego los detalles.

# ¿Qué había antes de las funciones?

```basic
10 REM Programa en GWBASIC para calcular el área de un triángulo
20 REM Usando GOSUB y GOTO sin funciones modernas

30 REM Solicitar valores al usuario
40 PRINT "Introduce la base del triángulo: "
50 INPUT B
60 PRINT "Introduce la altura del triángulo: "
70 INPUT H

80 REM Calcular el área del triángulo
90 GOSUB 200

100 REM Mostrar el resultado
110 PRINT "El área del triángulo es: "; A
120 END

200 REM Subrutina para calcular el área
210 A = (B * H) / 2
220 RETURN
```
# Llamada
```cpp
area_triangulo(3.5, 4.7);
```

#include <iostream>
using namespace std;
// Funcion para calcular el promedio de calificaciones
float calcularPromedio(float notas[], int tamano) {
float suma = 0;
for (int i = 0; i < tamano; ++i) {
suma += notas[i];
}
return suma / tamano;
}
int main() {
// Declaracion e inicializacion del vector de calificaciones
float calificaciones[] = {7.6, 7.3, 9.4, 10, 5.9};
// Llamada a la funcion para calcular el promedio
float promedio = calcularPromedio(calificaciones, 5);
// Imprimir el resultado
cout << "El promedio de calificaciones es: " << promedio << endl;
return 0;
}
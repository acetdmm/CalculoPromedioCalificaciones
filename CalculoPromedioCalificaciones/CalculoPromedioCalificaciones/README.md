# Cálculo del Promedio de Calificaciones en C++

Este programa en C++ calcula el promedio de un conjunto de calificaciones almacenadas en un arreglo. Es un ejemplo sencillo para trabajar con arreglos, funciones y operaciones matemáticas básicas.

## Propósito del Código

El objetivo del programa es demostrar cómo calcular el promedio de un grupo de calificaciones utilizando:
- Una función específica para realizar cálculos.
- Un arreglo para almacenar los datos (las calificaciones).

## ¿Qué incluye el código?

1. **Función para Calcular el Promedio**
   - La función `calcularPromedio(float notas[], int tamano)` toma como entrada un arreglo de calificaciones y su tamaño.
   - Realiza la suma de todas las calificaciones en el arreglo y las divide entre el tamaño del arreglo para calcular el promedio.
     ```cpp
     float calcularPromedio(float notas[], int tamano) {
         float suma = 0;
         for (int i = 0; i < tamano; ++i) {
             suma += notas[i];
         }
         return suma / tamano;
     }
     ```

2. **Declaración e Inicialización de Calificaciones**
   - Se define un arreglo `calificaciones[]` con valores predefinidos de tipo `float`:
     ```cpp
     float calificaciones[] = {7.6, 7.3, 9.4, 10, 5.9};
     ```

3. **Cálculo del Promedio**
   - El programa llama a la función `calcularPromedio` pasándole el arreglo de calificaciones y su tamaño como argumentos.
   - El resultado del cálculo se almacena en la variable `promedio`.

4. **Salida de Resultados**
   - El programa imprime el promedio calculado en la consola:
     ```plaintext
     El promedio de calificaciones es: 8.04
     ```

## ¿Cómo usar el programa?

1. **Compilación del Código**
   - Usa un compilador de C++ para compilar el código:
     ```bash
     g++ calcularPromedio.cpp -o calcularPromedio
     ```

2. **Ejecución del Programa**
   - Ejecuta el programa desde la terminal:
     ```bash
     ./calcularPromedio
     ```

3. **Salida Esperada**
   - El programa calculará e imprimirá el promedio de las calificaciones predefinidas en el arreglo.

   Ejemplo:
   ```plaintext
   El promedio de calificaciones es: 8.04

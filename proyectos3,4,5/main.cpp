#include "main.h"
#include <iostream>
#include <fmt/core.h>
#include "funciones.h"
#include "matematicas.h"


#define PI 3.14159
#define AREA_CIRCULO(r) (PI * (r) * (r))

int main () {
    std::cout << "Hola Mundo" << std::endl;

    fmt::print("Prueba con fmt\n");

    int n1 = 20;
    int n2 = 5;

    std::cout << "\nSuma: " << suma(n1, n2) << std::endl;
    std::cout << "Resta: " << resta(n1, n2) << std::endl;
    std::cout << "Multiplicacion: " << matematicas::multiplicacion(n1, n2) << std::endl;
    std::cout << "Division: " << matematicas::division(n1, n2) << std::endl;

    fmt::print("\nArea circulo {}", AREA_CIRCULO(5));

    return 0;
}
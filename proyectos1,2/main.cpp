#include "main.h"
#include <iostream>
#include "Estudiante.h"

int g = 20;

int suma(int a, int b) {
    return a + b;
}

int main() {
    std::cout << "Hola Mundo\n" << std::endl;

    std::cout << "La suma es: " << suma(5, 3) << std::endl;

    std::cout << "\nValor de g antes de la función suma: " << g << std::endl;
    std::cout << "La suma es: " << suma(5, g) << std::endl;
    std::cout << "Valor de g después de la función suma: " << g << std::endl;

    Persona JP;
    JP.setNombre("Manolo");
    JP.setEdad(68);
    JP.setGenero("Masculino");


    Estudiante st;
    st.setNombre("Pedro");
    st.setEdad(22);
    st.setGenero("Masculino");
    st.setGrado("Ing. Informatica");

    std::cout << "Detalles del estudiante st:" << std::endl << std::endl;
    st.mostrarDetalles();

    return 0;
}

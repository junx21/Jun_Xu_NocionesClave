## Link del repositorio


https://github.com/junx21/Jun_Xu_NocionesClave.git


# Enunciado de Ejercicios

## Principales características del lenguaje C++

1. **Hola Mundo**: Crea un nuevo proyecto en CLion. Dentro del archivo `main.cpp`, escribe el siguiente código:

    ```cpp
    #include <iostream>

    int main() {
        std::cout << "Hola Mundo" << std::endl;
        return 0;
    }
    ```

    Después de escribir el código, presiona el botón de ejecución (la flecha verde) en CLion para compilar y ejecutar el programa.

2. **Función de suma**: Agrega la siguiente función al archivo `main.cpp`:

    ```cpp
    int suma(int a, int b) {
        return a + b;
    }
    ```

    Dentro de tu función `main()`, puedes llamar a la función suma de la siguiente manera:

    ```cpp
    std::cout << "La suma es: " << suma(5, 3) << std::endl;
    ```

    Este código debería imprimir "La suma es: 8".

3. **Variable global**: Agrega la siguiente línea al comienzo de tu archivo `main.cpp` (antes de la función `main()`):

    ```cpp
    int g = 20;
    ```

    Ahora, puedes utilizar `g` dentro y fuera de las funciones. Por ejemplo, agrega las siguientes líneas a tu función `main()`:

    ```cpp
    std::cout << "Valor de g antes de la función suma: " << g << std::endl;
    std::cout << "La suma es: " << suma(5, g) << std::endl;
    std::cout << "Valor de g después de la función suma: " << g << std::endl;
    ```

## Programación orientada a objetos

1. **Clase Persona**: Crea un nuevo archivo en tu proyecto llamado `Persona.h`. Dentro de este archivo, escribe el siguiente código:

    ```cpp
    #ifndef PERSONA_H
    #define PERSONA_H

    #include <string>

    class Persona {
        std::string nombre;
        int edad;
        std::string genero;

    public:
        void setNombre(const std::string &nombre);
        std::string getNombre();
        void setEdad(int edad);
        int getEdad();
        void setGenero(const std::string &genero);
        std::string getGenero();
    };

    #endif
    ```

    Implementa las funciones en un archivo `Persona.cpp`:

    ```cpp
    #include "Persona.h"

    void Persona::setNombre(const std::string &nombre) {
        this->nombre = nombre;
    }

    std::string Persona::getNombre() {
        return nombre;
    }

    void Persona::setEdad(int edad) {
        this->edad = edad;
    }

    int Persona::getEdad() {
        return edad;
    }

    void Persona::setGenero(const std::string &genero) {
        this->genero = genero;
    }

    std::string Persona::getGenero() {
        return genero;
    }
    ```

2. **Clase Estudiante**: Extiende la clase `Persona` creando un archivo `Estudiante.h`:

    ```cpp
    #ifndef ESTUDIANTE_H
    #define ESTUDIANTE_H

    #include <string>
    #include "Persona.h"

    class Estudiante : public Persona {
        std::string grado;

    public:
        void setGrado(const std::string &grado);
        std::string getGrado();
        void mostrarDetalles();
    };

    #endif
    ```

    Implementa la clase `Estudiante` en un archivo `Estudiante.cpp`:

    ```cpp
    #include "Estudiante.h"
    #include <iostream>

    void Estudiante::setGrado(const std::string &grado) {
        this->grado = grado;
    }

    std::string Estudiante::getGrado() {
        return grado;
    }

    void Estudiante::mostrarDetalles() {
        std::cout << "Nombre: " << getNombre() << std::endl;
        std::cout << "Edad: " << getEdad() << std::endl;
        std::cout << "Genero: " << getGenero() << std::endl;
        std::cout << "Grado: " << grado << std::endl;
    }
    ```

## Entorno de desarrollo y archivo `CMakeLists.txt`

1. **Nuevo proyecto en CLion**: Abre CLion y crea un nuevo proyecto. CLion creará automáticamente un archivo `main.cpp` con un programa "Hola Mundo" y un archivo `CMakeLists.txt`. Ejecuta este programa para verificar que todo funciona correctamente.

2. **Configurar `CMakeLists.txt`**: Si deseas agregar la biblioteca `fmt` a tu proyecto, agrega las siguientes líneas a tu archivo `CMakeLists.txt`:

    ```cmake
    include(FetchContent)
    FetchContent_Declare(
      fmt
      GIT_REPOSITORY https://github.com/fmtlib/fmt.git
      GIT_TAG        7.1.3
    )

    FetchContent_MakeAvailable(fmt)
    ```

3. **Nuevo archivo de código**: Crea un archivo de código adicional (por ejemplo, `nuevo.cpp`) y agrégalo al archivo `CMakeLists.txt` en la línea `add_executable`.

## Organización de un programa C++

1. **Varias funciones**: Divide tu código en funciones creando un archivo `funciones.cpp` y un archivo de encabezado `funciones.h`. Por ejemplo:

    ```cpp
    int suma(int a, int b) {
        return a + b;
    }

    int resta(int a, int b) {
        return a - b;
    }
    ```

2. **Biblioteca estática**: Crea una biblioteca estática en `CMakeLists.txt`:

    ```cmake
    add_library(matematicas STATIC matematicas.cpp)
    ```

3. **Biblioteca dinámica**: Crea una biblioteca dinámica con:

    ```cmake
    add_library(matematicas SHARED matematicas.cpp)
    ```

## Preprocesador

1. **Constante con preprocesador**: Define una constante:

    ```cpp
    #define PI 3.14159
    ```

2. **Macro de preprocesador**: Define una macro para el área de un círculo:

    ```cpp
    #define AREA_CIRCULO(r) (PI * (r) * (r))
    ```

3. **Directiva `#include`**: Incluye la biblioteca de I/O:

    ```cpp
    #include <iostream>
    ```

## Elección de un compilador

1. **Configurar CLion para usar GCC**: Ve a `File > Settings > Build, Execution, Deployment > Toolchains` y configura el compilador para usar GCC.
2. **Configurar CLion para usar MSVC**: Sigue un proceso similar para configurar MSVC (solo disponible en Windows).
3. **Comparar compiladores**: Compila y ejecuta tu proyecto con ambos compiladores y observa si hay diferencias en el rendimiento o errores.

## Enlazador

1. **Biblioteca estándar de C++**: Usa funciones de la biblioteca estándar como `std::cout`, asegurándote de que el enlazador las encuentre.
2. **Biblioteca externa**: Configura el enlace de bibliotecas externas como `fmt` en el archivo `CMakeLists.txt`.
3. **Orden de enlace**: Cambia la orden de enlace en el archivo `CMakeLists.txt` y observa si afecta el comportamiento del programa.

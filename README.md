# Uso y documentación de Makefiles

## Descripción

El presente proyecto tiene como objetivo analizar y comprender el uso de Makefiles para automatizar la compilación de programas en lenguaje C. Se reproduce un ejemplo proporcionado por el profesor y posteriormente se desarrolla un proyecto propio aplicando los mismos conceptos.

---

## 1. Análisis del Makefile del profesor

El Makefile del profesor automatiza el proceso de compilación de un programa en C mediante el uso de variables, reglas y dependencias.

### Funcionamiento

Al ejecutar:

```bash
make
```

Se realizan los siguientes pasos:

1. Se compila el archivo fuente `main.c`, generando un archivo objeto `main.o`.
2. Se enlaza el archivo objeto para crear el ejecutable llamado `hola`.

Esto se puede observar en la salida de la terminal:

```bash
gcc -Wall -Wextra -O2 -c main.c -o main.o
gcc -Wall -Wextra -O2 main.o -o hola
```

### Ejecución

```bash
make run
```

Salida obtenida:

```
Hola desde el Makefile del profesor
```

### Limpieza

```bash
make clean
```

Este comando elimina archivos generados como `.o` y el ejecutable.

---

## 2. Explicación del Makefile

El Makefile está compuesto por los siguientes elementos:

- **Variables**: como `CC`, `CFLAGS` y `TARGET`, que permiten reutilizar valores.
- **Reglas (targets)**: como `all`, `run` y `clean`, que indican qué acciones ejecutar.
- **Dependencias**: archivos necesarios para construir el programa.

Gracias a esto, se automatiza el proceso de compilación.

---

## 3. Importancia del Makefile

El uso de Makefiles permite:

- Automatizar procesos repetitivos
- Reducir errores humanos
- Estandarizar la compilación
- Facilitar el trabajo en equipo

---

## 4. Proyecto propio

Se desarrolló un programa en C que realiza operaciones aritméticas básicas.

### Estructura del proyecto

- `src/main.c`
- `src/operaciones.c`
- `include/operaciones.h`

### Ejecución

```bash
make
make run
```

### Resultado obtenido

```
Proyecto propio con Makefile
Suma: 20 + 8 = 28
Resta: 20 - 8 = 12
Multiplicacion: 20 * 8 = 160
```

---

## 5. Explicación del Makefile propio

El Makefile desarrollado permite:

1. Compilar múltiples archivos fuente.
2. Generar archivos objeto automáticamente.
3. Crear un ejecutable llamado `calculadora`.
4. Ejecutar el programa mediante `make run`.
5. Limpiar archivos generados con `make clean`.

Esto demuestra la correcta aplicación del uso de Makefiles en un proyecto.

---

## 6. Uso del archivo .gitignore

El archivo `.gitignore` se utiliza para evitar subir archivos innecesarios al repositorio, como:

- Ejecutables
- Archivos objeto (`.o`)
- Archivos temporales

Ejemplo:

```
*.o
calculadora
```

---

## Conclusión

El uso de Makefiles es una herramienta fundamental en el desarrollo de software, ya que permite automatizar procesos, mejorar la organización del código y facilitar la ejecución de programas.


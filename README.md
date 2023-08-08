# PROGRAMACION ORIENTADA A OBJETOS Y USO DE BUENAS PRACTICAS
# OBJECT ORIENTED PROGRAMMING WITH GOOD PRACTICES

En este repositorio ire subiendo las tareas y laboratorios considerando almacenarlos en carpetas y en diferentes brunches para que puedan tener la posibilidad de ver la historia del cambio del codigo que se avanse en clases.

Considera que como parte de practica, el repositorio lo tratare de tener en el idioma Ingles para que puedas ir aprendiendo el idioma mientras practicas programacion.


In this repository I will upload all the assignaments and practices for this subject, consider that these files will be stored in different folders and brunches with the purpose to review the history of the code.

You must be aware that most of the content will be written in English to motivate you to learn this langueje while you practice your programing skills.


## CONTENIDO

- PROGRAMACION MODULAR
- HERRAMIENTAS DE DESARROLLO AGIL
- PROGRMACION ORIENTADA A OBJETOS
- GENERICOS Y TEMPLATES - STL
- PATRONES DE DISENIO


## PROGRAMACION MODULAR

In this part you will remember how to split the functionality of problem in little pieces that together will solve the whole problem.
Consider the possible combination of functions in C++

### Ejemplo 1

```c++
//Esta funcion permite poner formato digital la representacion de una hora
// Considera que esta es una funcion realiza el trabajo de formatear un par de datos que representaran una hora
void formatear(int hora, int minuto)
{
    if(hora<10)
        cout<<"0";
    cout<<hora<<":";
    if(minuto<10)
        cout<<"0";
    cout<<minuto<<endl;
}
```


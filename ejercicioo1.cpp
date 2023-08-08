#include <iostream>
using namespace std;
//A
//Diseña un modulo que permita formatear una hora
// al formato militar, considerando hh:mm:ss
// formatear(h,m,s)
//Ejemplos
//Entrada           Salida
// 8:1:2            08:01:02
// 12:15:1          12:15:01
// 0:15:2           00:15:02

//B
//Diseña un funcion que permita verificar si una hora(h,m,s) es palindroma
// la funcion devuelve 1(True) si se cumple la condicion de palindromo
// y devuelve 0(False) si no se cumple (Sin considerar formato anterior)
// esPalindromo(h,m,s)
//Ejemplos
//Entrada               Salida
//12                    True - 1
//11  ->12:11:21        
//21

//1  1:2:1              True -1
//2
//1

//8   8:11:7            False - 0
//11
//7

//C
//Diseña una funcion que permita calcular cuanta de diferencia en minutos
//existe entre una hora h1, y una hora h2
//Ejemplos
// Entrada                  Salida
// 8  16  15                14
// 8  30  15

// 8  16  30                64.5
// 9  20  0



int main()
{
    short h,m,s, h2,m2,s2;
    cout<<"Introduzca la hora, el minuto y el segundo";
    cin>>h>>m>>s;
    //A
    formatear(h,m,s);
    if(esPalindromo(h,m,s))
    {
        cout<<"Es Palindromo"<<endl;
    }
    else
    {
        cout<<"No es Palindromo"<<endl;
    }
    cout<<"Introduzca una segunda hora  (h,m,s)"<<endl;
    cin>>h2>>m2>>s2;
    cout<<"Diferencia en minutos es"<<diferencia(h,m,s, h2,m2,s2)<<endl; 

    return 0;
}
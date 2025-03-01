#include <iostream>
using namespace std;
//class Nombre_clase
//{
//	//metodo de acceso
//	//listado de atributos
//	
//	//definicion de constructores
//	
//	//metodo de acceso
//	//definicion de comportamiento
//	
//	//definicion de metodos de acceso y modificacion
//};
class Jugador
{
	private://OCULTO
		short jugada;
	public : //visible para los objetos que interactuan con la clase
	
	//definicion del constructor
		//constructor por defecto
	Jugador()//A
	{
		jugada = 0;
	}
	
	Jugador(int opcion)//B
	{
		jugada = opcion;
	}
		
	//definicion de los metodos
	void seleccionar()
	{
		short opcion;
		cout<<"Seleccione su jugada"<<endl;
		cin>>opcion;		
		//validar la opcion
		jugada = opcion;
	}
	
	//metodos de acceso y modificacion
	short getJugada()
	{
		return jugada;
	}
	void setJugada(short x)
	{
		jugada = x;
	}
};

class Arbitro
{
public:
	Jugador jugador1;
	Jugador jugador2;
	
	//crear un constructor que reciba a los dos jugadores con los cuales se va a jugar
	
	short evaluar()
	{	
		
		short resp;
		//if( op1 == op2)
		if(jugador1.getJugada() == jugador2.getJugada())
			resp = 0;
//		else if (...............)// logica en que el jugador 1, es ganador
//			resp = 1;
		else
			resp = -1;
		
		return resp;
	}
};

//crear la clase Tablero-> trabaja con dos jugadores, 
// define una metodo para Mostrar la Jugada
//    ()   VS   8<
// define una metodo para Mostrar el ganador en funcion a la evaluacion de un Arbitro
//     void MostrarGanador(Arbito a1)
//{
//	   resp = a1.evaluar()
//};

int main(int argc, char *argv[]) {
		
	Jugador j1, j3;
	//j1.seleccionar();		
	//j1.setJugada(2);
	//cout<<j1.getJugada();	
	
	Jugador j2(1);
	Jugador j4(3);
	
	Arbitro a1;
	a1.jugador1 = j1;
	a1.jugador2 = j3;
	cout<<a1.evaluar();
	
	//cout<<"la opcion del jugdor 2 es"<<j2.jugada;
	//j2.jugada=1;
	//j2.seleccionar();
	
	
	return 0;
}


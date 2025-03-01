#include <iostream>
using namespace std;
class Carro
{
private: 
	int velocidad;
	int combustible;
public:
	int posicion;

	//constructor es una funcion peculiar que sirve para inicializar o configurar
	//la forma en que se debe instanciar el objeto de la clase
	
	//constructor por defecto
	Carro()
	{
		velocidad = 1;
		combustible = 100;
		posicion = 0;
	}
	Carro(int vel, int com, int pos )
	{
		velocidad = vel;
		combustible = com;
		posicion = pos;
	}
	Carro(int vel)
	{
		velocidad = vel;
		combustible = 100
		posicion = 0;
	}
	
	void Acelerar()
	{
		velocidad = velocidad + 1;
	}
	void Acelerar(int inc)
	{
		velocidad = velocidad + inc;
	}
	
	void Avanzar()
	{
		//hay que validar
		posicion += velocidad; 
	}
	void RecargarCombustible(int cantidad)
	{
		combustible = combustible+cantidad;
	}
	
	
	//creamos los metodos de acceso y mutacion
	//metodo de lectura -> get_____
	int getVelocidad()
	{
		return velocidad;
	}
	//metodo escritura  -> set______
	void setVelocidad(int velo)
	{
		velocidad = velo;
	}
};
	
class Carrera()
{
	int turno;
	Carro c1, c2;
	Visualiador visualizador;
	void iniciarCarrera()
	{
		//1,2,0
		int operacion;
		while(!determinarGanador())
		{
			cout<<"Introduzca una opcion"<<endl;
			cout<<"W->Acelerar";
			cout<<"D->avanzar";
			cin>>operacion;
			if(turno == 1){
				if(operacion == 'W')
					c1.acelerar();
			}
			
			visualizador.mostrarCarrera();
		}
	}
}
//===========================================================================
//|     |     |  #  |     |     |     |     |     |     |     |     |     |M|
//|     |     | O-O |     |     |     |     |     |     |     |     |     |E|
//---------------------------------------------------------------------------
//|     |     |     |     |     |     |  #  |     |     |     |     |     |T|
//|     |     |     |     |     |     | O-O |     |     |     |     |     |A|
//===========================================================================
	


int main(int argc, char *argv[]) {
	Carro c1, c2;
	Carrera car;
	car.inicarCarrera();
	
	return 0;
}


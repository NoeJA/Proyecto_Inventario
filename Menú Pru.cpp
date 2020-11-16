#include<iostream>
#include<vector>
#include<string>

using namespace std;
#define MAX 70

int CantArt(int CantA)
{
	do
	{
		cout << "Ingresa la cantidad de articulos : ";
		cin >> CantA;
		if (CantA <= 0)
			cout << "Ingresa una cantidad válida" << endl;
		if (CantA > MAX)
			cout << "La cantidad de articulos máxima ha sido superada" << endl;
	} while (CantA <= 0 && CantA > MAX);
	return CantA;
}

int OpcMenu(int CantA, int A[])
{
	int i, posi, nomart, opc;
	cout << "1. Insertar articulo: " << endl;
	cout << "2. Eliminar articulo: " << endl;
	cout << "3. Agregar articulo: " << endl;
	cout << "4. Buscar articulo: " << endl;
	cout << "Elige una opcion 1 , 2 , 3 o 4: ";
	cin >> opc;


	switch (opc)
	{
	case 1:
	{
		cout << "Cual es el nombre del articulo a añadir:  " << endl;
		cin >> nomart;
		do
		{
			//Verificar si hay error en CantA y debe corregirse 
			cout << "Digite la posición en la que desea añadirlo. Rango de [0] hasta [" << CantA - 1 << "]:  " << endl;
			cin >> posi;
			if (posi > (CantA - 1) && posi < 0)
				cout << "La posición ingresada no es válida, intentelo de nuevo " << endl;
		} while (posi > (CantA - 1) && posi < 0);

		for (i = CantA - 1; i >= posi; i--)
		{
			A[i + 1] = A[i];
			if (posi == i)
			{
				A[posi] = nomart;
			}
		}
	}
	break;

	case 2:
	{
		do
		{
			//Verificar si hay error en CantA y debe corregirse 
			cout << "Digite la posición en que desea eliminar el articulo. Rango de [0] hasta [" << CantA - 1 << "]:  " << endl;
			cin >> posi;
			if (posi > (CantA - 1) && posi < 0)
				cout << "La posición ingresada no es válida, intentelo de nuevo " << endl;
		} while (posi > (CantA - 1) && posi < 0);

		for (i = posi; i <= CantA; i++)
		{
			A[i] = A[i + 1];
		}
		CantA--; //CantA-- porque la cantidad total de articulos disminuyo porque precisamente eliminamos uno o varios
	}
	break;

	case 3:
	{
		for (i = 0; i < 1; i++)
		{
			cout << "Ingrese el nombre del articulo a añadir: " << endl;
			cin >> nomart;
			CantA++; //se debe a que aumento el numero de articulos
			A[CantA - 1] = nomart;
		}
	}
	break;


	case 4:
	{
		cout << "Ingrese el nombre del articulo que desea identificar: " << endl;
		cin >> nomart;
		for (i = 0; i <= CantA; i++)
		{
			if (A[i] == nomart)
			{
				cout << "El ariculo que buscas se encuentra en la posición:  A[" << i << "]" << endl;
			}
			else
				cout << "El articulo que ingresas no se encuentra " << endl;
		}
	}
	break;

	}
	return CantA;
}

void main()
{
	int c;
	char opc;
	int n[MAX];
	
	PosicionArt(c, n);
	do {
		c = OpcMenu(c, n);
		MostrarArt(c, n);
		cout << " ¿Desea realizar otra operacion?  Y/N (Yes / No), caso contrario pulse otra tecla: ";
		cin >> opc;
	} while (opc == 'Y' or opc == 'N');
}

//CantA = Cantidad de articulos 
void PosicionArt(int CantA, int n[])
{
	for (int i = 0; i < CantA; i++)
	{
		cout << "Inserta un articulo en A[" << i << "] :  ";
		cin >> n[i];
	}
}

void MostrarArt(int CantA, int n[])
{
	for (int i = 0; i < CantA; i++)
	{
		cout << "Art[" << i << "] : " << n[i] << endl;
	}
}

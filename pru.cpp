#include <iostream>
#include <vector>

#include "inventario.h"


using namespace std;


void menu();
main(){
	//Creamos el objeto minventario de la clase inventario para incocar funciones
	inventario minventario;
	//Crear vectores iniciales, inicializarlos para asi añadir los datos
	
	menu();
	response();
	
	switch(menu()){
		case 1:
			int num;
			cout<<"Si desea añadir otro articulo, presione 1, presione cualquier otro numero de lo contrario"<<endl;
			while num==1{
				
				string answer;
				int amount;
				float price,costsell;
				cout<<"Ingrese el articulo"<<endl;
				cin>>answer;
				cout<<"Ingrese la cantidad"<<endl;
				cin>>amount;
				cout<<"Ingrese el precio de provedor del articulo"
				cin>>price;
				cout<<"Ingrese el precio de venta del articulo"<<endl;
				minventario.AddArticle(articleVec,answer);
				minventario.setAmount(nArticles,amount);
				minventario.setCost(Cost,cost);
				minventario.setSell(Sell,cost_sell);
				
			}
			break;
			
		case 2:
			
			minventario.printInv(articleVec,nArticles,Cost,Sell);
			break;
			
		case 3:
			
			float gain=minventario.calcGain(nArticles,Cost,Sell);
			cout<<"La posible ganancia con base en el inventario es: "<<gain<<endl;
		default:
        cout << "Operacion no valida\n";
        break;
			
			
	}
	
	
	
}
	
return 0
}

void menu(){
	cout<<"Ingrese la opcion que desea utilizar"<<endl;
	cout<<"1.Añadir un articulo"<<endl<<"2.Visualizar inventario"<<endl<<"3.Calcular ganancia"<<endl;
	
	
}
int option_menu(){
	int response;
	cout<<"Ingrese la opcion que desea utilizar"<<endl;
	cin>>response;
	return(response);
}


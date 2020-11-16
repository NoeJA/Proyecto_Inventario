#include <iostream>
#include <vector>
#include "inventario.h"
using namespace std;

//Declaraci?n de variables
vector<string> articleVec;
vector<int> nArticles;
vector<float> Cost;
vector<float> Sell;

// Declaraci?n de funciones
void menu();
int option_menu();

int main() {
    //Creamos el objeto minventario de la clase inventario para llamar funciones
    inventario minventario;
    menu();
    
    int res=1;
    
    while (res==1){
    	menu();

    switch (option_menu()) {
        case 1: {
            int num;
            cout << "Si desea añadir otro articulo presione 1, para salir presione cualquier otro numero" << endl;
            cin >> num;
            while (num == 1) {
                string answer;
                int amount;
                float price, costsell;
                cout << "Ingrese el articulo" << endl;
                cin >> answer;
                cout << "Ingrese la cantidad" << endl;
                cin >> amount;
                cout << "Ingrese el precio de provedor del articulo"<<endl;
                cin >> price;
                cout << "Ingrese el precio de venta del articulo" << endl;
                cin >> costsell;
                minventario.AddArticle(articleVec, answer);
                minventario.setAmount(nArticles, amount);
                minventario.setCost(Cost, price);
                minventario.setSell(Sell, costsell);
                cout<<"Si desea agregar otro articulo ingrese 1, de lo contrario presione otro numero"<<endl;
                cin>>num;
            }
            break;
        }
        case 2: {
            minventario.printInv(articleVec, nArticles, Cost, Sell);
            break;
        }
        case 3: {
            float gain = minventario.calcGain(nArticles, Cost, Sell);
            cout << "La ganancia aproximada con base en el inventario es: " << gain << endl;
            break;
        }
        default:
            cout << "Operacion no valida" << endl;
            break;
    }
    cout<<"¿Desea continuar con el inventario? presione 1, de lo contrario, presione otro numero"<<endl;
    cin>>res;
}
    return 0;
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

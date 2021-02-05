#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

/*void ejercicio1(string cadena) {
	int size = cadena.length();
	char chars[size];
	cout<<"[";

	for(int i = 0; i < size; i++) {

		int auxiliar=0;
		for(int j=0; j< size; j++) {

			if(chars[j] == cadena[i]) {
				auxiliar++;
			}
		}

		if(auxiliar==0) {
			chars[i] = cadena[i];
			cout << chars[i] << " ";
		}

	}
	cout<<"]";
}*/

vector<char> ejercicio11(string cadena) {
	int size = cadena.length();
	vector<char> chars;
	for(int i = 0; i < size; i++) {
		chars.push_back(cadena[i]);
	}
	for(int i=chars.size()-1; i>=0; i--) {
		int auxiliar=0;
		for(int j = chars.size()-1; j >= 0 ; j--) {
			if(chars.at(j) == cadena[i]) {
				auxiliar++;
			}
		}
		if(auxiliar != 1) {
			/*
			char aux = cadena[i];
			segundo.push_back(aux);
			cout << chars.at(i) << " ";
			*/
			chars.erase(chars.begin()+i);
		}
	}
	return chars;
}

int* ejercicio2(string cadena,vector<char> vector) {
	int *cantidadC = new int[vector.size()];
	for(int i= vector.size()-1; i>=0; i--) {
		int auxiliar=0;

		for(int j = cadena.length()-1; j >= 0 ; j--) {
			if(vector.at(i) == cadena[j]) {
				auxiliar++;
			}
		}
		cantidadC[i]=auxiliar;
	}
	return cantidadC;
	delete cantidadC;
}

int* ordenamientoRBB(int arr[],bool bandera,int n) {
	if( bandera==true ) {
		int aux=0;
		bandera = false;
		for(int i=0; i<n-1; i++) {
			if(arr[i] < arr[i+1]) {
				aux = arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=aux;
				bandera = true;
			}
		}
		ordenamientoRBB(arr,bandera,n);
	} else {
		return arr;
	}
}

int* ejercicio3(int* num,int tam) {
	int* segundoArreglo = new int [tam];
	for(int i=0;i<tam;i++){
		
	}
	ordenamientoRBB(segundoArreglo,true,tam);
	for(int i=0; i<tam; i++) {
		int aux=0;
		for(int j=0; j<tam; j++) {
			
		}
	}
	return segundoArreglo;
}

int main(int argc, char** argv) {
	bool res;
	res=true;
	while(res==true) {
		int opcion;
		cout<<"1) Ejercicio1"<<endl;
		cout<<"2) Ejercicio2"<<endl;
		cout<<"3) Ejercicio3"<<endl;
		cout<<"4) Ejercicio4"<<endl;
		cout<<"5) Salida"<<endl;
		cout<<"Ingrese su opcion: ";
		cin>>opcion;
		//imgresa la opcion que desea
		switch(opcion) {
			case 1: {
				cout<<"Ingrese una cadena:";
				string cadena = "";
				getline(cin, cadena);
				getline(cin, cadena);
				cout<<endl;
				//cout<<"La cadena es:"<<palabra<<endl;
				vector<char> c = ejercicio11(cadena);
				for(int i = 0 ; i < c.size() ; i++) {
					cout<< c.at(i)<<", ";
				}
				cout<<endl<<endl;
			}
			break;
			case 2: {
				cout<<"Ingrese una cadena:";
				string cadena = "";
				getline(cin, cadena);
				getline(cin, cadena);
				cout<<endl;
				vector<char> c = ejercicio11(cadena);
				int* valor = ejercicio2(cadena,c);
				for(int i=0; i<cadena.length()-1; i++) {
					cout<< valor[i]<<" ";
				}

				cout<<endl<<endl;
			}
			break;
			case 3: {
				bool resp = true;
				cout<<"Ingrese el tamano del arreglo de enteros:";
				int tam=0;
				cin >> tam;
				char respuesta='s';
				int* arreglo = new int[tam];
				
				for(int i=0; i<tam; i++) {
					int num=0;
					cout<<"ingrese el numero:";
					cin>> num;
					arreglo[i] = num;
				}
				for(int i=0;i<tam;i++){
					cout<<arreglo[i]<<" ";
				}
				cout<<endl;
				//int* c = ejercicio3(arreglo,tam);
				int* c = ordenamientoRBB(arreglo,true,tam);
				for(int i=0;i<tam;i++){
					cout<<c[i]<<" ";
				}
				cout<<endl;

			}
			break;

			case 4: {


			}
			break;
			case 5:
				res=false;
				cout<<"Gracias por usar lel programa!!"<<endl;
				break;
		}
	}
}

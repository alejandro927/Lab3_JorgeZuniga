#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

void ejercicio1(string cadena) {
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
}

vector<char> ejercicio11(string cadena) {
	int size = cadena.length();
	vector<char> chars;
	//cout<<"[";
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
			/*char aux = cadena[i];
			segundo.push_back(aux);
			cout << chars.at(i) << " ";
			*/
			chars.erase(chars.begin()+i);
		}

	}
	return chars;
}

void ejercicio2(string cadena) {
	int size = cadena.length();
	char chars[size];
	cout<<"[";
	for(int i = 0; i < size; i++) {

		int auxiliar=0;
		for(int j=0; j<size; j++) {

			if(chars[j] == cadena[i]) {
				auxiliar++;
			}
		}
		if(auxiliar==0) {
			chars[i] = cadena[i];
			cout << chars[i] << " ";
		}

	}
	cout<<"] = ";
	cout<<"[ ";


	for(int i = 0; i < size; i++) {
		int auxiliar=0;
		for(int j=0; j < size; j++) {
			if(cadena[j] == chars[i]) {
				auxiliar++;
			}
		}
		cout<<" "<<auxiliar<<", ";

	}
	cout<<"]";
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
				for(int i = 0 ; i < c.size() ; i++){
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
				ejercicio2(cadena);
				cout<<endl<<endl;
			}
			break;
			case 3: {
				string palabra="hola";


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

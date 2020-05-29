#include<iostream>
#include<string>
using namespace std;
int main(){
	
	string palabra;
	int contador;
	
	cout<<"Ingrese una palabra: ";
	cin>>palabra;
	
	contador = palabra.length();
	
	if(contador % 2 ==0 && contador > 10){
		cout<<"La palanra es par y con mas de 10 caracteres, tiene "<<contador<<endl<<"caracteres"<<endl;
	}else if(contador % 2 == 0 && contador < 10){
		cout<<"La palabra es par y con menos de 10 caracteres, tiene "<<contador<<endl<<"caracteres"<<endl;
	}else if(contador != 0 && contador < 10){
		cout<<"La palabra es impar y con menos de 10 caracteres, tiene "<<contador<<endl<<"caracteres"<<endl;
	}else{
		cout<<"La palabra es impar y con mas de 10 caracteres, tiene "<<contador<<endl<<"caracteres"<<endl;
	}
	
		
	return 0;
}

#include<iostream>

using namespace std;

main(){
	int edad,*p_edad;
	edad =25;
	p_edad=&edad;
	
	cout<<"Variable Edad :"<<*p_edad<<endl;
	cout<<"Puntero Edad:"<<*p_edad<<endl;
	cout<<"------------"<<endl;
	*p_edad = 40;
	cout<<"Variable Edad:"<<*p_edad<<endl;
	cout<<"Puntero Edad:"<<*p_edad<<endl;
	
	cout<<"------Nueva variable ------"<<endl;
	int edad2 =100;
	p_edad=&edad2;
	
	cout<<"Variable Edad:"<<*p_edad<<endl;
	cout<<"Puntero Edad:"<<*p_edad<<endl;
	
	cout<<"------Nueva valor ------"<<endl;
	
	*p_edad=30;
	
	cout<<"Variable Edad:"<<*p_edad<<endl;
	cout<<"Puntero Edad:"<<*p_edad<<endl;
	

	system("PAUSE");

} 

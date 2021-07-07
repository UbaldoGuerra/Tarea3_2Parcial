#include <iostream>
using namespace std; 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int tabla;
	int mult; 
	
	cout<<"Ingrese que tabla desea ver: "<<endl;
	cin>>tabla;
	
	for (int i = 0; i <=10; i++){ //for (int i = 10; i >=0; i--)
		mult = i*tabla;
		
		cout<<tabla<<" x "<<i<<" = "<<mult<<endl; 
	}
	return 0;
}

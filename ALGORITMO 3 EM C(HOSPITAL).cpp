#include <iostream>
using namespace std;
main(){
	int quarto;
	cout << "Digite o Numero do Quarto\n";
	cin >> quarto;
	if(quarto %2 == 0){
		cout << "Dirija se a Direita\n";
	}
	else{
		cout << "Dirija se a Esquerda\n";
	}
}

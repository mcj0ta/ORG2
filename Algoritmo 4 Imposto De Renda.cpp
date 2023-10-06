#include <iostream>
using namespace std;
main(){
	float renda,ir;
	cout << "Digite Sua Renda Total.\n";
	cin >> renda;
	if(renda<2112){
		cout << "Voce Esta Isento do IR.\n";;
	}
	if((renda>2112)&&(renda<=2826.65)){
		ir=(renda*0.075)-142.80;
	}
	if((renda>2826.65)&&(renda<=3751.05)){
		ir=(renda*0.15)-354.80;
	}
	if((renda>3751.05)&&(renda<=4664.68)){
		ir=(renda*0.225)-636.13;
	}
	if(renda>4664.68){
		ir=(renda*0.275)-839.36;
	}
	cout << "Valor Do IR:" <<ir<< "\n";
	

}

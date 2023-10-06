#include <iostream>
using namespace std;
main(){
	float sbruto;
	float sfinal;
	cout << "Digite Seu Salário Bruto\n";
	cin >> sbruto;
	if(sbruto<1659.38){
		sfinal=sbruto-(sbruto*0.08);
	}
	if((sbruto>=1659.38)&&(sbruto<2765.66)){
		sfinal=sbruto-(sbruto*0.09);
	}
	if((sbruto>=2765.66)&&(sbruto<=5531.31)){
		sfinal=sbruto-(sbruto*0.11);
	}
	if(sbruto>5531.31){
		sfinal=sbruto-(5531.31*0.11);
	}
	cout << "Salário Final apos descontos:" <<sfinal<< "\n";
}

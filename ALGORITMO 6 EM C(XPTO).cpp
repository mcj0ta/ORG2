#include <iostream>
using namespace std;
main(){
	int sfixo=1200,com=0,totvenda=0;	
	float sfinal;
	cout << "Digite o Total de Vendas do Vendedor\n";
	cin >> totvenda;
	if(totvenda<=1500){
		sfinal=sfixo+(totvenda*0.1);
	}
	if(totvenda>1500){
		sfinal=sfixo+(totvenda*0.1)+((totvenda-1500)*0.2);
	}
	cout << "Salário Final com comissoes:" <<sfinal<< "\n";
}

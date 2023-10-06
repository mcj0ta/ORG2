#include <iostream>
using namespace std;
main(){
 	float fc,f,af,apisc,qlad,alad;
	int lfc,cfc,lf,cf,lfundo,cfundo,ll,cl;	
	cout << "Digite o Comprimento do Fundo em Cm\n";
	cin >> cfundo;//Comprimento do Fundo
	cout << "Digite A largura do Fundo em Cm\n";
	cin >> lfundo;//Largura Fundo
	cout << "Digite A largura da Face Maior em Cm\n";
	cin >> lfc;//Largura Face Maior
	cout << "Digite O Comprimento da Face Maior em Cm\n";
	cin >> cfc;//Comprimento Face Maior
	cout << "Digite O Comprimento da Face Menor em Cm\n";
	cin >> cf;//Comprimento Face Menor
	cout << "Digite A largura da Face Menor em Cm\n";
	cin >> lf;//Largura Face Menor
	cout << "Digite A largura do ladrilho em Cm\n";
	cin >> ll;//Largura de Cada Ladrilho
	cout << "Digite O comprimento do ladrilho em Cm\n";
	cin >> cl;//Comprimento de Cada Ladrilho
	fc=lfc*cfc;//Area da Face Maior
	af=cfundo*lfundo;//Area do Fundo
	f=cf*lf;//Area da Face Menor
	apisc=(fc*2)+(f*2)+af;//Area Da Piscina
	alad=cl*ll;//Area de Cada Ladrilho
	qlad=apisc/alad;//Quantidade de Ladrilhos que serão necessários
	cout << "Area Face maior:" <<fc<< "\n";
	cout << "Area Face menor:" <<f<< "\n";
	cout << "Area Fundo:" <<af<< "\n";
	cout << "Area Piscina:" <<apisc<< "\n";
	cout << "Area De Cada Ladrilho:" <<alad<< "\n";
	cout << "Area De Cada Ladrilho:" <<qlad<< "\n";

}

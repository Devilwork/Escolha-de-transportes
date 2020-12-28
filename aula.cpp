#include <iostream>

int main() {

	int val;
	std::cout << "Selecione um transporte:\n";
	std::cout << "[1]=Carro, [2]=Moto, [3]=Aviao, [4]=Helicoptero\n";
	std::cin >> val;
   
	switch (val) {
	case 1:
	case 2:
		std::cout << "\nTransporte terrestre\n";
		switch (val) {
		case 1:
			std::cout << "Carro selecionado\n";
			break;
		case 2:
		std::cout << "Moto selecionada\n";
			break;
		}
		break;
	case 3:
	case 4:
		std::cout << "\nTransporte aereo\n";
		switch (val) {
		case 3:
			std::cout << "Aviao selecionado\n";
			break;
		case 4:
			std::cout << "Helicoptero slecionado\n";
			break;
		default:
			std::cout << "Transporte selecionado invalido\n";
		}
	}


	std::cout << "\nPrograma finalizado\n";
	
	return 0;
}

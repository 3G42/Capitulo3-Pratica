#include "C:\Users\rafae\source\repos\Capitulo3\std_lib_facilities.h"

int main()
{
	string primeiro_nome;
	string nome_amigo;
	char sexo_amigo = 0;
	int sexo = 0;


	cout << "Digite o nome da pessoa para quem deseja escrever" << endl;
	cin >> primeiro_nome;

	cout << "Informe o nome do amigo " << endl;
	cin >> nome_amigo;
	cout << "Qual o sexo do seu amigo? Digite m para masculino e f para feminino" << endl;
	cin >> sexo_amigo;

	
	cout << endl;
	cout << endl;
	cout << endl;

	
	cout << "Prezado(a)" << primeiro_nome << ", " << endl;
	cout << "Como voce esta? Gracas a Deus estou bem. Sinto sua falta." << "\nVoce viu " << nome_amigo << " recentemente?";

	if (sexo_amigo == 'm')
		cout << " Se voce encontrar o " << nome_amigo << " por favor peca a ele para me telefonar.";
	else if (sexo_amigo == 'f')
		cout << " Se voce encontrar a " << nome_amigo << " por favor peca a ela para me telefonar.";

	cout << endl; cout << endl; cout << endl;

}
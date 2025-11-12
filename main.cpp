#include <iostream> 
#include <string>
using namespace std;

struct Livro {
    string titulo;
    string autor;
    int adp;
};

int main() {
    Livro livros[10];
    int quantidade = 0, opcao;

    do {
        cout << "\nMenu:\n";
        cout << "1. Adicionar livro\n";
        cout << "2. Listar livros\n";
        cout << "3. Procurar por autor\n";
        cout << "4. Sair\n";
        cout << "Escolha: ";
        cin >> opcao;
        cin.ignore();

        if (opcao == 1 && quantidade < 10) {
            cout << "\nTitulo: ";
            getline(cin, livros[quantidade].titulo);
            cout << "Autor: ";
            getline(cin, livros[quantidade].autor);
            cout << "Ano: ";
            cin >> livros[quantidade].adp;
            cin.ignore();
            quantidade++;
        } 
        else if (opcao == 2) {
            for (int i = 0; i < quantidade; i++) {
                cout << "\nLivro " << i + 1 << ":\n";
                cout << "Titulo: " << livros[i].titulo << "\n";
                cout << "Autor: " << livros[i].autor << "\n";
                cout << "Ano: " << livros[i].adp << "\n";
            }
        } 
        else if (opcao == 3) {
            string autorBusca;
            cout << "Digite o autor: ";
            getline(cin, autorBusca);
            for (int i = 0; i < quantidade; i++) {
                if (livros[i].autor == autorBusca) {
                    cout << "Titulo: " << livros[i].titulo << "\n Ano: " << livros[i].adp << "\n";
                }
            }
        }
        else if (opcao >=5){
            cout << "\nErro:/ Escreva apenas os números pedidos no menu.\n";
        }
    } while (opcao != 4);

    return 0;
}
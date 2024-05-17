#include <iostream>
using namespace std;
int id[999];
int titulo[999];
int descricao[999];
int data[999];
int status[999];
int menu;
int main(){

    cout << "1. Adicionar tarefa" << endl;
    cout << "2. Visualizar tarefas" << endl; 
    cout << "3. Editar tarefa" << endl; 
    cout << "4. Remover tarefa" << endl;
    cout << "5. Buscar tarefa" << endl;
    cout << "6. Filtrar tarefa por status" << endl; 
    cout << "0. Sair" << endl;
    cin >> menu;

    if (menu == 1){
        cout << "ID: " << endl;
        cin.ignore(); 
        getline (cin, id[999]);
        cout << "Título: " << endl;
        cin.ignore();
        getline (cin, titulo[999]);
        cout << "Descrição: " << endl;
        cin >> descricao[999];
        cout << "Data limite: " << endl;
        cin >> data[999];
        cout << "Status: " << endl;
        cin >> status[999];
    }

return 0;
}

#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int menu;
int id[1000];
string titulo[1000];
string descricao[1000];
string data[1000];
string status[1000];
int controle = 0;

int main(){

do
{
  
    cout << "1. Adicionar tarefa" << endl;
    cout << "2. Visualizar tarefas" << endl; 
    cout << "3. Editar tarefa" << endl; 
    cout << "4. Remover tarefa" << endl;
    cout << "5. Buscar tarefa" << endl;
    cout << "6. Filtrar tarefa por status" << endl; 
    cout << "0. Sair" << endl;
    cin >> menu;

    if (menu == 1){
        cout << "ID: ";
        cin >> id[1000]; 
        cout << "Título: ";
        cin.ignore(); getline(cin,titulo[1000]);
        cout << "Descrição: " << endl;
        cin.ignore(); getline(cin,descricao[1000]);
        cout << "Data limite: " << endl;
        cin.ignore(); getline(cin,data[1000]);
        cout << "Status: " << endl;
        cin.ignore(); getline(cin,status[1000]);
    
    controle++;
    }
    
    if(menu == 2){
    for (int i = 0; i < controle; i++)
}
        } while (menu != 0);

return 0;
}

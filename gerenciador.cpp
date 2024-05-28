#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int menu;
int ID[1000];
string Titulo[1000];
string Descricao[1000];
string Data[1000];
string Status[1000];
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
        ID [controle] = controle; 
        cout << "Título: " << endl;
        cin.ignore(); getline(cin,Titulo[controle]);
        cout << "Descrição: " << endl;
        cin >> Descricao[controle];
        cout << "Data limite: " << endl;
        cin.ignore(); getline(cin,Data[controle]);
        cout << "Status: " << endl;
        cin >> Status[controle];
    
    controle++;
    }
    
    if(menu == 2){
    cout << "--Lista de tarefas--" << endl;
    for (int i = 0; i < controle; i++){;
    cout << "ID: " << ID[i] << endl;
    cout << "Titulo: " << Titulo[i] << endl;
    cout << "Descricao: " << Descricao[i] << endl;
    cout << "Data Limite: " << Data[i] << endl;
    cout << "Status: "<< Status[i] << endl;
        } 
    }

    if(menu == 3){
    cout << "--Editar tarefa--" << endl;
    
    cout << "Tarefas disponíveis para edição:" << endl;
    for (int i = 0; i < controle; i++){
        cout << "ID: " << ID[i] << ", Titulo: " << Titulo[i] << endl;
    }
    
    int idTarefa;
    cout << "Digite o ID da tarefa que deseja editar: " << endl;
    cin >> idTarefa;
    
    int posicaoTarefa = -1;
    for (int i = 0; i < controle; i++){
        if (ID[i] == idTarefa){
            posicaoTarefa = i;
            break;
        }
    }
    
    }
    if (posicaoTarefa != -1){
        // Permitir que o usuário edite os detalhes da tarefa
        cout << "Editar tarefa ID: " << ID[posicaoTarefa] << endl;
        cout << "Novo Título: ";
        cin.ignore(); getline(cin, Titulo[posicaoTarefa]);
        cout << "Nova Descrição: ";
        cin.ignore(); getline(cin, Descricao[posicaoTarefa]);
        cout << "Nova Data limite: ";
        cin.ignore(); getline(cin, Data[posicaoTarefa]);
        cout << "Novo Status: ";
        cin >> Status[posicaoTarefa];
        cout << "Tarefa editada com sucesso!" << endl;
    } else {
        cout << "ID de tarefa inválido." << endl;
    }
}
}while (menu != 0);
   
   
    
return 0;
}

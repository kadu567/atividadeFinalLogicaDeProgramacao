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
int idTarefa;
int posicaoTarefa = -1;

int main(){

do
{
  // Esse é o menu, quando o usuario digita um dos números o codigo continuara para a opcao selecionada
    cout << "1. Adicionar tarefa" << endl;
    cout << "2. Visualizar tarefas" << endl; 
    cout << "3. Editar tarefa" << endl; 
    cout << "4. Remover tarefa" << endl;
    cout << "5. Buscar tarefa" << endl;
    cout << "6. Filtrar tarefa por status" << endl; 
    cout << "0. Sair" << endl;
    cin >> menu;

   
   // Nessa parte o usuario adicionar uma nova tarefa
    if (menu == 1){
        ID [controle] = controle; 
        cout << "Título: " << endl;
        cin.ignore(); getline(cin,Titulo[controle]);
        cout << "Descrição: " << endl;
        cin >> Descricao[controle];
        cout << "Data limite: " << endl;
        cin.ignore(); getline(cin,Data[controle]);
        cout << "Status: (1 - Pendente, 2 - Em progresso, 3 - Concluido ) " << endl;
        cin >> Status[controle];
    
    controle++;
    }
    
    // O usuario vai ver quais as tarefas que ele tem
    if(menu == 2){
    cout << "--Lista de tarefas--" << endl;
    for (int i = 0; i < controle; i++){;
    cout << "ID: " << ID[i] << endl;
    cout << "Titulo: " << Titulo[i] << endl;
    cout << "Descricao: " << Descricao[i] << endl;
    cout << "Data Limite: " << Data[i] << endl;
    cout <<"Status: (1 - Pendente, 2 - Em progresso, 3 - Concluido ) "<< Status[i] << endl;
        } 
    }

// A tarefa sera selecionada e o usuario vai poder editar a mesma
    if(menu == 3){
    cout << "--Editar tarefa--" << endl;
    
    cout << "Tarefas disponíveis para edição:" << endl;
    for (int i = 0; i < controle; i++){
        cout << "ID: " << ID[i] << ", Titulo: " << Titulo[i] << endl;
    }
    
    int idTarefa;
    cout << "Digite o ID da tarefa que deseja editar: " << endl;
    cin >> idTarefa;
    
   
    for (int i = 0; i < controle; i++){
        if (ID[i] == idTarefa){
            posicaoTarefa = i;
            break;
        }
    }
    
    }
    if (posicaoTarefa != -1) {
        
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

    
    void removerTarefa(int idTarefa); { 
    bool encontrado = false;
    for (int i = 0; i < controle; i++) {
        if (ID[i] == idTarefa) {
            for (int j = i; j < controle - 1; j++) {
                ID[j] = ID[j + 1];
                Titulo[j] = Titulo[j + 1];
                Descricao[j] = Descricao[j + 1];
                Data[j] = Data[j + 1];
                Status[j] = Status[j + 1];
            }
            controle--;
            encontrado = true;
            break;
        }
    }
    if (encontrado) {
        cout << "Tarefa removida com sucesso!" << endl;
    } else {
        cout << "ID de tarefa inválido." << endl;
    }
}

// A tarefa sera removida
if(menu == 4){
        cout << "Escolha qual tarefa você deseja remover" << endl;
            cout << "ID da Tarefa: ";
            cin >> idTarefa;
            removerTarefa(idTarefa);
        }

// A tarefa sera pesquisada
if (menu == 5) {
            string titulo;
            cout << "Buscar Tarefa" << endl;
            cout << "Título da Tarefa: ";
            cin.ignore(); getline(cin, titulo);
            buscarTarefa(titulo);
        }

// O usuario conseguira visualizar os status das suas tarefas
        if (menu == 6) {
            string status;
            cout << "Filtrar Tarefas por Status" << endl;
            cout << "Escolha o Status (1 - Pendente, 2 - Em Progresso, 3 - Concluída): ";
            cin >> status;
            filtrarTarefasPorStatus(status);
        }

}while (menu != 0);
   
   
    
return 0;
}
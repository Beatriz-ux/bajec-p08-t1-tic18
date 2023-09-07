#include <iostream>

using namespace std;

int main(void){
    srand(time(NULL));

    int qtdeAlunos = 15;
    float notas1[qtdeAlunos], notas2[qtdeAlunos], medias[qtdeAlunos];

    //a)
    cout << "Notas da primeira avaliação:" << endl;
    for(int i = 0; i < qtdeAlunos; i++){
        notas1[i] = ((float)rand()/RAND_MAX)*10;
        cout << "Aluno " << i+1 << ": " << notas1[i] << endl;
    }

    cout << endl;
    //b)
    cout << "Notas da segunda avaliação:" << endl;
    for(int i = 0; i < qtdeAlunos; i++){
        notas2[i] = ((float)rand()/RAND_MAX)*10;
        cout << "Aluno " << i+1 << ": " << notas2[i] << endl;
    }

    cout << endl;

    //c)
    cout << "Comparação das notas 1 e 2:" << endl;
    for(int i = 0; i < qtdeAlunos; i++){
        cout << "Aluno " << i+1 << ": ";
        if(notas2[i] > notas1[i])
            cout << "Melhorou" << endl;
        else if(notas2[i] < notas1[i])
            cout << "Piorou" << endl;
        else
            cout << "Manteve a nota" << endl;
    }

    cout << endl;

    //d)
    cout << "Médias:" << endl;
    for(int i = 0; i < qtdeAlunos; i++){
        medias[i] = (notas1[i] + notas2[i])/2;
        cout << "Aluno " << i+1 << ": " << medias[i] << endl;
    }

    return 0;
}
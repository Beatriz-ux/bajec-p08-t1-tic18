#include <iostream>

using namespace std;
int main(void){
    float notas[15]={0}, notas2[15]={0} ,media[15]={0};
    cout << fixed;
    cout.precision(2);
    for(int i=0; i<15;i++){
        notas[i] = ((float)rand()/RAND_MAX)*10;
        cout << "Nota1 do aluno["<<i+1<<"]" << ": "<< notas[i] << endl;
    }
    cout << endl;
    for(int i=0; i<15;i++){
        notas2[i] = ((float)rand()/RAND_MAX)*10;
        cout << "Nota2 do aluno ["<<i+1<<"]" << ": "<< notas2[i] << endl;
    }
    for(int i=0; i<15;i++){
        if (notas[i] > notas2[i]){
            cout << "Aluno ["<<i+1<<"]" << " piorou "<< endl;
        }
        else if (notas[i] < notas2[i]){
            cout << "Aluno ["<<i+1<<"]" << " melhorou "<< endl;
        }
        else{
            cout << "Aluno ["<<i+1<<"]" << " manteve a mesma nota"<< endl;
        }
    }

    for(int i=0; i<15;i++){
        media[i] = (notas[i] + notas2[i])/2;
        cout << "Media do aluno ["<<i+1<<"]" << ": "<< media[i] << endl;
    }
    return 0;
}
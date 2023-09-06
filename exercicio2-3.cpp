#include <iostream>

using namespace std; 

int main(){
    float notas1[15], notas2[15];
    srand(time(NULL));

    for (int i=0; i<15; i++){
        // a)
        notas1[i] = ((float)rand()/RAND_MAX)*10;

        // b)
        notas2[i] = ((float)rand()/RAND_MAX)*10;

        // c)
        cout << "Aluno " << i+1 << ":" ;
        cout <<((notas1[i] == notas2[i]) ? " Manteve a nota" : 
                ((notas1[i] > notas2[i])? " Piorou": " Melhorou")) << endl;
        cout << "Nota 1 = " << notas1[i] << " | Nota 2 = " << notas2[i]<< "\n\n";
    }


    return 0;
}
#include <iostream>

using namespace std;

/*
A seguinte expressão em C++ gera um valor inteiro aleatório entre 1 e 20: 1
+ rand()%20. Utilizando esta expressão desenvolva uma aplicação que:
a. Preencha um array com 100 elementos de tipo int, com valores
aleatoriamente gerados entre 1 e 20;
b. Utilize um array de 20 posições para determinar quantas vezes se
repete cada um dos possíveis valores gerados no array;
c. Determine qual ou quais os números que mais vezes aparecem no
array;
*/

int main(void){
    srand(time(NULL));

    int nums[100];
    int count[20] = {0};
    int max, i;

    for(int i = 0; i < 100; i++){
        nums[i] = 1 + rand()%20;
        count[nums[i]-1]++;

        cout << nums[i] << " ";
    }
    
    cout << endl << endl;

    for(i = 0; i < 20; i++){
        cout << i+1 << " - " << count[i] << "\t|";
        
        for(int j = 0; j < count[i]; j++){
            cout << "#";
        }
        
        cout << endl;

        if(count[i] > max){
            max = count[i];
        }
    }

    cout << endl;
    cout << "O(s) numero(s) que mais apareceu(ram) foi(ram): " << endl;

    for(i = 0; i < 20; i++){
        if(count[i] == max){
            cout << "- "<< i+1 << endl;
        }
    }

    return 0;
}
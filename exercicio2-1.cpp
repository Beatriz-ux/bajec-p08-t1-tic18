#include <iostream>

using namespace std;

int main(){
    int i, j, max = 0;
    int cont[20] = {0}, num[100], numMax[20] = {0};
    srand(time(NULL));

    //a)
    cout << "Numeros aleatorios: \n";
    for(i=0; i<100; i++){
        num[i] = 1 + rand()%20;
        cout << i+1 << "\n" << num[i] << endl;

        //b)
        cont[num[i]-1]++;
    }

    cout << "\nQuantidade de repetições: \n";
    for (i=0; i<20; i++){
        cout << i+1 << "\t" << cont[i] <<" | " ;
        for (int j=0; j<cont[i]; j++){
            cout << "#";
        }
        cout << endl;
    }

    //c)
    for (i=0; i<20; i++){
        if (cont[i] > max){
            max = cont[i];
        }
    }

    for (i=0, j=0; i<20; i++){
        if (cont[i] == max){
            numMax[j] = i+1;
            j++;
        }
    }

    cout << "\nO(s) numero(s) que mais aparece(m) e(sao): ";
    i = 0;
    while(numMax[i] !=0){
        cout << numMax[i] << " ";
        i++;
    }
    cout << endl;




    cout << "";

    return 0;
}
#include <iostream>

using namespace std;

int main(void){
    srand(time(NULL));

    int imagem[640][480];  
    int histograma[256] = {0};

    //a)
    for(int i = 0; i < 640; i++){
        for(int j = 0; j < 480; j++){
            imagem[i][j] = rand()%256;
        }
    }

    //b)
    for(int i = 0; i < 640; i++){
        for(int j = 0; j < 480; j++){
            histograma[imagem[i][j]]++;
        }
    }

    cout << "Histograma:" << endl;
    for(int i = 0; i < 256; i++){
        cout << i << ": " << histograma[i] << endl;
    }

    return 0;
}
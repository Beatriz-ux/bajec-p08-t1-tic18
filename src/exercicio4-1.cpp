#include <iostream>
#include <ctime>

using namespace std;

int main(){
    int h=10, w=10, i, j;
    short int imagem[h][w]; 
    int histograma[256]{0};
    srand(time(NULL));

    // a)
    for(i=0; i<h; i++){
        for(j=0; j<w; j++)
            imagem[i][j] = rand()%256;
    }

    //b)
    for(i=0; i<h; i++){
        for(j=0; j<w; j++)
            histograma[(int)imagem[i][j]]++;       
    }

    // print histograma
    for(i=0; i<256; i++){
        cout << i << " ";
        for(j=0; j<histograma[i]; j++)
            cout << "*";
        cout << " " << histograma[i] << endl;
    }



    return 0;
}
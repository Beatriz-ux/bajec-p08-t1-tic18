#include <iostream>
using namespace std;

int main (void){
    srand(time(NULL));
    int img[640][480], tom[256]={0};
    for (int i = 0; i < 640; i++){
        for (int j = 0; j < 480; j++){
            img[i][j] = rand() % 256;
            cout << img[i][j] << endl;
            tom[img[i][j]]++;
        }
    }
    cout <<"\t Histograma: " << endl;
    cout << "Tom\t Frequencia" << endl;
    for (int i = 0; i < 256; i++){
        cout << i << "\t ";
        for (int j = 0; j < tom[i]; j++){
            cout << "*";

        }
        cout << endl;
    }
    
    return 0;
}
#include <iostream>
#include <ctime>

using namespace std;

int main(){
    int h=640, w=480, i, j;
    char imagem[h][w];
    srand(time(NULL));

    // a)
    for(i=0; i<h; i++){
        for(j=0; j<w; j++)
            imagem[i][j] = rand()%256;
    }



    return 0;
}
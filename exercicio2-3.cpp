#include <iostream>

using namespace std; 

int main(){
    float notas[15];
    srand(time(NULL));

    // a)
    for (int i=0; i<15; i++)
        notas[i] = ((float)rand()/RAND_MAX)*10;

    
    return 0;
}
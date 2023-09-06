#include <iostream>

int main(){
    int i;
    int cont[20] = {0}, num[100];

    //a)
    for(i=0; i<100; i++){
        num[i] = 1 + rand()%20;
    }
    return 0;
}
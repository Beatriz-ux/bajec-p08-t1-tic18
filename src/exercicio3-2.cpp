#include <iostream>
#include <ctime>

using namespace std;

int main(){
    char string1[11], string2[11]; 
    int i;
    srand(time(NULL));

    // a)
    for(i=0; i<11; i++){
        if(i == 10)
            string1[i] = string2[i] = '\0';
        else{
            string1[i] = 'a' + (rand()%('z' - 'a'));
            string2[i] = 'a' + (rand()%('z' - 'a'));
        }
    }

    return 0;
}
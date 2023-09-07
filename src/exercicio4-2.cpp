#include <iostream>
#include <cstring>

using namespace std;

int main(void){
    srand(time(NULL));

    int qtdeStrings = 10;
    char strs[qtdeStrings][11];

    //a)
    for(int i = 0; i < qtdeStrings; i++){
        for(int j = 0; j < 10; j++){
            strs[i][j] = 'a' + rand()%('z' - 'a');
        }
        strs[i][10] = '\0';

        //b)
        strs[i][0] = toupper(strs[i][0]);
    }

    for(int i = 0; i < qtdeStrings; i++)
        cout << strs[i] << endl;

    return 0;
}
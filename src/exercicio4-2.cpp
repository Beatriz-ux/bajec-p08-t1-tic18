#include <iostream>
#include <ctime>
#include <cstring>

using namespace std;

int main(){
    int qntdStrings = 10, tamString = 10; 
    char strings[qntdStrings][tamString+1]; 
    int i, j;
    srand(time(NULL));

    // a)
    for(i=0; i<qntdStrings; i++){
        for(j=0; j<=tamString; j++){
            if(j == tamString)
                strings[i][j] = '\0';
            else{
                strings[i][j] = 'a' + (rand()%('z' - 'a'));
                strings[i][j] = 'a' + (rand()%('z' - 'a'));
            }
        }
    }

    //b)
    for(i=0; i<qntdStrings; i++){
        strings[i][0] = toupper(strings[i][0]);
        cout << strings[i]<< endl;
    }


    return 0;
}
#include <iostream>
#include <ctime>
#include <cstring>

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

    // b)
    string1[0] = toupper(string1[0]);
    string2[0] = toupper(string2[0]);

    // c)
    cout << ((strcmp(string1, string2)>0)?  string2 : string1) << " | " <<  ((strcmp(string1, string2)>0)?  string1 : string2) << endl; 

    return 0;
}
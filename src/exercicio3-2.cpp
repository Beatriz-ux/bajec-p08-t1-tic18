#include <iostream>
#include <cstring>

using namespace std;

int main(void){
    srand(time(NULL));

    char str1[11], str2[11];

    for(int i = 0; i < 10; i++){
        str1[i] = 'a' + rand()%('z' - 'a');
        str2[i] = 'a' + rand()%('z' - 'a');
    }

    str1[10] = '\0';
    str2[10] = '\0';

    str1[0] = toupper(str1[0]);
    str2[0] = toupper(str2[0]);

    if(strcmp(str1, str2) <= 0)
        cout << str1 << endl << str2 << endl;
    else
        cout << str2 << endl << str1 << endl;

    return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main(){
    string data;
    int pos1, pos2;

    cout << "Digite um dia no d/m/a: ";
    cin >> data;

    pos1 = data.find_first_of('/');
    pos2 = data.find_last_of('/');
    cout << "Dia: " << data.substr(0,pos1) << endl;
    cout << "Mes: " << data.substr(pos1+1, pos2-pos1-1) << endl;
    cout << "Ano: " << data.substr(pos2+1) << endl;

    return 0;
}
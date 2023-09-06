#include <iostream>
#include <string>

using namespace std;

int main(){
    string data;
    int pos1, pos2, dia, mes, ano;

    // a)
    cout << "Digite um dia no d/m/a: ";
    cin >> data;

    pos1 = data.find_first_of('/');
    pos2 = data.find_last_of('/');

    // b)
    dia = stoi(data.substr(0,pos1));
    mes = stoi(data.substr(pos1+1, pos2-pos1-1));
    ano = stoi(data.substr(pos2+1));
    cout << "Dia: " << dia << endl;
    cout << "Mes: " << mes << endl;
    cout << "Ano: " << ano << endl;

    if (dia>=1){
        switch (mes){
            case 1:
                if(dia<=31)
                    cout << "Data valida" << endl;
                else
                    cout << "Data invalida" << endl;
                break;
            case 2:
                if(dia<=28)
                    cout << "Data valida" << endl;
                else if (dia == 29 && (( ano % 4 == 0 && ano % 100 != 0 ) || ano % 400 == 0))
                    cout << "Data valida" << endl;
                else
                    cout << "Data invalida" << endl;
                break;
            case 3:
                if(dia<=31)
                    cout << "Data valida" << endl;
                else
                    cout << "Data invalida" << endl;
                break;
            case 4:
                if(dia<=30)
                    cout << "Data valida" << endl;
                else
                    cout << "Data invalida" << endl;
                break;
            case 5:
                if(dia<=31)
                    cout << "Data valida" << endl;
                else
                    cout << "Data invalida" << endl;
                break;
            case 6:
                if(dia<=30)
                    cout << "Data valida" << endl;
                else
                    cout << "Data invalida" << endl;
                break;
            case 7:
            case 8:
                if(dia<=31)
                    cout << "Data valida" << endl;
                else
                    cout << "Data invalida" << endl;
                break;
            case 9:
                if(dia<=30)
                    cout << "Data valida" << endl;
                else
                    cout << "Data invalida" << endl;
                break;
            case 10:
                if(dia<=31)
                    cout << "Data valida" << endl;
                else
                    cout << "Data invalida" << endl;
                break;
            case 11:
                if(dia<=30)
                    cout << "Data valida" << endl;
                else
                    cout << "Data invalida" << endl;
                break;
            case 12:
                if(dia<=31)
                    cout << "Data valida" << endl;
                else
                    cout << "Data invalida" << endl;
                break;
            default:
                cout << "Data invalida" << endl;
                break;
        }
    }else{
        cout << "Data invalida" << endl;
    }


    return 0;
}
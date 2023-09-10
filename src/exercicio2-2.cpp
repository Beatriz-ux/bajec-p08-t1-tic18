#include <iostream>

using namespace std;

#define TAM 250

int main(void){
    srand(time(NULL));

    double temperaturas[TAM];
    double max, min;
    double media = 0.0;

    for(int i = 0; i < TAM; i++){
        temperaturas[i] = 10 + 30.0 * (1.0*rand()/RAND_MAX);

        if (i < 10 || (i >= (TAM/2)-5 && i < (TAM/2)+5) || i >= TAM - 10)
            cout << "Temperatura " << i+1 << ": " << temperaturas[i] << endl;

        if(i == 0)
            max = min = temperaturas[i];

        media += temperaturas[i];

        if(temperaturas[i] > max)
            max = temperaturas[i];
        else if(temperaturas[i] < min)
            min = temperaturas[i];
    }

    media /= TAM;

    cout << endl;
    cout << "#################################" << endl;
    cout << "Temperatura maxima: " << max << endl;
    cout << "Temperatura minima: " << min << endl;
    cout << "Temperatura media: " << media << endl;
    cout << "#################################" << endl;
    cout << endl;

    for(int i = 0; i < TAM; i++){
        if(temperaturas[i] > media)
            temperaturas[i] += 1.0;
        else if(temperaturas[i] < media)
            temperaturas[i] -= 2.0;

        if (i < 10 || (i >= (TAM/2)-5 && i < (TAM/2)+5) || i >= TAM - 10)
            cout << "Temperatura " << i+1 << ": " << temperaturas[i] << endl;
    }

    return 0;
}
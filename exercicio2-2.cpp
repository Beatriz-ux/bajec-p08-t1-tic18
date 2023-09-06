#include <iostream>

using namespace std;

int main(){
    srand(time(NULL));
    double estacaoMet[250], max = 10, min = 40, media = 0;

    // a)
    for (int i=0; i<250; i++){
        // 1 + 30.0*(rand()%100)/3000.0 --> 10 + 30.0*(rand()%3000)/2999.0
        estacaoMet[i] = 10 + 30.0*(rand()%3000)/2999.0;
        
        // b)
        if (estacaoMet[i] > max)
            max = estacaoMet[i];
        if (estacaoMet[i] < min)
            min = estacaoMet[i];

        // c)
        media += estacaoMet[i]/250;
    }
    cout << "Maior temperatura: " << max << endl;
    cout << "Menor temperatura: " << min << endl;
    cout << "Media das temperaturas: " << media << endl;

    // d)
    for (int i=0; i<250; i++){
        if (estacaoMet[i] > media)
            estacaoMet[i]++;
        if (estacaoMet[i] < media)
            estacaoMet[i]-=2;
    }



    return 0;
}
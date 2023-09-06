#include <iostream>
using namespace std;
int main (void)
{
    double temp[2], max=0, min=41, mediaT=0;
    srand(time(NULL));

    for(int i=0; i<2; i++)
    {
        temp[i] = 10 + 30.0 * ((rand() % 3000)/2999.0);
        cout << "Temperatura " << i+1 << ": " << temp[i] << endl;
        mediaT += temp[i];
    }
    for(int i=0; i<2; i++)
    {
        if(max < temp[i])
        {
            max = temp[i];
        }
        if(min > temp[i])
        {
            min = temp[i];
        }
    }
    mediaT /= 2;
    cout << "A maior temperatura foi: " << max << endl;
    cout << "A menor temperatura foi: " << min << endl;
    cout << "A media das temperaturas foi: " << mediaT << endl;
    for(int i=0; i<2; i++)
    {
        if(temp[i] > mediaT)
        {
            temp[i] += 1.5;
        }
        else if(temp[i] < mediaT)
        {
            temp[i] -= 2.0;
        }
        
    }
    for(int i=0;i<2;i++)
    {
        cout << "Nova Temperatura " << i+1 << ": " << temp[i] << endl;
    }

    return 0;
}
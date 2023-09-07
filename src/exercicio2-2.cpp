#include<iostream>
#include<ctime>

int main()
{
    srand(time(0));
    
    float max = 0, med = 0;
    float min = 40;
    float arr[250] = {0};

    //a b c
    for(int i = 0; i < 250; i++)
    {
        arr[i] = (10 + 30 * (rand()% 3000) / 2999.0);

        if(i<10 || i > 239 || ((i > (250/2) - 6) && (i < (250/2) + 5)))
           std::cout << i + 1 << " - " << arr[i] << std::endl;
        
        max < arr[i] ? max = arr[i]: max = max;
        min > arr[i] ? min = arr[i]: min = min;
        med += arr[i];
    }

    med = med / 250;
    std::cout << "A temperatura maxima e: " << max << std::endl;
    std::cout << "A temperatura minima e: " << min << std::endl;
    std::cout << "A temperatura media e: " << med << std::endl;

    //d
    for(int i = 0; i < 250; i++)
    {
        arr[i] > med ? arr[i]++ : (arr[i] < med ? arr[i]-= 2 : arr[i] = arr[i]);
        
        if(i<10 || i > 239 || ((i > (250/2) - 6) && (i < (250/2) + 5)))
            std::cout << i + 1 << " - " << arr[i] << std::endl;
    }

    return 0;
}
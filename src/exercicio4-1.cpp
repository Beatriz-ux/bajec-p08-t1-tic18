#include<iostream>
#include<ctime>

int main()
{
    srand(time(0));

    int img[640][480];
    int hist[256] = {0};

    for(int i = 0; i < 640; i++)
    {
        for(int j = 0; j < 480; j++)
        {
            img[i][j] = rand()%256;
            hist[img[i][j]] += 1;
        }
    }

    for(int i = 0; i < 256; i++)
    {
        std::cout << i << " - " << hist[i] << std::endl;
    }

    return 0;
}
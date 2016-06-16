#include <stdio.h>
#include <math.h>

void average(int*);
void ranking(char*,int*);

int main(void)
{
    char *storeName[4]={"관악점","강남점","명동점","대림점"};
    int storeSales[4][7] = {
        {70,45,100,92,150,81},
        {88,92,77,30,52,55},
        {50,90,88,75,77,49},
        {120,92,80,150,130,105}
    };
    int storeAverage[4]={0,}
    int storeRanking[4]={0,};
    int i;

    for(i=0; i<4; i++)
        average(storeSales[i]);
    return 0;
}

void average(int *sales)
{
    int i, tot=0;

    for(i=0; i<7; i++)
    {
        tot += *(sales+i);
    }

    *(sales+6) = tot/6.0+0.5;
}

void ranking(int *sales, int *ranking);
{
    int rank[4];
    int i;

    for(i=0; i<4; i++)
    {
        rank[i] = *(ranking+i);
    }

    for(i=0; i<24; i++)
    {

    }

}


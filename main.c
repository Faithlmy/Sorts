#include<stdio.h>
void main()
{
    int a[10];

    for(int i=0;i<10;++i)
        a[i] = rand()%100+1;
        printf("The randem munbs is: ");
    for(int  i = 0; i<10; ++i)
        printf("%d  ", a[i]);
        printf("\n");

        insort(a, 10);

        printf("input final numbs : ");
        for(int  i = 0; i<10; ++i)
            printf("%d  ", a[i]);
        printf("\n");


}

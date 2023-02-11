#include<stdio.h>
int main()
{
    int marks[10], aggregate=0, percentage, mark=0, i;
    for(i=1; i<=10; i++)
    {
        printf("Marks of sub[%d]= ",i);
        scanf("%d",&marks[i]);
    }

    for(i=1; i<=10; i++)
    {
        aggregate = aggregate + marks[i];

    }
    aggregate = aggregate / 1000;
    percentage = aggregate / 1000 * 100;
    printf("Aggregate:",aggregate);
    printf("Percentage:",percentage);

    return 0;

}

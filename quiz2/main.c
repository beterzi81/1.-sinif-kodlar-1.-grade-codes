#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,a,b;

    printf("a ve b degerini giriniz:\t");
    scanf("%d\t%d",&a,&b);

    switch (a)
    {
    case 1:
        x=100;
        printf("%d",x);
        break;
    default:
        switch (b)
        {
        case 5:
            x=200;
            printf("%d",x);
            break;
        case 6:
            x=300;
            printf("%d",x);
            break;
        default:
            x=400;
            printf("%d",x);
        }
    }
    return 0;
}

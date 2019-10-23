#include <stdio.h>
#include <stdlib.h>

int main()
{     int y=1,x;

for(x=0;x<=10;x++){
    if (x%2!=0)
        continue;
printf("%d: %d\n",y,x);
y++;
}
    return 0;
}

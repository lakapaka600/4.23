
#include <stdio.h>
#include <math.h>

int main(void) {

   int y;
   int x=0;
    printf("inserisci y:");
    scanf("%d",&y);
    if(y>-1) {
        while(pow(x,x)<y) {
            x++;
    }
        printf("%d",x);
    }

    return 0;
}

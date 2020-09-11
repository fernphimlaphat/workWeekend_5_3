#include <stdio.h>
#include <stdlib.h> 
#include<math.h>

int binary(int x,int i) {
	
    
    int f[100];
    i = 0; 
    int j;
    do {
        f[i] = x % 2;
        x = x / 2;
        i++;
    } while (x > 0);

    printf("binary is ");
    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", f[j]);
    }

    return x;


}

double sqrX(int x) {
    return sqrt(x);

}

int powerX(int x) {
    return pow(x, 2);
}

int OddEvern(int x) {

    return x % 2;
}


int main(){

    int x,i = 0;
    scanf_s("%d",&x);
    if (x >=0 && x < 32600 ) {
        binary(x, i);


        printf("\n");

        printf("sqrt %d = %.2lf",x, sqrX(x));
        printf("\n");

        printf("%d^2 = %d",x, powerX(x));

        printf("\n");

        OddEvern(x);
        if (OddEvern(x) == 0)
        {
            printf("%d is Even", x);
        }
        else
        {
            if (OddEvern(x) == 1)
                printf("%d is Odd",x);

            else
            {
                printf("Notfound");
            }
        }
    }

    else
    {
        printf("ERROR");
    }

}
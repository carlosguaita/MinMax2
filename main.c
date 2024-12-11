#include <stdio.h>



int main (int argc, char *argv[]) {

    float num,max,min;
    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese el numero %d: ",i+1);
        scanf("%f",&num);
        if (i==0)
        {
            max=num;
            min=num;
        }
        if (num<min)
        {
            min=num;
        }
        if (num>=max)
        {
            max=num;
        }
    }
    printf("EL numero mayor es: %.2f\n",max);
    printf("EL numero meno es: %.2f\n",min);
    return 0;
}
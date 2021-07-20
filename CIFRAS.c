
#include <stdio.h>
#include <conio.h>
 
int main()
{
    int num,contador=1;
    printf("Esta aplicacion puede calcular y presentar cuantas cifras tiene un determinado valor numerico. Introduce uno: ");
    scanf("%d",&num);
 
    while(num/10>0)
    {
        num=num/10;
        contador++;
    }
    printf("Tiene %u cifras",contador);
    getch();
    return 0;
}
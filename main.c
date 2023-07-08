#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Lutfen bir sayi giriniz") ;
    scanf("%d",&x) ;

    if(x%2==0)
    {
    printf("Girdiginiz sayi cift") ;
    }
    if(x%2==1)
    {
    printf("girdiginiz sayi tek") ;
    }



    return 0;
}

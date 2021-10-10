//C program to generate a pin
#include <stdio.h>

int main()
{
    int pin,newpin=0,mod,mod2,new=0;
    printf("Enter the pin: ");
    scanf("%d",&pin);
    while(pin>0){
        mod=pin%10;
        mod=mod+1;
        newpin=newpin*10+mod;
        pin=pin/10;
    }
    while(newpin){
        mod2=newpin%10;
        new=new*10+mod2;
        newpin=newpin/10;
    }
    printf("Output:%d",new);
    return 0;
}


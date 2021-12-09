#include<stdio.h>
void star(int n)
{
    for(int i=0;i<n;i++)printf("*");
}
int main()
{
    for(int i=0;i<10;i++){
        star(i);
        printf("\n");
    }
}


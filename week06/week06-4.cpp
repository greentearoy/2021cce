#include<stdio.h>
int main()
{
	int a,b,c,temp;
	scanf("%d%d%d",&a,&b,&c);
	if(c>a){
		temp=c;
		c=a;
		a=temp;
	}
	if(b>a){
		temp=b;
		b=a;
		a=temp;
	}
	if(b+c<a)printf("Error");
	else if(a*a==b*b+c*c)printf("ª½¨¤");
	else if(a*a<b*b+c*c)printf("¾U¨¤");
	else if(a*a>b*b+c*c)printf("¶w¨¤");
}

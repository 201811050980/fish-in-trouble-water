#include<stdio.h>
int fun1(int a,int b)
{
	int c1,th,hun,ten,unit;
	c1=0;
	th=a/1%10;
	hun=b/1%10;
	ten=a/10%10;
	unit=b/10%10;
	c1=th*1000+hun*100+ten*10+unit*1;
	return (c1);
}

main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=fun1(a,b);
	printf("%d",c);
}


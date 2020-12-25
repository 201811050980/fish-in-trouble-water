#include<stdio.h>
int fun1(int a,int b)
{
	int c1,th,hun,ten,unit;
	c1=0;
	th=a/1%10;
	hun=b/1%10;
	ten=a/10%10;
	unit=b/10%10;
	c1=th*1000+hun*100+ten*100+unit*1;
	return (c1);
}

int fun2(int &a,int &b)
{
	int c2,th,hun,ten,unit;
	c2=0;
	th=a/1%10;
	hun=b/1%10;
	ten=a/10%10;
	unit=b/10%10;
	c2=th*1000+hun*100+ten*100+unit*1;
	return (c2);
}

int fun3(int *pa,int *pb)//指针变量作为函数参量
{
	int c3,th,hun,ten,unit;
	c3=0;
	th=*pa/1%10;
	hun=*pb/1%10;
	ten=*pa/10%10;
	unit=*pb/10%10;
	c3=th*1000+hun*100+ten*100+unit*1;
	return (c3);
}

main()
{
	int a,b,c1,c2,c3,*pa,*pb;
	scanf("%d %d",&a,&b);
	pa=&a;pb=&b;
	c1=fun1(a,b);
	c2=fun2(&a,&b);
	c3=fun3(&a,&b);
	printf("%d",fun1);
	printf("%d",fun2);
	printf("%d",fun3);
}


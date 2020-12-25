#include<stdio.h>
int fun3(int *pa,int *pb)//指针变量作为函数参量
{
	int c3,th,hun,ten,unit;
	c3=0;
	th=*pa/1%10;
	hun=*pb/1%10;
	ten=*pa/10%10;
	unit=*pb/10%10;
	c3=th*1000+hun*100+ten*10+unit*1;
	return (c3);
}

main()
{
	int a,b,*pa,*pb,c;
	scanf("%d %d",&a,&b);
    pa=&a;pb=&b;
	c=fun3(&a,&b);
    
	printf("%d",c);
}

#include<stdio.h>
#include<string.h>
#include<string.h>

void main()
{
	int a;
	a = 10;
	
	printf("&a: %d\n %p\n", &a, &a);
	printf("sizeof(&a): %d\n", sizeof(&a)); // 地址占8个字节， int占4个字节
	
	*(&a) = 200;
	printf("a:%d\n", a);
	int *b;
	b = &a;
	*b = 400;
	printf("a : %d\n", a);

	// 对内存空间可以取别名
	
}

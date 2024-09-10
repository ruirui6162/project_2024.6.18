#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
//struct book
//{
//	char name;
//	float price;
//	char id[20];
//};
//struct stu
//{
//	struct book b;//结构体成员可以是另外一个结构体。
//	char name[20];
//	int age;
//	char id[20];
//}s1,s2;//s1,s2是全局变量
//int main()
//{
//	struct stu s = { {'a',20.0,"123a"}, "安德鲁维京",14,"ad1000000"};//此处s为局部变量。
//	struct stu s1 = { {'b',30.0,"123a4"}, "只因",26,"ad134423224"};
//	struct stu s2 = { {'c',40.0,"1234a5"},"jeff",20,"ad12321"};
//	struct stu* pa = &s;
//	printf("%c\n",s.b.name);
//	printf("%c\n",pa->b.name);
//	printf("%s\n",s.b.id);
//	return 0;
//}
//void print1(struct stu t)
//{
//	printf("%c %f %s %s %d %s\n", t.b.name, t.b.price, t.b.id, t.name, t.age, t.id);
//}
//void print2(struct stu* pa)
//{
//	printf("%c %f %s %s %d %s", pa->b.name, pa->b.price, pa->b.id, pa->name, pa->age, pa->id);
//}
//int main()
//{
//	struct stu s = { {'a',20.0,"123a"}, "安德鲁维京",14,"ad1000000" };//此处s为局部变量。
//	struct stu s1 = { {'b',30.0,"123a4"}, "只因",26,"ad134423224" };
//	struct stu s2 = { {'c',40.0,"1234a5"},"jeff",20,"ad12321" };
//	struct stu* pa = &s;
//	print1(s);//传递结构体s(传值调用)。
//	print2(&s);//传递结构体s的地址(传址调用)。
//	//传址调用较好，传递地址相比传递整个结构体需要的内存小，且效率高，同时可以改变s的值。 
//	return 0;
//}
//int add(int x, int y)
//{
//	int c = 0;
//	c = x + y;
//	return c;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	add(a, b);//函数传参一般是反着传的，反着进栈有利于顺着出栈。
//	return 0;
//}
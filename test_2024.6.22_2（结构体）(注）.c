#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1，结构体可以让c语言创建新类型
//struct stu
//{
//	char name[10];
//	int age;
//	float score;
//};
//int main()
//{
//	struct stu s = { "jeef",20,100.0 };//s是结构体变量
//	printf("1: %s %d %f\n",s.name,s.age,s.score);
//	struct stu* pa = &s;
//	printf("2: %s %d %f\n", (*pa).name, (*pa).age, (*pa).score);//.为找到结构体成员并访问，（）表示先解引用后访问，即语法优先级
//	printf("3: %s %d %f\n", pa->name, pa->age, pa->score);//->与（*pa）.同功能，需要注意->左边必须为结构体指针即地址，右边为变量成员名
//	return 0;
//}
//2,practice
//struct book
//{
//	char type[16];
//	int price;
//	float thickness;
//};
//int main()
//{
//	struct book b = { "science fiction",40,2.34 };
//	printf("1: type:%s,price:%d,thickness:%fcm\n ", b.type,b.price,b.thickness);
//	struct book* pa = &b;
//	printf("2: type:%s,price:%d,thickness:%fcm\n", (*pa).type, (*pa).price, (*pa).thickness);
//	printf("3: type:%s,price:%d,thickness:%fcm\n", pa->type, pa->price, pa->thickness);
//	return 0;
//}
// 3，关于之前的一点小疑问
//int main()
//{
//	char arr[4] = { '1','3','5'};//加数字跑出来是固定值
//	printf("%d\n", strlen(arr));
//	printf("%d\n", sizeof(arr));
//	return 0;
//}
//int main()
//{
//	char arr[] = { '1','3','5' };//不加数字跑出来是两个值中的一个
//	printf("%d\n", strlen(arr));
//	printf("%d\n", sizeof(arr));
//	return 0;
//	
//}










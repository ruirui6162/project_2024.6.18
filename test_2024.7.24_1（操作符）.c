#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
//int main()
//{
//	int i = 0; int a = 0; int b = 1; int c = 2; int d = 3;
//	i = a++ && b++ && d++;
//	printf("%d %d %d %d\n", a, b, c, d);//&&ֻҪ�����ټ�0�㲻������ִ�У�������ʽҲ�����㡣
//	return 0;
//}
//int main()
//{
//	int i = 0; int a = 1; int b = 1; int c = 2; int d = 3;
//	i = a++ || b++ || d++;
//	printf("%d %d %d %d\n", a, b, c, d);//||ֻҪ�����漴1�㲻������ִ�У�������ʽҲ�����㡣
//	return 0;
//}
//int main()
//{
//	int a = 3; int b = 4;
//	printf("%d", (a > b ? a : b));
//	return 0;
//}
//int main()
//{
//	int a = 0; int b = 0; int c = 0; int d = 0;
//	printf("%d", (b = a + 3, c = b + 4, d = c + 5, d = d + 1));
//	return 0;
//}
//int main()
//{
//	int a = 1; int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("%d", c);
//	return 0;
//} 
//struct book
//{
//	char name[20];
//	char id[20];
//	int price;
//};
//int main()
//{
//	struct book b= { "����","33330000",50 };
//	printf("������%s\n��ţ�%s\n�۸�%d", b.name, b.id, b.price);
//	return 0;
//}
//struct book
//{
//	char name[20];
//	char id[20];
//	int price;
//};
//int main()
//{
//	struct book b = { "����","33330000",50 };
//	struct book * pb = &b;
//	printf("������%s\n��ţ�%s\n�۸�%d", (*pb).name, (*pb).id, (*pb).price);
//	return 0;
//}
//struct book
//{
//	char name[20];
//	char id[20];
//	int price;
//};
//int main()
//{
//	struct book b = { "����","33330000",50 };
//	struct book* pb = &b;
//	printf("������%s\n��ţ�%s\n�۸�%d", pb->name, pb->id, pb->price);
//	return 0;
//}
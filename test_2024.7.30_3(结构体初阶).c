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
//	struct book b;//�ṹ���Ա����������һ���ṹ�塣
//	char name[20];
//	int age;
//	char id[20];
//}s1,s2;//s1,s2��ȫ�ֱ���
//int main()
//{
//	struct stu s = { {'a',20.0,"123a"}, "����³ά��",14,"ad1000000"};//�˴�sΪ�ֲ�������
//	struct stu s1 = { {'b',30.0,"123a4"}, "ֻ��",26,"ad134423224"};
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
//	struct stu s = { {'a',20.0,"123a"}, "����³ά��",14,"ad1000000" };//�˴�sΪ�ֲ�������
//	struct stu s1 = { {'b',30.0,"123a4"}, "ֻ��",26,"ad134423224" };
//	struct stu s2 = { {'c',40.0,"1234a5"},"jeff",20,"ad12321" };
//	struct stu* pa = &s;
//	print1(s);//���ݽṹ��s(��ֵ����)��
//	print2(&s);//���ݽṹ��s�ĵ�ַ(��ַ����)��
//	//��ַ���ýϺã����ݵ�ַ��ȴ��������ṹ����Ҫ���ڴ�С����Ч�ʸߣ�ͬʱ���Ըı�s��ֵ�� 
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
//	add(a, b);//��������һ���Ƿ��Ŵ��ģ����Ž�ջ������˳�ų�ջ��
//	return 0;
//}
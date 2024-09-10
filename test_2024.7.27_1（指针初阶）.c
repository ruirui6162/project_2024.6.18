#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
//1,指针类型的意义:
      //指针类型决定了：指针解引用的权限有多大。
      //指针类型决定了：指针走一步能走多远（步长）。
//int main()
//{
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;//此处经解引用后a的四个字节全部变为00
//	char* pa = &a;
//	*pa = 0;//此处解引用后a的四个字节只有一个变为00，其余均不变，即char类型指针只有一个字节的访问权限。
//	return 0;
//}
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    //int* pa = arr;
//    //*pa = 0;//此处int只能访问四个字节，即只能改掉第一个元素，其余均不变。
//    long long* pa = arr;
//    *pa = 0;//此处long long为八个字节，能访问八个字节，即可以改掉前两个元素。
//    return 0;
//}
//int main()
//{
//    int arr[10] = { 0 };
//    int* pa = arr;
//    long long* pb = arr;
//    printf("%p\n", pa);
//    printf("%p\n", pa+1);
//    printf("%p\n", pb);
//    printf("%p\n", pb+1);//结果pb与pa地址同，都是数组首元素地址，pb+1比pa+1多四个字节，是因为long long能读取八个字节。
//    return 0;
//}  
//int main()
//{
//    int arr[10] = { 0 };
//    char* pa = arr;
//    int i = 0;
//    for (i; i < 10; i++)
//    {
//        *(pa + i) = 1;//若用char类型的指针，一次走一个字节，访问不到位。
//    }
//    return 0;
//}
//int main()
//{
//    int arr[10] = { 0 };
//    int* pa = arr;
//    int i = 0;
//    for (i; i < 10; i++)
//    {
//        *(pa + i) = 1;//若用int类型的指针，一次走四个字节，可以访问到位。
//    }
//    return 0;
//}
//2,野指针：
//  成因:(1),指针未初始化：
//int main()
//{
//    int* pa;//此处pa就是一个野指针。
//    return 0;
//}
//       (2),指针越界：
//int main()
//{
//    int arr[10] = { 0 };
//    int* p = arr;
//    int i = 0;
//    for (i; i <= 10; i++)
//    {
//        *p = i;
//        p++;//此处当i=10时，所产生的指针已经越界，为野指针。 
//    }    
//    return 0;
//}
//       (3),指针指向的空间释放：
//int* test()
//{
//    int a = 10;
//    int* pa = &a;
//    return pa;
//}
//int main()
//{
//    test();
//    *pa = 20;
//    return 0;
//}
//    如何避免野指针:
//    (1),初始化指针(不知道是什么是初始化为空指针):
//int main()
//{
//    int a = 0;
//    int* p = NULL;
//    int* pa = &a;
//    //C语言本省不会检查数组的越界行为，即需要我们留意控制。
//}
//    (2),指针使用之前要检查其有效性：
//int main()
//{
//    int* p = NULL;
//    *p = 10;//空指针地址是不属于用户的，不能使用。
//    if (p != NULL)
//    {
//        *p = 10;
//    }
//
//}
 
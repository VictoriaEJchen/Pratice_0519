// MY birth.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

int main() {
    //int sum = 0;
	//method1
	//Sense:寫一個for迴圈，該迴圈會跑100次，並且設置一個參數，把每次迴圈的值累加起來
	//for (int i = 1; i <= 100; i++) {
	//  sum = sum + i;  //sum(1) = 0+1 , sum(3) = 1+2
	//}
		
	//method2
	//梯形公式 = (上底 + 下底) * 高 / 2 => (上底 + 下底) /2       * 高
	//int sum = (1 + 100) * 100 / 2;
	//3加到50
	//int sum2 = (3 + 50)*(50 - 3 + 1) / 2;

	//method3
	//設計一個function來完成1+到100



	return 1;
}




//
//int main() {
//	int sum = 0;
//	for (int i = 3; i <= 50; i++) {
//
//		sum = sum + i;
//	}
//
//}










//int main()
//{
//	int a;
//	printf("");
//		scanf_s("%d" ,&a);
//		if (a % 2 == 0) {
//			printf("%d is the multiple of 2", a);
//		//123
//		}
//		else { printf("%d is not the multiple of 2", a); }
//		system("pause");
//    return 0;
//}
//int swap(int *parameter1, int *parameter2);

//int main() {
//
//	int a(0);
//	int b(0);
//	printf("please key in the fist one");
//	scanf_s("%d", &a); //5
//	printf("please key in the second one");
//	scanf_s("%d", &b); // 8
//

//	//swap(&a, &b);// a = 5 ,b = 8
//
//
//	//printf("a:%d\n", a);
//	//printf("b:%d\n", b);
//
//	printf("a = %d , b = %d \n", a, b);
//
//	system("pause");
//	return 0;
//}


//int swap(int *parameter1, int *parameter2) {
//	int temp = *parameter1;
//	*parameter1 = *parameter2;
//	*parameter2 = temp;
//
//	return 1;
//}



//int swap_shit(int *MAX, int*Harbie);
//
//int main() {
//
//	int k[5] = {5,3,1,9,7};// int k[5] =>int k[0],k[1],k[2],k[3],k[4]
//
//	printf("Before==============\n");
//	for (int i = 0; i < 5; i++) {
//		printf("%d ,", k[i]);
//	}
//
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0;j < 4; j++) {
//			if (k[j] > k[j + 1]) {
//				swap_shit(&k[j], &k[j + 1]);
//			}
//		}
//	}
//
//	printf("\nAfter===============\n");
//	for (int i = 0; i < 5; i++) {
//
//		printf("%d ,", k[i]);
//	}
//
//	/*int a, b;
//	printf("fill up the first report to Max");
//	scanf_s("%d", &a);
//	printf("fill up the second report to Harbie");
//	scanf_s("%d", &b);*/
//	//swap_shit(&a, &b);
//	//printf("Max= %d, Harbie=%d", a, b);
//
//	system("pause");
//
//	return 0;
//
//}
//
//int swap_shit(int*Max, int*Harbie) {
//	int temp = *Max;
//	*Max = *Harbie;
//	*Harbie = temp;
//
//
//	return 0;
//
//
//}
//
//
//
//

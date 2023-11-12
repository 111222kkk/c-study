#define _CRT_SECURE_NO_WARNINGS
////n的阶乘
////1*2*...*n
//#include<stdio.h>
//int main() {
//	long i = 1;
//	long n = 0;
//	long j = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++){ 
//		j = j * i;
//	}
//	printf("%d\n", j);
//	return 0;
//}
//1!+2!+3!+...+10!=
//#include<stdio.h>
//int main() {
//	int jie = 1;
//	int i = 1;
//	int n = 0;
//	int sum = 0;
//	for (n = 1; n <= 10; n++) 
//	{
//		jie = 1;
//		for(i=1;i<=n;i++)
//		{
//			jie = jie * i;
//		}
//		sum = sum + jie;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int n = 0;
//	int p = 1;
//	int i = 1;
//	for (n = 1; n <= 10; n++) {
//		i = i * n;
//		p = p + i;
//	}
//	printf("%d\n", p);
//	return 0;
//}
//在一个有序数组中查找具体的某个数字n(二分查找）
//#include<stdio.h>
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	int left = 0;
//	while (left <= right) 
//	{
//		//int mid = (left + (right - left) / 2) / 2;//防止数据溢出
//		int mid = (left + right) / 2;
//		if (arr[mid] < n) 
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > n) 
//		{
//			right = mid - 1;
//		}
//		else {
//			printf("这个数的下标是：%d\n",mid);
//			break;
//		}
//	}
//	if (left > right) {
//		printf("lll");
//	}
//	return 1;
//}
//#include<stdio.h>
//int main(){
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int r = sizeof(arr) / sizeof(arr[0]);
//	printf("%d",r);
//	return 0;
//	}
//字符变换
//#include<stdio.h>
//#include<windows.h>
//#include<stdlib.h>
//int main(){
//	char arr1[] = {"H e l l o L W Y ."};
//	char arr2[] = {"#################" };
//	int left = 0;
//	int right = strlen(arr1)-1;
//	while (left <= right) 
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//			left++;
//			right--;
//	}
//	printf("%s\n",arr2);
//	return 0;
//	}
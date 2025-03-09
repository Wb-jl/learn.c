//题目：在不创建第三个变量的条件下，实现两个数的交换 位操作符应用
//#include<stdio.h>
//int main() {
//	int a, b;
//	scanf_s("%d%d", &a, &b);
//	printf("a=%d,b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}

//
//输入NxM矩阵，矩阵元素均为整数，计算其中大于零的元素之和。
//输入描述：
//第一行为N M(N: 矩阵行数；M: 矩阵列数, 且M, N <= 10)，接下来的N行为矩阵各行。
//输出描述：
//一行，其中大于零的元素之和。
//
//
//#include<stdio.h>
//int main() {
//	int n, m;
//	int q;
//	scanf_s("%d %d", &n, &m);
//	q = n * m;
//	m = 0;
//	for (int i = 0; i < q; i++) {
//		scanf_s("%d", &n);
//		if (n >= 0) m += n;
//		}
//	printf("The sum of all positive integers in the number you entered is:%d", m);
//	return 0;
//}

//小乐乐在课上学习了二进制八进制与十六进制后，对进制转换产生了浓厚的兴趣。因为他的幸运数字是6，所以他想知道一个数表示为六进制后的结果。请你帮助他解决这个问题。
//
//输入描述：
//输入一个正整数n(1 ≤ n ≤ 109)
//
//输出描述：
//输出一行，为正整数n表示为六进制的结果
//
//#include<stdio.h>
//int a=0;
//int exchange(int n) {
//	if (n < 6) return a=a+n;
//	a = n % 6 + exchange(n / 6) * 10;
//	return a;
//}
//int main() {
//	int n;
//	scanf_s("%d", &n);
//	printf("%d",exchange(n));
//	return 0;
//}



//KiKi有一个矩阵，他想知道转置后的矩阵（将矩阵的行列互换得到的新矩阵称为转置矩阵），请编程帮他解答。
//
//输入描述：
//第一行包含两个整数n和m，表示一个矩阵包含n行m列，用空格分隔。(1≤n≤10, 1≤m≤10)
//
//从2到n + 1行，每行输入m个整数（范围 - 231~231 - 1），用空格分隔，共输入n * m个数，表示第一个矩阵中的元素。
//
//输出描述：
//输出m行n列，为矩阵转置后的结果。每个数后面有一个空格。
//
//#include<stdio.h>
//int main() {
//	int n, m;
//	scanf_s("%d %d", &n, &m);
//	int arr[110][110];
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			scanf_s("%d", &arr[j][i]);
//		}
//	}
//	printf("转置矩阵：\n");
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<iostream>
//#include<time.h>
//
//using namespace std;
//#define RAND_MIN 0x3
//#define RAND_MAX 10
//
////大整数随机数（奇数）
//int* BigRand()
//{
//	int bits = 120;//设置120个比特位长的数
//	int bigInt[120] = { 0 };
//	bigInt[0] = 1, bigInt[119] = 1;//设置第一位和最后一位为1，最后一位保证奇数，第一位保证存在
//	for (int i = 1; i < bits - 1; i++) {
//		bigInt[i] = rand() % 2;
//	}
//	return bigInt;
//}
//
//
//int main()
//{
//	srand((unsigned(time(NULL))));//srand调用time()产生随机数种子
//	for (int i = 0; i < 10; i++) {
//		int randNum = 0;
//		randNum = RAND_MIN + rand() % (RAND_MAX - RAND_MIN + 1);//产生 RAND_MIN ~ RAND_MAX 之间的数
//		cout << randNum << endl;
//	}
//	int* bigData = BigRand();
//}
//
//

//#include<stdio.h>
//#include<iostream>
//#include<time.h>
//
//using namespace std;
//#define RAND_MIN 0x3
//#define RAND_MAX 10
//
////�������������������
//int* BigRand()
//{
//	int bits = 120;//����120������λ������
//	int bigInt[120] = { 0 };
//	bigInt[0] = 1, bigInt[119] = 1;//���õ�һλ�����һλΪ1�����һλ��֤��������һλ��֤����
//	for (int i = 1; i < bits - 1; i++) {
//		bigInt[i] = rand() % 2;
//	}
//	return bigInt;
//}
//
//
//int main()
//{
//	srand((unsigned(time(NULL))));//srand����time()�������������
//	for (int i = 0; i < 10; i++) {
//		int randNum = 0;
//		randNum = RAND_MIN + rand() % (RAND_MAX - RAND_MIN + 1);//���� RAND_MIN ~ RAND_MAX ֮�����
//		cout << randNum << endl;
//	}
//	int* bigData = BigRand();
//}
//
//

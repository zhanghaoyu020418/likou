//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//int main()
//{
//	int nums[4] = { 4,1,4,6 };
//	int numssize = 4;
//
//	int sum = 0;
//	
//	for (int i = 0; i < numssize; i++)
//	{
//		sum ^= nums[i];//找出没有重复复出现的两个数字的异或值
//	}
//
//	int flag = sum & (-sum);  
//	//sum&(-sum)是求出sum的二进制数中最低位为1的数
//
//	int* ans = (int *)malloc(sizeof(int) * 2);
//	ans[0] = 0;
//	ans[1] = 0;
//
//	//将没有重复的两个数用flag分开
//	for (int i = 0; i < numssize; i++)
//	{
//		if ((flag & nums[i]) == 0)  
//			ans[0] ^= nums[i];
//		else
//			ans[1] ^= nums[i];
//	}
//
//	cout << ans[0] << '\t' << ans[1] << endl;
//
//	free(ans);
//
//	return 0;
//}
//
//

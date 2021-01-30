#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//
//	int nums[] = { 0,1,2,2,3,0,4,2 };
//	int numsSize = 8;
//	int val = 2;
//
//	int n = numsSize - 1;
//	for (int i = 0; i <= n; i++)
//	{
//		if ((nums[i] == val) && (nums[n] != val))
//		{
//			int tmp = nums[i];
//			nums[i] = nums[n];
//			nums[n] = tmp;
//		}
//		else if (nums[i] == val)
//		{
//			n--;
//			int tmp = nums[i];
//			nums[i] = nums[n];
//			nums[n] = tmp;
//		}
//		n--;
//	}
//
//	int ans = 0;
//
//	for (int i = numsSize - 1; i >= 0; i--)
//	{
//		if (nums[i] == val)
//			ans++;
//	}
//
//	printf("%d\n", ans);
//	return 0;
//}

/*
给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。

不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。

元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/remove-element
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

int removeElement(int* nums, int numsSize, int val) {
	int k = 0;
	for (int i = 0; i < numsSize; i++)
	{
		if (nums[i] != val)
		{
			nums[k++] = nums[i];
		}
	}
	return k;
}




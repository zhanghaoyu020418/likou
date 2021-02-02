#define _CRT_SECURE_NO_WARNINGS 1
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */


//输入：A = [1, 2, 0, 0], K = 34
//输出：[1, 2, 3, 4]
//解释：1200 + 34 = 1234



int* addToArrayForm(int* A, int ASize, int K, int* returnSize) {
	//思路:将每一位拿出来相加，并放到一个数组中


	int KSize = 0;//算出k的位数
	int Knum = K;
	while (Knum)
	{
		KSize++;
		Knum /= 10;
	}

	int len = KSize > ASize ? KSize : ASize;

	int *ret = (int*)malloc(sizeof(int)* (len + 1));//开辟一个比最大位数多1的空间来存放位数

	int reti = 0;       //开辟数组的下标指引
	int Ai = ASize - 1; //A数组的下标，用于取出A数组中的每一位
	int nextnum = 0;    //记录是否进位
	int num;            //记录两个数字的一位相加

	while (len--)
	{
		int a = 0;
		if (Ai + 1)
		{
			a = A[Ai];
			Ai--;
		}

		num = a + K % 10 + nextnum;
		K /= 10;

		//判断是否进位
		if (num > 9)
		{
			num -= 10;
			nextnum = 1;
		}
		else
		{
			nextnum = 0;
		}

		ret[reti] = num;
		reti++;

	}

	if (nextnum == 1)       //可能两个数最后会进位
	{
		ret[reti] = 1;
		reti++;
	}


	int left = 0, right = reti - 1;//因为是正序放入数组中所以最后要倒置数组

	while (left < right)
	{
		int tmp = ret[left];
		ret[left] = ret[right];
		ret[right] = tmp;
		left++;
		right--;
	}

	*returnSize = reti;
	return ret;
}
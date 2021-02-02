#define _CRT_SECURE_NO_WARNINGS 1
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */


//���룺A = [1, 2, 0, 0], K = 34
//�����[1, 2, 3, 4]
//���ͣ�1200 + 34 = 1234



int* addToArrayForm(int* A, int ASize, int K, int* returnSize) {
	//˼·:��ÿһλ�ó�����ӣ����ŵ�һ��������


	int KSize = 0;//���k��λ��
	int Knum = K;
	while (Knum)
	{
		KSize++;
		Knum /= 10;
	}

	int len = KSize > ASize ? KSize : ASize;

	int *ret = (int*)malloc(sizeof(int)* (len + 1));//����һ�������λ����1�Ŀռ������λ��

	int reti = 0;       //����������±�ָ��
	int Ai = ASize - 1; //A������±꣬����ȡ��A�����е�ÿһλ
	int nextnum = 0;    //��¼�Ƿ��λ
	int num;            //��¼�������ֵ�һλ���

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

		//�ж��Ƿ��λ
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

	if (nextnum == 1)       //���������������λ
	{
		ret[reti] = 1;
		reti++;
	}


	int left = 0, right = reti - 1;//��Ϊ����������������������Ҫ��������

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
#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>

using namespace std;



// Definition for a Node.
class Node {
public:
	int val;
	Node* next;
	Node* random;

	Node(int _val) {
		val = _val;
		next = NULL;
		random = NULL;
	}
};

class Solution {
public:
	Node* copyRandomList(Node* head) {
		if (head == NULL)
			return NULL;
		//1.������㲢���뵽��Ӧ���ĺ���
		Node* cur = head;
		while (cur)
		{
			//����һ���ڵ㣬����ɳ�ʼ���͸��Ƶĸ�ֵ
			Node* copy = (Node*)malloc(sizeof(Node));
			copy->next = NULL;
			copy->random = NULL;
			copy->val = cur->val;

			Node* next = cur->next;
			cur->next = copy;
			copy->next = next;

			cur = next;
		}
		//2.����random�е�ֵ������һ�ݵ�malloc���Ľ�㵱��
		cur = head;
		while (cur)
		{
			Node* copy = cur->next;
			//�ؼ�һ������copyǰ��һ���ڵ��random�ĺ���һ������ַ��copy��ע����cur->randomָ��NULL��ʱ����ʱҪ�����ж�
			if (cur->random)
				copy->random = cur->random->next;
			else
				copy->random = NULL;

			cur = cur->next->next;//ÿ�������������
		}
		//3.�������⿪��
		cur = head;
		Node* copyhead = head->next;//����һ�ݿ�����������ͷ���ĵ�ַ
		while (cur)
		{
			//���������µ�ָ�룬ָ��cur->next��cur->next->next�����Ϳ���ʵ�������ĶϿ�ָ��Ҳ���ҵ���һ�����ĵ�ַ
			Node* copy = cur->next;
			Node* next = copy->next;
			cur->next = next;
			//���cur�յ�ԭ�������β�ͣ�next��>NULL��ʱ�ͻ����������ֱ�����������βָ��NULL
			if (next)
				copy->next = next->next;
			else
				copy->next = NULL;
			cur = next;
		}
		return copyhead;

	}
};










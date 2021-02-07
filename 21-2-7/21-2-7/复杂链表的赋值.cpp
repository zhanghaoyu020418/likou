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
		//1.创建结点并插入到对应结点的后面
		Node* cur = head;
		while (cur)
		{
			//创建一个节点，并完成初始化和复制的赋值
			Node* copy = (Node*)malloc(sizeof(Node));
			copy->next = NULL;
			copy->random = NULL;
			copy->val = cur->val;

			Node* next = cur->next;
			cur->next = copy;
			copy->next = next;

			cur = next;
		}
		//2.处理random中的值，复制一份到malloc处的结点当中
		cur = head;
		while (cur)
		{
			Node* copy = cur->next;
			//关键一步：将copy前面一个节点的random的后面一个结点地址给copy，注意有cur->random指向NULL的时候，这时要单独判断
			if (cur->random)
				copy->random = cur->random->next;
			else
				copy->random = NULL;

			cur = cur->next->next;//每次跳过两个结点
		}
		//3.将链表拆解开来
		cur = head;
		Node* copyhead = head->next;//保留一份拷贝的新链表头结点的地址
		while (cur)
		{
			//开辟两个新的指针，指向cur->next和cur->next->next这样就可以实现连续的断开指向，也能找到下一个结点的地址
			Node* copy = cur->next;
			Node* next = copy->next;
			cur->next = next;
			//如果cur凑到原来链表的尾巴，next—>NULL这时就会崩掉，所以直接让新链表的尾指向NULL
			if (next)
				copy->next = next->next;
			else
				copy->next = NULL;
			cur = next;
		}
		return copyhead;

	}
};










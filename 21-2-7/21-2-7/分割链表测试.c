#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


typedef struct ListNode Node;
typedef struct ListNode ListNode;
struct ListNode {
	int val;
	struct ListNode *next;
};

ListNode* partition(ListNode* pHead, int x) {
	Node* lesshead, *lesstail = NULL;
	Node* greaterhead, *greatertail = NULL;
	lesshead = greaterhead = NULL;
	Node* cur = pHead;
	while (cur)
	{
		if (cur->val < x)
		{
			if (lesshead == NULL)
			{
				lesshead = lesstail = cur;
			}
			else
			{
				lesstail->next = cur;
				lesstail = lesstail->next;
			}
		}
		else
		{
			if (greaterhead == NULL)
			{
				greaterhead = greatertail = cur;
			}
			else
			{
				greatertail->next = cur;
				greatertail = greatertail->next;
			}
		}
		cur = cur->next;
	}
	lesstail->next = greaterhead;
	greatertail->next = NULL;
	return lesshead;
}

int main()
{
	Node*p1 = (Node*)malloc(sizeof(Node));
	Node*p2 = (Node*)malloc(sizeof(Node));
	Node*p3 = (Node*)malloc(sizeof(Node));
	Node*p4 = (Node*)malloc(sizeof(Node));
	Node*p5 = (Node*)malloc(sizeof(Node));
	Node*p6 = (Node*)malloc(sizeof(Node));

	p1->val = 1;
	p2->val = 4;
	p3->val = 3;
	p4->val = 2;
	p5->val = 5;
	p6->val = 2;

	p1->next = p2;
	p2->next = p3;
	p3->next = p4;
	p4->next = p5;
	p5->next = p6;
	p6->next = NULL;

	Node* List = partition(p1, 3);

	Node* cur = List;
	while (cur)
	{
		printf("%d ", cur->val);
		cur = cur->next;
	}

	return 0;
}
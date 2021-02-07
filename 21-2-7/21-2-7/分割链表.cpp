//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//// if(head || head->next)
////     return head;
//// //定义两个哨兵结点准备将链表分成两块，>=5和<5
//// Node* newhead1 , *tail1;
//// tail1->next = newhead1 = NULL;
//// tail1 = newhead1 = (Node*)malloc(sizeof(Node)) ;
//// Node* newhead2 , *tail2;
//// newhead2 = tail2 = NULL;
//// tail2->next = newhead2 = (Node*)malloc(sizeof(Node)) ;
//// Node* cur = head;
//// //遍历链表将链表以x为分界点分为两个部分
//// while(cur)
//// {
////     if(cur->val < x)
////     {
////         tail1->next = cur;
////         tail1 = tail1->next;
////     }
////     else
////     {
////         tail2->next = cur;
////         tail2 = tail2->next;
////     }
////     cur = cur->next;
//// }
//
//// tail1->next = newhead2->next;
//// tail2->next = NULL;    
//
//// Node* realhead = newhead1->next;
//// free(newhead1);
//// free(newhead2);
//// return realhead;
//
//typedef struct ListNode Node;
//struct ListNode {
//	int val;
//	struct ListNode *next;
//};
//
//typedef struct ListNode Node;
//struct ListNode* partition(struct ListNode* head, int x) {
//	Node* lesshead, *lesstail;
//	lesshead = lesstail = (Node*)malloc(sizeof(Node));
//	Node* greaterhead, *greatertail;
//	greaterhead = greatertail = (Node*)malloc(sizeof(Node));
//	greaterhead->next = lesshead->next = NULL;
//
//	Node* cur = head;
//	while (cur)
//	{
//		if (cur->val < x)
//		{
//			lesstail->next = cur;
//			lesstail = lesstail->next;
//		}
//		else
//		{
//			greatertail->next = cur;
//			greatertail = greatertail->next;
//		}
//		cur = cur->next;
//	}
//
//
//	lesstail->next = greaterhead->next;
//	greatertail->next = NULL;
//
//	return lesshead->next;
//}
//
//
//
////int main()
////{
////	Node*p1 = (Node*)malloc(sizeof(Node));
////	Node*p2 = (Node*)malloc(sizeof(Node));
////	Node*p3 = (Node*)malloc(sizeof(Node));
////	Node*p4 = (Node*)malloc(sizeof(Node));
////	Node*p5 = (Node*)malloc(sizeof(Node));
////	Node*p6 = (Node*)malloc(sizeof(Node));
////
////	p1->val = 1;
////	p2->val = 4;
////	p3->val = 3;
////	p4->val = 2;
////	p5->val = 5;
////	p6->val = 2;
////
////	p1->next = p2;
////	p2->next = p3;
////	p3->next = p4;
////	p4->next = p5;
////	p5->next = p6;
////	p6->next = NULL;
////
////	Node* List = partition(p1, 3);
////
////	Node* cur = List;
////	while (cur)
////	{
////		printf("%d ", cur->val);
////		cur = cur->next;
////	}
////
////	return 0;
////}
//
//
//#include <stdlib.h>
//struct ListNode {
//	int val;
//	struct ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
//class Partition {
//public:
//	ListNode* partition(ListNode* pHead, int x) {
//		ListNode* lesshead, *lesstail;
//		ListNode* greaterhead, *greatertail;
//		lesshead = lesstail = (ListNode*)malloc(sizeof(ListNode));
//		greaterhead = greatertail = (ListNode*)malloc(sizeof(ListNode));
//		lesstail->next = greatertail->next = NULL;
//
//		ListNode* cur = pHead;
//		while (cur)
//		{
//			if (cur->val < x)
//			{
//				lesstail->next = cur;
//				lesstail = lesstail->next;
//			}
//			else
//			{
//				greatertail->next = cur;
//				greatertail = greatertail->next;
//			}
//			cur = cur->next;
//		}
//		lesstail->next = greaterhead->next;
//		greatertail->next = NULL;
//		ListNode* realhead = lesshead->next;
//		return realhead;
//	}
//};
//
//

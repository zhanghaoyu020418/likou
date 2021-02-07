//#include <iostream>
//using namespace std;
//
////Definition for singly-linked list.
//struct ListNode {
//     int val;
//   struct ListNode *next;
//};
// 
//
// //带环的链表不能遍历，这样会死循环
// //这题可以用快慢指针
//typedef struct ListNode Node;
//bool hasCycle(struct ListNode *head) {
//	//如果head为空或者只有一个节点接直接返回false
//	if (head == NULL || head->next == NULL)
//		return false;
//	//定义快慢指针，且开始指向的位置不同
//	Node* fast = head->next;
//	Node* slow = head;
//	//因为快慢指针走的步长不同所以如果是带环链表，fast指针一定会赶上slow指针，
//	//如果链表不带环，则fasth或fast->next指针会为NULL，就返回false
//	//如果fast==slow说明已经赶上，那么就返回true
//	while (fast != slow)
//	{
//		if (fast == NULL || fast->next == NULL)
//			return false;
//		fast = fast->next->next;
//		slow = slow->next;
//	}
//	return true;
//}
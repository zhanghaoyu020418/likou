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
// //�����������ܱ�������������ѭ��
// //��������ÿ���ָ��
//typedef struct ListNode Node;
//bool hasCycle(struct ListNode *head) {
//	//���headΪ�ջ���ֻ��һ���ڵ��ֱ�ӷ���false
//	if (head == NULL || head->next == NULL)
//		return false;
//	//�������ָ�룬�ҿ�ʼָ���λ�ò�ͬ
//	Node* fast = head->next;
//	Node* slow = head;
//	//��Ϊ����ָ���ߵĲ�����ͬ��������Ǵ�������fastָ��һ�������slowָ�룬
//	//���������������fasth��fast->nextָ���ΪNULL���ͷ���false
//	//���fast==slow˵���Ѿ����ϣ���ô�ͷ���true
//	while (fast != slow)
//	{
//		if (fast == NULL || fast->next == NULL)
//			return false;
//		fast = fast->next->next;
//		slow = slow->next;
//	}
//	return true;
//}
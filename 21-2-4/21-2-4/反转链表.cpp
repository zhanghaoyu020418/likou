#define _CRT_SECURE_NO_WARNINGS 1
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

typedef struct ListNode Node;
struct ListNode* reverseList(struct ListNode* head) {
	//���ͷָ��Ϊ�ջ���ͷָ��ָ��գ�ֱ�ӷ���head����
	if (head == NULL || head->next == NULL)
		return head;
	//prevָ��NULL������ǰһ��λ�õ�ָ�룬������������ָ��ָ��
	Node *prev = NULL;
	Node *cur = head;
	//��curΪ�յ�ʱ��˵�������Ѿ�������һ����
	while (cur)
	{
		//��һ��nextָ�뱣��cur��һ��λ�ã���Ϊcur�����Ժ�ָ��ı��ˣ�������Ҫ��һ��������ָ��
		Node *next = cur->next;
		//ʵ������
		cur->next = prev;
		//ʵ�ֵ���������
		prev = cur
			cur = next;

	}
	//��󷵻�prevָ�룬����ԭ�������β�ͣ���Ϊ���ã��������µ������ͷ��
	return prev;
}


/*-------------------------------------*/
struct ListNode* reverseList(struct ListNode* head) {

	//ͷ�巨
	struct ListNode* newhead = NULL;
	struct ListNode* cur = head;

	while (cur)
	{
		//����ԭ��cur��λ��
		struct ListNode* next = cur->next;
		//ͷ��
		cur->next = newhead;
		newhead = cur;
		//�ٷ��ػ�ȥԭ����������ȡ�µĽ��
		cur = next;

		return newhead;
	}
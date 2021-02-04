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
	//如果头指针为空或者头指针指向空，直接返回head即可
	if (head == NULL || head->next == NULL)
		return head;
	//prev指向NULL，保留前一个位置的指针，这样方便逆置指针指向
	Node *prev = NULL;
	Node *cur = head;
	//当cur为空的时候，说明链表已经遍历过一遍了
	while (cur)
	{
		//用一个next指针保留cur下一个位置，因为cur逆置以后指向改变了，所以需要有一个保留的指针
		Node *next = cur->next;
		//实现逆置
		cur->next = prev;
		//实现迭代往后走
		prev = cur
			cur = next;

	}
	//最后返回prev指针，这是原来链表的尾巴，因为逆置，所以是新的链表的头部
	return prev;
}


/*-------------------------------------*/
struct ListNode* reverseList(struct ListNode* head) {

	//头插法
	struct ListNode* newhead = NULL;
	struct ListNode* cur = head;

	while (cur)
	{
		//保留原来cur的位置
		struct ListNode* next = cur->next;
		//头插
		cur->next = newhead;
		newhead = cur;
		//再返回回去原来的链表，获取新的结点
		cur = next;

		return newhead;
	}
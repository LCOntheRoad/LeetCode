/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/************************************************************************/
/* 这题很简单                                                           */
/************************************************************************/
class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
		ListNode *temp1,*temp2;
		ListNode *result,*temp;
		result=temp=new ListNode(0);
		temp1 = l1;
		temp2 = l2;
		int digit,count=0;
		while (temp1 !=NULL && temp2!=NULL)
		{
			digit = temp2->val + temp1->val+count;
			count = digit/10;
			digit = digit%10;
			temp->next = new ListNode(digit);
			temp = temp->next;
			temp1=temp1->next;
			temp2=temp2->next;


		}
		while (temp1!=NULL)
		{
			digit = temp1->val+count;
			count = digit/10;
			digit = digit%10;
			temp->next = new ListNode(digit);
			temp = temp->next;
			temp1=temp1->next;
		}
		while (temp2!=NULL)
		{
			digit = temp2->val+count;
			count = digit/10;
			digit = digit%10;
			temp->next = new ListNode(digit);
			temp = temp->next;
			temp2=temp2->next;
		}
		if(count!=0)
		{
			temp->next = new ListNode(count);
			temp = temp->next;
		}

		result = result->next;
		return result;
        
    }
};
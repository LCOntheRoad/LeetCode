/************************************************************************/
/* 双指针即可解决                                                       */
/************************************************************************/
  struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		ListNode *myA=headA;
		ListNode *myB=headB;
		ListNode *res=NULL;
		int lenA=0,lenB=0;
		if(NULL == headB ||NULL == headA)
			return res;
		while (myA!=NULL)
		{
			lenA++;
			myA=myA->next;
		}
		while (myB!=NULL)
		{
			lenB++;
			myB=myB->next;
		}
		myA=headA;
		myB=headB;
		int temp ;
		if (lenA>=lenB)
		{
			temp = lenA -lenB;
			while (temp)
			{
				myA=myA->next;
				temp--;
			}
			while (myA!=myB)
			{
				myA=myA->next;
				myB=myB->next;
			}
			res = myA;

		}else
		{
			temp = lenB -lenA;
			while (temp)
			{
				myB=myB->next;
				temp--;
			}
			while (myA!=myB)
			{
				myA=myA->next;
				myB=myB->next;
			}
			res = myA;

		}
		return res;

        
    }
};
class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        if(head==NULL || head->next==NULL) return head;
        ListNode *helper = new ListNode(-100000);
        ListNode *ret=head;
        while(ret)
        {
            ListNode *next=ret->next;
            if(ret->val!=helper->val)
            {
                helper->next=ret;
                helper=ret;//将helper指新链表的尾结点
                helper->next=NULL;//尾指向空，因为后面的结点有可能被删去了，它不知道下一个指向谁
            }
            else delete ret;
            ret=next;
        }
        return head;
    }
};
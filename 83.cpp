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
                helper=ret;//��helperָ�������β���
                helper->next=NULL;//βָ��գ���Ϊ����Ľ���п��ܱ�ɾȥ�ˣ�����֪����һ��ָ��˭
            }
            else delete ret;
            ret=next;
        }
        return head;
    }
};
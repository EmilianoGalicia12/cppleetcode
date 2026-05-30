#include <iostream>
#include <string>

using namespace std;

//tiempo resuelto: 1:00 hora
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
string valor(ListNode* aux, string& a);

int main()
{
    //ListNode* l1 = new ListNode(2, new ListNode(4, new ListNode(3)));
    ListNode* l1 = new ListNode(2, new ListNode(4, new ListNode(9)));
    //ListNode* l1 = new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9)))))));
    //ListNode* l2 = new ListNode(5, new ListNode(6, new ListNode(4)));
    //ListNode* l2 = new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9))));
    ListNode* l2 = new ListNode(5, new ListNode(6, new ListNode(4, new ListNode(9))));
    ListNode* l3 = new ListNode();
    l3 = addTwoNumbers(l1,l2);
    while (l3 != nullptr)
    {
        cout<<l3->val<<" ";
        l3 = l3->next;
    }
    
    return 0;
}

/*
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.
Example 1:
2 ---- 4 ---- 3
5 ---- 6 ---- 4
7 ---- 0 ---- 8

Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.

Example 2:

Input: l1 = [0], l2 = [0]
Output: [0]
Example 3:

Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]
*/

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
{
    ListNode* l3;
    ListNode* ais1 = new ListNode(0);
    ListNode* ass = ais1;
    string li1 ="";
    string li2 ="";
    string li3 ="";
    int s1,s2,r;
    li1 = valor(l1,li1);
    li2 = valor(l2,li2);
    s1=stoi(li1);
    s2=stoi(li2);
    r = s1+s2;
    li3 = to_string(r);
    for(int i=li3.size()-1;i>=0;i--)
    {
        ass->next = new ListNode(li3[i]-'0');
        ass = ass->next;
    }
    l3 = ais1->next;
    return l3;
}

string valor(ListNode* aux, string& a)
{
    if(aux->next == nullptr){
        return a.append(to_string(aux->val));
    }
    valor(aux->next,a);
    a.append(to_string(aux->val));

    
    return a;
}
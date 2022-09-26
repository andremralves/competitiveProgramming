#include <bits/stdc++.h>
#include <new>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode():  val(0), next(nullptr) {}
    ListNode(int x):  val(x), next(nullptr) {}
    ListNode(int x, ListNode *next):  val(x), next(next) {}
};

ListNode *solve(ListNode *a, ListNode *b) {
    ListNode *head = nullptr;
    ListNode *tail = nullptr;

    while (a != nullptr || b != nullptr)
    {
        if(head == nullptr) {
            head = new ListNode();
            if(a == nullptr) {
                head->val = b->val; 
                b = b->next;
                tail = head;
            } else if(b == nullptr) {
                head->val = a->val; 
                a = a->next;
                tail = head;
            } else if(a->val < b->val) {
                head->val = a->val; 
                a = a->next;
                tail = head;
            } else {
                head->val = b->val; 
                b = b->next;
                tail = head;
            }
        } else {
            tail->next = new ListNode();
            tail = tail->next;
            if(a == nullptr) {
                tail->val = b->val; 
                b = b->next;
            } else if(b == nullptr) {
                tail->val = a->val; 
                a = a->next;
            } else if(a->val < b->val) {
                tail->val = a->val; 
                a = a->next;
            } else {
                tail->val = b->val; 
                b = b->next;
            }
        }
    }

    return head;
}

int main (int argc, char *argv[])
{
    ListNode *listA = new ListNode(1);
    listA->next = new ListNode(2);
    listA->next->next = new ListNode(4);
    ListNode *listB = new ListNode(1);
    listB->next = new ListNode(3);
    listB->next->next = new ListNode(4);
    ListNode *newList = solve(listA, listB);
    while (newList != nullptr)
    {
        cout<<newList->val<<endl;
        newList = newList->next;
    }
    return 0;
}

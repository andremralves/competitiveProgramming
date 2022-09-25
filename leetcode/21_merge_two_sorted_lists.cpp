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
    ListNode *head = new ListNode();
    ListNode *tail = head;

    while (a != nullptr || b != nullptr)
    {

        if(a->val < b->val) {
            tail->val = a->val;
            tail->next = new ListNode(b->val);
        } else {
            tail->val = b->val;
            tail->next = new ListNode(a->val);
        }
        a = a->next;
        b = b->next;
        if(a != nullptr and b != nullptr) {
            tail->next->next = new ListNode();
        }
        tail = tail->next->next;
    }

    if(a == nullptr) {
        tail = b;
    } else {
        tail = a;
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

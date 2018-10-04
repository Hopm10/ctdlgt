#include <iostream>
using namespace std;

class Node {
    public:
		int value;
		Node *pnext;
		Node *prev;
};

Node *head = NULL;
Node *tail = NULL;

Node *createNode (int x){
    Node *p = new Node();
    p->value = x;
    return p;
}

void add_Node_Last (Node *p){
    if (head == NULL){
        head = tail = p;
    }else {
        tail->pnext = p;
        p->prev = tail;
        tail = p;
    }
}

Node *xoa_i(){
    for (Node *k = head->pnext; k != NULL; k = k->pnext){
        int tong;
        tong = k->prev->value + k->value + k->pnext->value;
        if (tong % 2 == 0){
            Node *p = k;
            k->pnext->prev = k->prev;
            k->prev->pnext = k->pnext;
            delete p;
        }
    }
    return head;
}

void xuatds (){
    for (Node*k = head; k != NULL; k = k->pnext){
        cout<< k->value<< " ";
    }
}

int main(){
    int n;
    cin>> n;
    for (int i = 0; i < n; i++){
        int x;
        cin>> x;
        Node * p = createNode(x);
        add_Node_Last(p);
    }
    xoa_i();
    xuatds();
    return 0;
}

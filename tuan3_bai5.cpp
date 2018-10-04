#include<iostream>
#include<String>

using namespace std;

class Node {
public:
    int value;
    Node *pnext;
};

Node *head = NULL;
Node *tail = NULL;

Node *createNode (int x){
    Node *p = new Node();
    p->value = x;
    return p;
}

// them phan tu vao stack
void push (Node *p){
    if (head == NULL){
        head = tail = p;
    }else {
        tail->pnext = p;
        tail = p;
    }
}

// lay phan tu va huy no di
Node  *pop (){
    if (head == NULL){
        return NULL;
    }else {
        for (Node *k = head; k != NULL; k= k->pnext){
            if (k->pnext == tail){
                delete tail;
                k->pnext = NULL;
                tail = k;
            }
        }
    }
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
        string a;
        cin>> a;
        if (a == "push"){
            int x;
            cin>> x;
            Node *p = createNode(x);
            push(p);
        }else {
            pop();
        }
    }
    xuatds();
    return 0;
}

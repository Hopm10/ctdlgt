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

// thêm phần tử vào queue
void enqueue (Node *p){
    if (head == NULL){
        head = tail = p;
    }else {
        tail->pnext = p;
        tail = p;
    }
}

// lấy phần tử và hủy nó khỏi queue----- xóa đầu
Node  *dequeue (){
    if (head == NULL){
        return NULL;
    }else {
        Node *p = head;
        head = head->pnext;
        delete p;
        return NULL;
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
        if (a[0] == 'e'){
            int x;
            cin>> x;
            Node *p = createNode(x);
            enqueue(p);
        }else {
            dequeue();
        }
    }
    xuatds();
    return 0;
}

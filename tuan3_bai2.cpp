#include<iostream>
using namespace std;
class Node {
	public:
	int value;
	Node *pnext;
	Node (){
		value = 0;
		pnext = NULL;
	}
};
Node *head = new Node();
void insert (int p, int x){
    Node *k = new Node ();
    k->value = x;
    if (p == 0){
        k->pnext = head;
        head = k;
    }else {
        int dem = 0;
        for (Node *k = head; k != NULL; k = k->pnext){
            dem ++;
            if (dem == p){          // node k là node trước node cần insert
                Node *g = new Node();
                g->value = x;
                g->pnext = k->pnext;
                k->pnext = g;
                break;
            }
        }
    }
}

void deleteNOde (int p){
    if (p == 0){
        head = head->pnext;
    }else {
        int dem = 0;
        Node *g = new Node();
        for (Node *k = head; k != NULL; k = k->pnext){
            dem ++;
            if (dem == p+1){            // node k là node cần delete
                g->pnext = k->pnext;
                delete(k);
            }
            g = k; // giữ lại node trước node cần xóa
        }
    }
}

void xuatds (){
    for (Node *k = head; k->pnext != NULL; k= k->pnext){
        cout<< k->value<< " ";
    }
}
int main(){
    int n;
    cin>> n;
    for (int i = 0; i < n; i++){
        int p,x;
        string a;
        cin >> a;
        if (a[0] == 'i'){
            cin>>p >> x;
            insert(p, x);
        }else {
            cin>> p;
            deleteNOde(p);
        }
    }
    xuatds();
	return 0;
}

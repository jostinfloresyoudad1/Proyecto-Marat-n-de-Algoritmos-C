#include <iostream>
using namespace std;
struct Nodo{ int val; Nodo* sig; Nodo(int v):val(v),sig(nullptr){} };
int len(Nodo* n){ if(!n) return 0; return 1+len(n->sig); }
int main(){ Nodo* h=new Nodo(1); h->sig=new Nodo(2); h->sig->sig=new Nodo(3); cout<<len(h)<<"
"; return 0; }

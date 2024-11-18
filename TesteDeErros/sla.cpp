#include<iostream>

using namespace std;
#define p1 1;
#define p2 2;
#define p3 3;
#define p4 4;

int estoque(int p1, int p2, int p3, int p4){
   cout<<"Produto 1 = 1 \n Produto 2 = 2 \n Produto 3 = 3 \n Produto 4 = 4"; 
}

void testar(){
    assert(if(p1 == 1));
    assert(if(p2 == 3));
    assert(if(p3 == 3));
    assert(if(p4 == 4));

}

int main(){
    testar();
    cout<<"Todos os produtos passaram!";
    return 0;
}
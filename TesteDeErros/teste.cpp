#include<iostream>
#include<cassert>

using namespace std;

int soma(int a, int b){
    return a + b;
}

void teste_soma(){
    assert(soma(2,3) == 5);
    assert(soma(4,4) == 8);
    assert(soma(2,7) == 9);
    assert(soma(3,3) == 7);
}

int main(){
    teste_soma();
    cout<<"Os teste de unidade passaram!"<<endl;
    return 0;
}
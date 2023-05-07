#include <iostream>
#include "Tree.h"

using namespace std;

int main(){

    Tree* minha_arvore = new Tree();

    cout << "arvore vazia?";
    if (minha_arvore->isEmpty() == true) {
        cout << "Sim\n";
    }
    else {
        cout << "Nao\n";
    }

    minha_arvore->add(20);
    minha_arvore->add(10);
    minha_arvore->add(30);

    cout << "arvore vazia?";
    if (minha_arvore->isEmpty() == true) {
        cout << "Sim\n";
    }
    else cout << "Nao\n";

    cout << "tamanho da arvore = " << minha_arvore->size() << "\n";
    cout << "altura da arvore = " << minha_arvore->height() << "\n\n";

    minha_arvore->add(5);
    minha_arvore->add(15);
    minha_arvore->add(1);
    minha_arvore->add(25);
    minha_arvore->add(35);
    minha_arvore->add(40);

    minha_arvore->transverseInfix();
    minha_arvore->deleteValue(40);
    cout << "\n";

    minha_arvore->transverseInfix();
    minha_arvore->deleteValue(1);
    cout << "\n";

    minha_arvore->transverseInfix();

    //20 � o n� raiz logo n�o � folha
    cout << "\nisLeaf de 20 \n" << minha_arvore->isLeaf(20);

    //35 � um n� folha
    cout << "\nisLeaf de 35 \n" << minha_arvore->isLeaf(35)<< endl;
    

    return 0;
}

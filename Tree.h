#include <iostream>
#include <string>

using namespace std;

#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

class Node
{
    private:
        int data;
        Node* left;
        Node* right;
    public:
        Node* getLeft()
        {
            return left;
        }
        Node* getRight()
        {
            return right;
        }
        int getData()
        {
            return data;
        }
        void setLeft(Node* newNode)
        {
            left = newNode;
        }
        void setRight (Node* newNode)
        {
            right = newNode;
        }
        Node()
        {
            left = NULL;
	        right= NULL;
        }
        Node(int data)
        {
            this-> data= data;
            left = NULL;
            right= NULL;
        }
};
class Tree
{
    private:
        Node* root;
        Node* n;
    public:
        Tree()
        {
            root= NULL;
        }
        void  add( int data);
        void deleteValue(int data );
        void transverseInfix ();
        bool isLeaf(int n);
        int height ();
        int heightAux(Node* root);
        int size ();
        int sizeAux( Node* root);
        bool isEmpty();
        void transverseInfixAux (Node* root);

};

void  Tree::add(int data) 
{
    Node* newNode = new Node(data);
    Node* current = root;
    Node* prev = current;

    if (root == NULL) 
    {
        root = newNode;
    }
    else {
        while ( current != NULL)
        {
            if (current->getData() > data)
            {
                prev = current;
                current = current->getLeft();
            }  
            else 
            {
                prev = current;
                current = current->getRight();
            }
        }
        if ( data < prev->getData())
        {
            prev->setLeft(newNode);
        }
        else 
            prev->setRight(newNode); 
    }
}

void  Tree::deleteValue( int data) 
{
    Node* current= root;
    Node* prev = current;


  
    while ( current->getData() != data)
    {
            if (current->getData() > data)
            {
                prev = current;
                current = current->getLeft();
            }  
            else 
            {
                prev = current;
                current = current->getRight();
            }
    }
    if ( data < prev->getData())
    {
            prev->setLeft(NULL);
    }
    else 
    {
        prev->setRight(NULL); 
    }
    
    delete current;
}

void  Tree::transverseInfix () 
{
   transverseInfixAux(root);
}
void  Tree::transverseInfixAux (Node* root) 
{
    if (root == NULL) {
        return;
    }
    transverseInfixAux(root->getLeft());
    cout << " " << root->getData();
    transverseInfixAux (root->getRight());
}

bool Tree::isLeaf(int n)
{
    Node* current = root;

    while (current->getData()!= n)
    {
        if (current->getData() > n)
            {
                current = current->getLeft();
            }  
            else 
            {
                current = current->getRight();
            }
    }
    return (current->getLeft() == NULL && current->getRight() == NULL);
}

int Tree::size()
{
    return sizeAux(root);
}
int Tree::sizeAux(Node *n)
{
    if (n == NULL)
    {
        return 0;
    }
    else
    {
        return(sizeAux(n->getLeft()) + 1 + sizeAux(n->getRight()));
    }
}

int Tree::height ()
{
    return heightAux(root);
}
int Tree::heightAux (Node* root)
{
    int left;
	int right;
    if(root == NULL)
    {
        return (0);
    }
    else
    {
        int left = heightAux(root->getLeft());
        int right = heightAux(root->getRight());

        if ( left > right)
        {
            return (left + 1);
        }
        else
        {
            return (right + 1);
        }
    }
}
	
bool Tree::isEmpty()
{
    return root == NULL;
}
	

#endif // TREE_H_INCLUDED

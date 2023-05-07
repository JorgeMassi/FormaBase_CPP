#include <iostream>

#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

using namespace std;

class Node
{
private:

    Node* yes;
    Node* no;

public:

    string animal;
    Node* getYes()
    {
        return yes;
    }
    void setYes(Node* yes)
    {
        this->yes=yes;
    }

    Node* getNo()
    {
        return no;
    }
    void setNo(Node* no)
    {
        this->no=no;
    }

    string getElement()
    {
        return animal;
    }
    void setElement(string animal)
    {
        this->animal=animal;
    }

    Node(string animal)
    {
        this->animal=animal;
        this->yes=NULL;
        this->no=NULL;

    }
    Node (string animal, Node* yes, Node* no)
    {
        this->animal=animal;
        this->yes=yes;
        this->no=no;
    }
    virtual string toString() = 0;

    string tipo;

};


class Thought : public Node
{
public:
    string toString()
    {
        return "O animal que pensou e "+ animal +"!";
    }

    Thought(string animal) : Node(animal){

    this->tipo = "Thought";

    };
};

class Decision : public Node
{
public:
     string toString()
    {
        return "o animal que pensou e ou tem "+ animal +"?";
    }
    Decision (string animal): Node(animal){
    this->tipo = "Decision";
    };

};

#endif // NODE_H_INCLUDED

#include <iostream>

#include "Akinator.h"
#include "Node.h"



using namespace std;

int main()
{
    Akinator* jogo = new Akinator();
    jogo->star();
    jogo->guess();
    jogo->getDecisionPath();

}
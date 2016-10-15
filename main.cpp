#include <iostream>

#include "FlexboxEngine/DOM.h"


using namespace std;

int main() {
    FlexBoxEngine::DOM dom;
    FlexBoxEngine::Node n = dom.create();

    FlexBoxEngine::Node n1 = dom.create();

    cout << "Hello, World! My node id=" << n.id << "\n";
    cout << "Hello, World! My node id=" << n1.id << "\n";
    return 0;
}
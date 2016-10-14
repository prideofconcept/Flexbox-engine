#include <iostream>

#include "FlexboxEngine/DOM.h"


using namespace std;

int main() {
    FlexBoxEngine::NodeManager nodeMgr;
    FlexBoxEngine::Node n = nodeMgr.create();

    FlexBoxEngine::Node n1 = nodeMgr.create();

    cout << "Hello, World! My node id=" << n.id << "\n";
    cout << "Hello, World! My node id=" << n1.id << "\n";
    return 0;
}
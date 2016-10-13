#include <iostream>

#include "FlexboxEngine/DOM.h"


using namespace std;

int main() {
    FlexBoxEngine::NodeManager nodeMgr;
    FlexBoxEngine::Node n = nodeMgr.create();

    cout << "Hello, World! My node id=" << n.id << "\n";
    return 0;
}
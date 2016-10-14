//
// Created by MMorrison on 10/13/16.
//

#include "Node.h"
namespace FlexBoxEngine {

    Node NodeManager::create() {

        numNodes++;
        _next.id = numNodes;
        _nodes.push_back(_next);

        return _next;

    }

    bool NodeManager::alive() {
        return true;
    }
}
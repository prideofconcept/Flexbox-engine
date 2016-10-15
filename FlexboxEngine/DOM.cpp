//
// Created by MMorrison on 10/13/16.
//

#include "DOM.h"
#include "Node.h"

namespace FlexBoxEngine {

    Node DOM::create() {

        numNodes++;
        _next.id = numNodes;
        _nodes.push_back(_next);

        return _next;

    }

    bool DOM::alive() {
        return true;
    }
}
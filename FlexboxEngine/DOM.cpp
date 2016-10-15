//
// Created by MMorrison on 10/13/16.
//

#include "DOM.h"

namespace FlexBoxEngine {

    Node DOM::create() {

        numNodes++;
        _next.id = numNodes;
        _nodes.push_back(_next);

        return _next;

    }


    bool DOM::insertFragment(const Node& par, const Node& child) {
        return false;
    }
}
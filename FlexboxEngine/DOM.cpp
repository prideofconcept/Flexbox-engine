//
// Created by MMorrison on 10/13/16.
//

#include "DOM.h"

namespace FlexBoxEngine {

    Node DOM::createNode() {

        numNodes++;
        _next.id = numNodes;
        _nodes.push_back(_next);

        //add default valued component into systems
        DimensionComponent Dim;
        RelationshipComponent Rel;
        dimensions.emplace_back(Dim);
        parents.emplace_back(Rel);

        return _next;

    }


    bool DOM::insertFragment(const Node& par, const Node& child) {
        return false;
    }
}
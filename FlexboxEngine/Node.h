//
// Created by MMorrison on 10/13/16.
//

#ifndef FLEXBOXENGINE_NODE_H
#define FLEXBOXENGINE_NODE_H

#include <vector>

namespace FlexBoxEngine {
    /*
     * Node - holds and id and a list of component-styles.
     * Represents a single DOM element*/
    struct Node {

            int id = 1;

    };

    class NodeManager {

        std::vector<Node> _nodes;
        Node _next;
        int numNodes = 0;

    public:

        Node create() {

            _next.id = numNodes + 1;
            _nodes.push_back(_next);
            numNodes++;

            return _next;

        }

        bool alive() {

            return true;

        }
    };
}

#endif //FLEXBOXENGINE_NODE_H

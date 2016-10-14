//
// Created by MMorrison on 10/13/16.
//

#ifndef FLEXBOXENGINE_NODE_H
#define FLEXBOXENGINE_NODE_H

#include <vector>

namespace FlexBoxEngine {

    /* Node
     * Node - holds an id.
     * Represents a single DOM element*/
    struct Node {

            int id = 1;
    };

    /* NodeManger
     * Controls creation of Nodes */
    class NodeManager {

        std::vector<Node> _nodes;
        Node _next;
        int numNodes = 0;

    public:

        Node create();
        bool alive();
    };
}

#endif //FLEXBOXENGINE_NODE_H

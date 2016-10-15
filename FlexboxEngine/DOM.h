//
// Created by MMorrison on 10/13/16.
//

#ifndef FLEXBOXENGINE_DOM_H
#define FLEXBOXENGINE_DOM_H

#include "Node.h"

namespace FlexBoxEngine {
    /* NodeManger
     * Controls creation of Nodes in DOM
     * Holds information and settings for Nodes */
    class DOM {

	    std::vector<Node> _nodes;


	    Node _next;
	    int numNodes = 0;

    public:

	    Node create();
	    bool insertFragment(const Node& par, const Node& child);

    };
}


#endif //FLEXBOXENGINE_DOM_H

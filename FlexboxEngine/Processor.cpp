//
// Created by MMorrison on 10/15/16.
//
#include <iostream>

#include "Processor.h"
#include "DOM.h"

namespace FlexBoxEngine {

    void Processor::init(FlexBoxEngine::DOM &DOM) {

        _DOM = DOM;

    }

    void Processor::calculateLayout() {
        std::cout << "in caclulate func dimensions size = " << _DOM.dimensions.size() << '\n';
        std::cout << "in caclulate func parents size = " << _DOM.parents.size() << '\n';
    }

    void Processor::setProperty(FlexBoxEngine::Node node, FlexBoxEngine::DimensionComponent component) {
        int i = node.id - 1;

        std::cout << "in setProperty func i =" << i << "\n";

        _DOM.dimensions[i] = component;
    }

}
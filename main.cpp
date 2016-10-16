#include <iostream>

#include "FlexboxEngine/DOM.h"
#include "FlexboxEngine/Processor.h"


using namespace std;

int main() {
    FlexBoxEngine::DOM myDOM;

    FlexBoxEngine::Node root = myDOM.createNode();
    FlexBoxEngine::Node box1 = myDOM.createNode();
    //setWidth(root, 100);
    //setProperty('width', 100);

    FlexBoxEngine::DimensionComponent box1Dimensions;
    box1Dimensions.dimension.height = 100;
    box1Dimensions.dimension.width = 100;

    FlexBoxEngine::Processor layoutEngine;
    layoutEngine.init(myDOM);

    layoutEngine.setProperty(box1, box1Dimensions );
    layoutEngine.calculateLayout();

    return 0;
}
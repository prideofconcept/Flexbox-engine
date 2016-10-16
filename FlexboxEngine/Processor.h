//
// Created by MMorrison on 10/15/16.
//

#ifndef FLEXBOXENGINE_PROCESSOR_H
#define FLEXBOXENGINE_PROCESSOR_H

#include "DOM.h"

namespace FlexBoxEngine {


    class Processor {
	private:
		FlexBoxEngine::DOM _DOM;
    public:
	    void init(FlexBoxEngine::DOM &DOM);

	    void calculateLayout();
		void setProperty(FlexBoxEngine::Node, FlexBoxEngine::DimensionComponent);
    };


}


#endif //FLEXBOXENGINE_PROCESSOR_H

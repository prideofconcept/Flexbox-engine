//
// Created by MMorrison on 10/15/16.
//

#ifndef FLEXBOXENGINE_STYLE_H
#define FLEXBOXENGINE_STYLE_H

#include <cmath>
#include <limits>

namespace FlexBoxEngine {

    //using NaN = std::numeric_limits<float>::quiet_NaN();

	enum class Edge {
		Left,
		Top,
		Right,
		Bottom,
		Start,
		End,
		Horizontal,
		Vertical,
		All,
		Count
	};


	struct Dimension {
		float width{NAN}, height{NAN};
	};

	struct Position {
		//must mark node dirty when set
		float edges[(int)Edge::Count]{NAN}; //keyed by Edge
	};

    //Components

    struct DimensionComponent {
        Dimension dimension;
        Position position;
    };

    struct RelationshipComponent {
        Node *parent = nullptr;
    };

}

#endif //FLEXBOXENGINE_STYLE_H

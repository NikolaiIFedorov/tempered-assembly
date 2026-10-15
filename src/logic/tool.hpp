#pragma once

#include "file/geometry.hpp"
#include <vector>

class Tool {

  public:
    enum struct Name {

    };
    struct Data {
        Name name;
        std::vector<Geometry::Kind> prerequisites;
        std::vector<float> parameters;
    };

    Tool(Data data);

    const Data data;
};

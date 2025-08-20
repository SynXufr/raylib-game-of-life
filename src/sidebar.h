//
// Created by synx on 8/19/25.
//

#ifndef DIJKSTRA_SIDEBAR_H
#define DIJKSTRA_SIDEBAR_H
#include <raylib.h>
#include "grid.h"


struct Button {
    Rectangle rect{};
    CellType type{};
    const char *label{};
};

inline Rectangle startStopBtn = {10, 10, 100, 40};

inline Rectangle randomBtn = {10, 50, 100, 40};


#endif //DIJKSTRA_SIDEBAR_H
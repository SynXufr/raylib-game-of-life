//
// Created by synx on 8/19/25.
//

#ifndef DIJKSTRA_GRID_H
#define DIJKSTRA_GRID_H
#include <vector>

enum CellType {
    ALIVE,
    DEAD,
    WALL
};

typedef std::vector<std::vector<CellType>> grid_t;

grid_t initGrid(unsigned int width, unsigned int height);

void fillGridRandom(grid_t &grid);


#endif //DIJKSTRA_GRID_H
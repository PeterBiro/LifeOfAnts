#include <stdlib.h>
#include "Ant.h"

std::pair<int,int> Ant::getPosition() {
    return position;
}

int Ant::distanceToQueen() {
    return abs(position.first) + abs(position.second);
}

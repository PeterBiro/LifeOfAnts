#include <stdlib.h>
#include "Ant.h"

std::pair<int,int> Ant::getPosition() {
    return position;
}

int Ant::stepToQueen() {
    return abs(position.first) + abs(position.second);
}

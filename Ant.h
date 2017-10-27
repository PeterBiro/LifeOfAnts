#ifndef LIFEOFANTS_ANT_H
#define LIFEOFANTS_ANT_H

#include <utility>

class Ant {
public:
    Ant();
    ~Ant() = default;

    virtual void step() = 0;
    std::pair<int,int> getPosition();

protected:
    std::pair<int, int> position;
    int distanceToQueen();
};

#endif //LIFEOFANTS_ANT_H

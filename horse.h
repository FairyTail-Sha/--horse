#ifndef HORSE_H
#define HORSE_H
#include <QApplication>
#include "struct.h"

struct Point{
    int x;
    int y;
    Point(){

    }
};

struct Route{
    int point[64][2];
};

class Horse{
public:

    Horse();
    void init();
    Route route[64];

};

#endif // HORSE_H

#pragma once
#include <vector>
#include <map>
#include "position.h"
#include "colors.h"
using namespace std;

class Block
{
public:
    Block();
    int id;
    map<int , vector<Position>> cells;
    void Draw();
    void Move(int rows , int columns);
    vector<Position> GetCellPositions();
    void Rotate();
    void UndoRotate();

private:
    int cellSize;
    int rotationState;
    vector<Color> colors;
    int rowOffset;
    int columnOffset;
};
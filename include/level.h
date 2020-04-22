#pragma once
#ifndef LEVEL_H
#define LEVEL_H

#include <string>
#include <fstream>
#include <iostream>
#include <sstream>
#include <utility>
#include <tuple>
#include <map>

#include "model.h"
#include "food.h"


class Level {
  public:
    void load();
    void draw(Shader shader);
  private:
    std::map<std::pair<int, int> , bool> grid;
    std::vector<Food> foodGrid;
    Model cube;
    Model foodModel;
    void drawFloor(Shader shader);
    void readLevel(const std::string &path);

};

#endif
#pragma once
#include <iostream>
#include <vector>
#include "include/coppeliasim.h"

using namespace std;

typedef struct record_t {
	int mode;
	float pos[6];
	string label;
};

extern vector<record_t> recorded_pos;
extern float posData[6];
extern int mode;

extern CoppeliaSim mSim;
extern CoppeliaRobot mRobot;
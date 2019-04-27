#pragma once

#include <iostream>
#include <map>
#include "Node.h"
using namespace std;

class Eval;
class Graph
{
    map<string, Node>nodes;
    vector<Value*> ans;

  public:
    Graph(){};
    void newNode(string name, char nType, Value initValue, MathFunc *func);
    void newNode(string name, vector<string> fathers, MathFunc *func);
    void editNode(string name, Value newValue);
    int eval(string target, vector<string> inName, vector<Value> inValue);
    Value* getAns(int step);

    friend class Node;
};

#pragma once

#include <iostream>
#include <vector>
#include "Value.h"
#include "MathFunc.h"
using namespace std;

class Graph;

class Node
{
    Graph &graph;
    const string name;      // "a", "x", "res", etc
    const char nodeType;    // 'V'ariable, 'P'laceholder, 'C'onstant
    int timeStamp;          // To determine whether to update the value
    Value value;
    
    MathFunc *func;         // func->compute can override as Sin, Log, etc
    vector<Node*>fathers;   // directly dependent nodes
    vector<Node*>ancestors; // originally depedent nodes
    vector<Node*>children;  // induced nodes
    //bool printFlag;         // whether print value in Eval.eval()
    
  public:
    Node(Graph &graph, string name, char nodeType);
    int setValue(Value value);
    int setValue(float value);
    int addFather(Node *father);
    friend class Graph;
};

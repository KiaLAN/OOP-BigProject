#pragma once

#include <iostream>
#include <vector>
#include "../Graph/Graph.h"
using namespace std;

#define OPNOTFOUND_SIGNAL -1
#define COMPLETE_SIGNAL 0

class Filter
{
public:
    virtual int match(Graph &graph, const vector<string> &tokens) = 0;
};

class DefBaseNode : public Filter
{
public:
    int match(Graph &graph, const vector<string> &tokens);
};

class DefInterNode : public Filter
{
public:
    int match(Graph &graph, const vector<string> &tokens);
};

// implemented by MathFunc
// class MathOps : public Filter
// {
// public:
//     int match(Graph &graph, const vector<string> &tokens);
// };

class CmdPrint : public Filter
{
public:
    int match(Graph &graph, const vector<string> &tokens);
};

class CmdSet : public Filter
{
public:
    int match(Graph &graph, const vector<string> &tokens);
};

class CmdEval : public Filter
{
public:
    int match(Graph &graph, const vector<string> &tokens);
};

void addFilters(int id, vector<Filter *> &filters);

static DefBaseNode _defBaseNode;
static DefInterNode _defInterNode;
// static MathOps _mathOps;
static CmdPrint _cmdPrint;
static CmdSet _cmdSet;
static CmdEval _cmdEval;
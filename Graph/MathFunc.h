#pragma once

#include <iostream>
#include <vector>
using namespace std;

class Graph;
class Node;

class MathFunc
{
public:
    virtual void compute(vector<Node *> node) = 0;
    virtual bool match(Graph &graph, const vector<string> &tokens, int start);
};

class Exp : public MathFunc
{
public:
    void compute(vector<Node *> node);
    bool match(Graph &graph,  const vector<string> &tokens, int start);
};

class Sigmoid : public MathFunc
{
public:
    void compute(vector<Node *> node);
    bool match(Graph &graph,  const vector<string> &tokens, int start);
};

class Log : public MathFunc
{
public:
    void compute(vector<Node *> node);
    bool match(Graph &graph,  const vector<string> &tokens, int start);
};

class Sin : public MathFunc
{
public:
    void compute(vector<Node *> node);
    bool match(Graph &graph,  const vector<string> &tokens, int start);
};

class Tanh : public MathFunc
{
public:
    void compute(vector<Node *> node);
    bool match(Graph &graph,  const vector<string> &tokens, int start);
};

class Plus : public MathFunc
{
public:
    void compute(vector<Node *> node);
    bool match(Graph &graph,  const vector<string> &tokens, int start);
};

class Sub : public MathFunc
{
public:
    void compute(vector<Node *> node);
    bool match(Graph &graph,  const vector<string> &tokens, int start);
};

class Mult : public MathFunc
{
public:
    void compute(vector<Node *> node);
    bool match(Graph &graph,  const vector<string> &tokens, int start);
};

class Div : public MathFunc
{
public:
    void compute(vector<Node *> node);
    bool match(Graph &graph,  const vector<string> &tokens, int start);
};

class Minus : public MathFunc
{
public:
    void compute(vector<Node *> node);
    bool match(Graph &graph,  const vector<string> &tokens, int start);
};

class Smaller : public MathFunc
{
public:
    void compute(vector<Node *> node);
    bool match(Graph &graph,  const vector<string> &tokens, int start);
};

class SmallerEqual : public MathFunc
{
public:
    void compute(vector<Node *> node);
    bool match(Graph &graph,  const vector<string> &tokens, int start);
};

class Equal : public MathFunc
{
public:
    void compute(vector<Node *> node);
    bool match(Graph &graph,  const vector<string> &tokens, int start);
};

class LargerEqual : public MathFunc
{
public:
    void compute(vector<Node *> node);
    bool match(Graph &graph,  const vector<string> &tokens, int start);
};

class Larger : public MathFunc
{
public:
    void compute(vector<Node *> node);
    bool match(Graph &graph,  const vector<string> &tokens, int start);
};

class Condition : public MathFunc
{
public:
    void compute(vector<Node *> node);
    bool match(Graph &graph,  const vector<string> &tokens, int start);
};

static Exp _exp;
static Sigmoid _sigmoid;
static Log _log;
static Sin _sin;
static Tanh _tanh;
static Plus _plus;
static Sub _sub;
static Mult _mult;
static Div _div;
static Minus _minus;
static Smaller _small;
static SmallerEqual _smallEq;
static Equal _equal;
static LargerEqual _largeEq;
static Larger _large;
static Condition _cond;

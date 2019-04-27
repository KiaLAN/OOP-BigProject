#include "MathFunc.h"
#include "Graph.h"
#include "Node.h"
#include <cmath>

void Exp::compute(vector<Node *> node){}
void Sigmoid::compute(vector<Node *> node){}
void Log::compute(vector<Node *> node){}
void Sin::compute(vector<Node *> node){}
void Tanh::compute(vector<Node *> node){}
void Plus::compute(vector<Node *> node){}
void Sub::compute(vector<Node *> node){}
void Mult::compute(vector<Node *> node){}
void Div::compute(vector<Node *> node){}
void Minus::compute(vector<Node *> node){}
void Smaller::compute(vector<Node *> node){}
void SmallerEqual::compute(vector<Node *> node){}
void Equal::compute(vector<Node *> node){}
void LargerEqual::compute(vector<Node *> node){}
void Larger::compute(vector<Node *> node){}
void Condition::compute(vector<Node *> node){}


bool Exp::match(Graph &graph, const vector<string> &tokens, int start){}
bool Sigmoid::match(Graph &graph, const vector<string> &tokens, int start){}
bool Log::match(Graph &graph, const vector<string> &tokens, int start){}
bool Sin::match(Graph &graph, const vector<string> &tokens, int start){}
bool Tanh::match(Graph &graph, const vector<string> &tokens, int start){}
bool Plus::match(Graph &graph, const vector<string> &tokens, int start){}
bool Sub::match(Graph &graph, const vector<string> &tokens, int start){}
bool Mult::match(Graph &graph, const vector<string> &tokens, int start){}
bool Div::match(Graph &graph, const vector<string> &tokens, int start){}
bool Minus::match(Graph &graph, const vector<string> &tokens, int start){}
bool Smaller::match(Graph &graph, const vector<string> &tokens, int start){}
bool SmallerEqual::match(Graph &graph, const vector<string> &tokens, int start){}
bool Equal::match(Graph &graph, const vector<string> &tokens, int start){}
bool LargerEqual::match(Graph &graph, const vector<string> &tokens, int start){}
bool Larger::match(Graph &graph, const vector<string> &tokens, int start){}
bool Condition::match(Graph &graph, const vector<string> &tokens, int start){}
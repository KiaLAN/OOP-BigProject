#pragma once

#include <iostream>
#include "../Graph/Graph.h"
#include "Filter.h"
using namespace std;

class Parser
{
    Graph &graph;
    vector<Filter *> filters;

    string tmp_cmd;
    vector<string> tmp_tokens;

public:
    Parser(Graph &graph) : graph(graph) {}
    void setFilters(vector<Filter *> filters) { this->filters = filters; }
    void setFilters(int id) { filters.clear(); addFilters(id, filters); }

    friend istream &operator>>(istream &input, Parser &parser);

    void split(vector<string> &tokens);
    int parse();
};

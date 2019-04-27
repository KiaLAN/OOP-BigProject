#include "Filter.h"
#include "../Graph/MathFunc.h"

void addFilters(int id, vector<Filter *> &filters)
{
    if (id == 1)
    {
        filters.push_back(&_defBaseNode);
    }
    else if (id == 2)
    {
        filters.push_back(&_defInterNode);
    }
    else if (id == 3)
    {
        filters.push_back(&_cmdPrint);
        filters.push_back(&_cmdSet);
        filters.push_back(&_cmdEval);
    }
}

int DefBaseNode::match(Graph &graph, const vector<string> &tokens)
{
    if (tokens.size() <= 1)
        return OPNOTFOUND_SIGNAL;

    string ntype = *(tokens.begin() + 1);
    if (ntype == "P")
    {
        graph.newNode(*tokens.begin(), 'P', Scalar<float>(0.)); // must add <float>, or it will be double
    }
    else if (tokens.size() <= 2)
    {
        return OPNOTFOUND_SIGNAL;
    }
    else if (ntype == "V")
    {
        graph.newNode(*tokens.begin(), 'V', Scalar<float>(stof(*(tokens.begin() + 2))));
    }
    else if (ntype == "C")
    {
        graph.newNode(*tokens.begin(), 'C', Scalar<float>(stof(*(tokens.begin() + 2))));
    }
    else
    {
        return OPNOTFOUND_SIGNAL;
    }
    return COMPLETE_SIGNAL;
}

int DefInterNode::match(Graph &graph, const vector<string> &tokens)
{
    if (tokens.size() <= 2)
        return OPNOTFOUND_SIGNAL;
    if (*(tokens.begin() + 1) != "=")
        return OPNOTFOUND_SIGNAL;

    for(;;);
    return COMPLETE_SIGNAL;
}
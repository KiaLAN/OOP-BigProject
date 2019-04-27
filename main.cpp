#include <iostream>
#include "Graph/Graph.h"
#include "Parser/Filter.h"
#include "Parser/Parser.h"
using namespace std;

int main()
{
    Graph graph;
    Parser parser(graph);

    parser.setFilters(1);
    int baseNum;
    cin >> baseNum;
    for (int i = 0; i < baseNum; i++)
    {
        cin >> parser;
    }

    parser.setFilters(2);
    int interNum;
    cin >> interNum;
    for (int i = 0; i < interNum; i++)
    {
        cin >> parser;
    }

    parser.setFilters(3);
    int cmdNum;
    cin >> cmdNum;
    for (int i = 0; i < cmdNum; i++)
    {
        cin >> parser;
    }

    return 0;
}

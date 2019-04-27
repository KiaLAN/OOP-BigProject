#include "Parser.h"

istream &operator>>(istream &input, Parser &parser)
{
    input >> parser.tmp_cmd;
    parser.parse();
}

void Parser::split(vector<string> &tokens)
{
    string::size_type index1, index2;
    index1 = 0;
    index2 = tmp_cmd.find(" ");

    while (string::npos != index2)
    {
        string token = tmp_cmd.substr(index1, index2 - index1);
        if (token != "")
            tokens.push_back(token);

        index1 = index2 + 1;
        index2 = tmp_cmd.find(" ", index1);
    }
    if (index1 != tmp_cmd.length())
        tokens.push_back(tmp_cmd.substr(index1));
    return;
}

int Parser::parse()
{
    this->split(tmp_tokens);

    for (Filter *filter : filters)
    {
        int signal = filter->match(graph, tmp_tokens); // if complete, signal will be COMPLETE_SIGNAL
        if (signal == COMPLETE_SIGNAL)
        {
            return 0;
        }
    }
    // no filter matchs
    throw "Parse Error! Original input: " + tmp_cmd;
    return 1;
}

//
// Created by apshi on 9/7/2019.
//

#include <vector>
#include <string>

using namespace std;

struct RuleVarInfo{
    vector <pair<string, string>> ivl; // If var list <var name, value>
    vector <pair<string, string>> tvl; // Then var list <var name, value>
    vector <pair<string, string>> cl; // Conclusion list <var name, value if clauses true>
};

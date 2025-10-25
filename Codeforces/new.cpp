#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ifstream file("/Users/prankursharma/Desktop/Developer/Codeforces Code/C--/practice/source.cpp");
    if (!file)
    {
        cerr << "Cannot open file.\n";
        return 1;
    }

    string content((istreambuf_iterator<char>(file)), istreambuf_iterator<char>());

    vector<string> ops = {
        "++", "--", "==", "!=", "<=", ">=", "&&", "||", "+=", "-=", "*=", "/=", "%=", "&=", "|=", "^=", "<<=", ">>=",
        "+", "-", "*", "/", "%", "=", "<", ">", "!", "&", "|", "^", "~", "<<", ">>", "?", ":"};

    sort(ops.begin(), ops.end(), [](const string &a, const string &b)
         { return a.size() > b.size(); });

    int totalCount = 0;

    for (const string &op : ops)
    {
        size_t pos = content.find(op);
        while (pos != string::npos)
        {
            totalCount++;
            pos = content.find(op, pos + op.size());
        }
    }

    cout << "Total operators: " << totalCount << "\n";
}

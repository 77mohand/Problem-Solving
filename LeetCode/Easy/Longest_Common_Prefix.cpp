#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <cmath>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        if (strs.empty())return "";

        string reference = strs[0];

        for (int i = 0; i < reference.length(); i++)
        {
            char c = reference[i];

            for (int j = 1; j < strs.size(); j++)
            {
                if (i == strs[j].length() || strs[j][i] != c)
                {
                    return reference.substr(0, i);
                }
            }
        }

        return reference;
    }
};

int main()
{
    Solution solution1;
    vector<string> strs = {"dog", "racecar", "car"};
    solution1.longestCommonPrefix(strs);
}
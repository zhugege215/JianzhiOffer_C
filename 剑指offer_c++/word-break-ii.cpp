#include <vector>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

class Solution
{
public:
	unordered_map<string, vector<string>> m;

	bool startwith(string s, string s_c)
	{
		return s.compare(0, s_c.size(), s_c) == 0;
	}

	//vector<string> wordBreak(string s, unordered_set<string> &dict)
	vector<string> wordBreak(string s, vector<string>& dict)
	{
		return dfs(s, dict);
	}

	vector<string> dfs(string s, vector<string> &dict)
	{
		if (m.count(s)) return m[s];

		vector<string> result;

		if (s.size() == 0) 
		{
			result.push_back("");
			return result;
		}

		for (auto &word : dict)
		{
			if (startwith(s, word))
			{
				vector<string> sublist = dfs(s.substr(word.size()), dict);
				for (auto &sub : sublist)
				{
					result.push_back(word + (sub.empty() ? "" : " ") + sub);
				}
			}
		}
		m[s] = result;
		return result;
	}
};
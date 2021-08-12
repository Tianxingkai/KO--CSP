#include <iostream>
#include <map> /* 此处使用 map 集合 */
using namespace std;
int main()
{
    int n, p = 0, t = 0;
    string s;
    cin >> n; /* 输入需要检测的字符串个数 */
    for (int i = 0; i < n; i++)
    {
        cin >> s; /* 输入需要判断的字符串 */
        map<char, int> m;
        for (int j = 0; j < s.size(); j++)
        {
            m[s[j]]++;
            if (s[j] == 'P') /* 判断是否匹配 */
                p = j;
            if (s[j] == 'T')
                t = j;
        }
        /* 对输入的字符串进行校验 */
        if (m['P'] == 1 && m['A'] != 0 && m['T'] == 1 && m.size() == 3 && t - p != 1 && p * (t - p - 1) == s.length() - t - 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

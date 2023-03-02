#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'jumpingOnClouds' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY c as parameter.
 */

int jumpingOnClouds(vector<int> c)
{
    int result = 0;

    for (size_t i = 0; i < c.size()-1; ++i)
    {
        if (c[i] == 0)
        {
            ++i;
        }
        
        ++result;
    }
    
    return result;
}

int jumpingOnClouds1(vector<int> c)
{
    int result = 0;

    for (size_t i = 0; i < c.size()-1; ++i)
    {
        if (c[i+1] == 1 || c[i+2] == 0)
        {
            ++i;
        }
        
        ++result;
    }

    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string c_temp_temp;
    getline(cin, c_temp_temp);

    vector<string> c_temp = split(rtrim(c_temp_temp));

    vector<int> c(n);

    for (int i = 0; i < n; i++) {
        int c_item = stoi(c_temp[i]);

        c[i] = c_item;
    }

    int result = jumpingOnClouds(c);

    fout << result << "\n";

    fout.close();

    return 0;
}

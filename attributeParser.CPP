// This challenge works with a custom-designed markup language HRML. In HRML, each element consists of a starting and ending tag, and there are attributes associated with each tag. Only starting tags can have attributes. We can call an attribute by referencing the tag, followed by a tilde, '~' and the name of the attribute. The tags may also be nested.

The opening tags follow the format:

<tag-name attribute1-name = "value1" attribute2-name = "value2" ...>

The closing tags follow the format:

</tag-name>

The attributes are referenced as:

tag1~value  
tag1.tag2~name
Given the source code in HRML format consisting of  lines, answer  queries. For each query, print the value of the attribute specified. Print "Not Found!" if the attribute does not exist.

Example

HRML listing
<tag1 value = "value">
<tag2 name = "name">
<tag3 another="another" final="final">
</tag3>
</tag2>
</tag1>

Queries
tag1~value
tag1.tag2.tag3~name
tag1.tag2~value
Here, tag2 is nested within tag1, so attributes of tag2 are accessed as tag1.tag2~<attribute>. Results of the queries are:

Query                 Value
tag1~value            "value"
tag1.tag2.tag3~name   "Not Found!"
tag1.tag2.tag3~final  "final"



/// PROGRAM 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q, i;
    cin >> n >> q;
    string temp;
    vector<string> hrml;
    vector<string> quer;
    cin.ignore();

    for (i = 0; i < n; i++)
    {
        getline(cin, temp);
        hrml.push_back(temp);
    }

    for (i = 0; i < q; i++)
    {
        getline(cin, temp);
        quer.push_back(temp);
    }

    map<string, string> m;
    vector<string> tag;

    for (i = 0; i < n; i++)
    {
        temp = hrml[i];
        temp.erase(remove(temp.begin(), temp.end(), '\"'), temp.end());
        temp.erase(remove(temp.begin(), temp.end(), '>'), temp.end());

        if (temp.substr(0, 2) == "</")
        {
            tag.pop_back();
        }
        else
        {
            stringstream ss;
            ss.str("");
            ss << temp;
            string t1, p1, v1;
            char ch;
            ss >> ch >> t1 >> p1 >> ch >> v1;
            string temp1 = "";
            if (tag.size() > 0)
            {
                temp1 = *tag.rbegin();
                temp1 = temp1 + "." + t1;
            }
            else
                temp1 = t1;
            tag.push_back(temp1);
            m[*tag.rbegin() + "~" + p1] = v1;
            while (ss)
            {
                ss >> p1 >> ch >> v1;
                m[*tag.rbegin() + "~" + p1] = v1;
            }
        }
    }

    for (i = 0; i < q; i++)
    {
        if (m.find(quer[i]) == m.end())
            cout << "Not Found!\n";
        else
            cout << m[quer[i]] << endl;
    }

    return 0;

}

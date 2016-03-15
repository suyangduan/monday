// split a sentence into words (separating by space)
// and find the first repeated word


#include <iostream>
#include <string>
#include <map>
#include <set>
using namespace std;

int main()
{
    string input = "repeat  hello         repea hell abc abrepeat repeat hello";

    string words[10];

    int size_string = input.size();
    int index = 0;

    int i = 0;

    while(i < size_string)
    {
        while(i < size_string && input[i] == ' ')
        {
            i++;
        }
        int j = i;
        while(j < size_string && input[j] != ' ')
            j++;
        words[index++] = input.substr(i, j - i);
        i = j;
    }

//    map<string, int> m;
//
//    for (int i = 0; i < index; i++)
//    {
//        if (m.find(words[i])!=m.end())
//            cout<<words[i]<<endl;
//        else
//            m[words[i]] = 1;
//    }

    set<string> s;
    for (int i = 0; i < index; i++)
    {
        if (s.find(words[i]) != s.end())
        {
            cout<<words[i]<<endl;
            break;
        }
        else
            s.insert(words[i]);
    }



}



#include<iostream>
#include<vector>
using namespace std;

string mergeAlternately(string word1, string word2) 
{
    string mergeWords = "";

    int j=0; 
    for(int i=0; i<word1.size(); i++)
    {
        mergeWords.push_back(word1[i]);
        if(j<word2.size())
        {
            mergeWords.push_back(word2[j]);
            j++;
        }
    }

    while (j<word2.size())
    {
        mergeWords.push_back(word2[j]);
        j++;
    }
    
    return mergeWords;
}

int main()
{
    string word1 = "abcd", word2 = "pq";
    string words = mergeAlternately(word1, word2);

    for(int i=0; i<words.length(); i++)
    {
        cout << words[i];
    }
    cout << endl;
    
    return 0;
}
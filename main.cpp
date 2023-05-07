#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string fristLine, secondLine;

    cout <<"Frist string"<< endl;
    getline(cin, fristLine);

    vector<char>vectorFristString;
    for(char letter : fristLine)
    {
        if (letter != 32)
            {
                vectorFristString.push_back(letter);
            }
    }
    sort(vectorFristString.begin(), vectorFristString.end());

    cout<< "Second String"<< endl;
    getline(cin, secondLine);

    vector<char> vectorSecondString;
    for (char secondLetter : secondLine)
    {
        if (secondLetter != 32)
        {
            vectorSecondString.push_back(secondLetter);
        }
    }
    sort(vectorSecondString.begin(), vectorSecondString.end());

    bool anagrams = equal(vectorFristString.begin(), vectorFristString.end(), vectorSecondString.begin());

    if (anagrams == false )
    {
        cout<<"NOT ANAGRAMS"<< endl;
    }
    else
    {
        cout<<"THEY ARE ANAGRAMS"<< endl;
    }
}

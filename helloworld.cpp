#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    vector<int> numbers;
    numbers.push_back(10);
    numbers.push_back(12);
    numbers.push_back(56);
    for(vector<int>:: iterator i=numbers.begin();i<numbers.end();i++)
    cout << *i<< endl;
    for (const string& word : msg) //string& is the refrence variable of name word 
    {                             //here we are not creating copies but 
        cout << word << " ";      //we are also limiting the computer from making change
    }
    cout << endl;
    return 0;
}

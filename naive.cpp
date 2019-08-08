#include<iostream>

using namespace std;
void findMatch(string text, string pattern);
int main(int argc, char const *argv[])
{
    string text = "AABAABCEFAAVRGDAT";
    string pattern = "AAB";
    findMatch(text,pattern);
    

    return 0;
}

void findMatch(string text, string pattern)
{
    int m = text.length();
    int n = pattern.length();
    int j;
    for(int i = 0; i<m-n; i++){
        for(j = 0; j<n; j++){
            if(text.at(i+j) != pattern.at(j)){
                break;
            }  
            
        }
        if(n == j)
            cout << "Pattern found at " << i << endl;
    }
}

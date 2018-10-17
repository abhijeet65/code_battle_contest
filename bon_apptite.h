#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

// Complete the bonAppetit function below.
void bonAppetit(vector<int> bill, int k, int b) {
    int i;
    double init=0;
    double sum=accumulate(bill.begin(),bill.end(),init);
    sum=sum-bill[k];
    double share=sum/2;
    if(b>share)
        cout<<(b-share);
    else if(b==share)
        cout<<"Bon Appetit";
}
    
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v1={1,2,8,4,7,3};
    cout<<"{";
    for_each(v1.begin(),v1.end(),[](const auto &x){cout<<x;});
    cout<<"}";
    return 0;
    

}
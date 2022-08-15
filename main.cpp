#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v1={1,2,8,4,7,3};
    int sum=0;

    cout<<"{";
    for_each(v1.begin(),v1.end(),[&sum](const auto &x){cout<<x<<"";sum+=x;});
    cout<<"}";
    cout<<"sum of vector elements"<<sum<<endl;
    cout<<"hi";

    sort(v1.begin(),v1.end(),greater<int>());
    cout<<"v1: {";
    for_each(v1.begin(),v1.end(),[](const auto &x){cout<<x;});
    cout<<"}";
    

    return 0;
    

}
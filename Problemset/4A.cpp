#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    /*
    to check if given weight can be cut into even weight if first needs to be even as 
    even + even = even (this is favoured)
    odd + odd = even

    for subset to be even the weight should be atleast 4 

    */
    if( n%2==0 && n>=4)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
/*
    General case:
    if number of kids are k then condtions would be:
    weight be even and the least amount of weight allowed be 2*k (as 2 base even number after 0 which is not allowed to give any kid)
    so condition is  n%2==0 && n>=6
*/
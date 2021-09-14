#include<iostream>
#include<string>
using  namespace std;

main()
{
    string s;
    cout << "input String : ";
    getline(cin,s);
    int c=0;

    int i=0,j=0;

    for(i=0;i<26;i++)
    {
        char ans='A'+i;
        for(j=0;j<s.length();j++)
        {
            if(s[j]=='a'+i||s[j]==ans) c++;
        }
        cout << ans << " : " << c << "\n";
        c=0;
    }

    return 0;
}

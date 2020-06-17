#include <iostream>
#include <string.h>
using namespace std;


int main()
{
    char s[100];
    int v=0,c=0,i,l;
    cout<<"Enter a string : ";
    cin>>s;
    l=strlen(s);
    for (int i = 0; i < l; i++)
    {
       if (s[i]=='a' || s[i]=='e' || s[i]=='i' ||s[i]=='o'||  s[i]=='a' || s[i]=='A' || s[i]=='E' || s[i]=='I' ||s[i]=='O'||  s[i]=='U'  )
        v++;
       else
        c++;
    }
    cout<< " String : " << s;
    cout <<"\nVowels : "<<v;
    cout <<"\nConsonants : "<<c;
    return 0;

}

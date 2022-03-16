#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    char stu[100],stu1[100];
    cin>>t;
    while(t--)
    {
        int s,r=0,up=0;
        cin>>s;
        cin>>stu;
        strcpy(stu1,stu);
        for(i=0;i<s;i++)
        {
            r=0;
            for(int j=0;j<s-1;j++)
            {
                if(stu[j]=='A' && stu[j+1]=='P')
                {
                   stu1[j+1]='A';
                   r++;
                }
            }
            if(r==0)
            {
                break;
            }
            else if(r>0)
            {
                up++;
            }
            strcpy(stu,stu1);
        }
        cout<<up<<endl;
    }

}

//unsolved

#include<cstdio>
#include<cstring>
#include<cctype>
#include<map>
#include<bits/stdc++.h>
using namespace std;
typedef struct refer
{
    int idx;
    char S;
}REF;

map< string,int> dic;
char input[157];
char dicc[100007][157]={'\0'};
char start[10007];
char tmp[157];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    dic.clear();
    int i,j;
    int len=0;
    do
    {
        cin>>input;
        if(input[0]=='\\' && input[1]=='c')
        {
            for(i=0;input[i]!='{';i++);
            j=0;
            for(i++;input[i]!='}';i++)
            {
                tmp[j++] = input[i];
            }
            string t = tmp;
            dic[t] = len;
            len++;
        }
    }while(!(input[0]=='\\' && input[1]=='b'));
//    printf(">>>%d\n",len);
//    for(i=0;i<len;i++)
//    {
//        printf(">>>%s\n",dic[i]);
//    }
    map<string,int>::iterator iter;
    for(iter=dic.begin();iter!=dic.end();iter++)
        cout<<iter->first<<'\n';
    fgets(start,sizeof(start),stdin);
    char* record[100007];
    int idx = 0;
    string end;
    while(scanf("%s",end)!=EOF)//cin.getline(end))
    {
        if(end[0]=='\\')
        record[idx] = new char[100007];
        idx++;
    }

    return 0;
}

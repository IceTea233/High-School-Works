#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int cnt[26];
char s[3007], ptr[3007];
int t,i;

int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%s",s);
        memset(cnt,0,sizeof(cnt));
        for(i=0;isprint(s[i]);i++){
            cnt[s[i]-'a']++;
        }
        int cnn = 0;
        for(i=0;i<26;i++){
            if(cnt[i])
                cnn++;
        }
        if(cnn<=1){
            printf("-1\n");
        } else {
            strcpy(ptr,strrev(s));
            printf(">>>%s\n>>>%s\n",ptr,s);
            //ptr = strrev(s);
            if(strcmp(ptr,s)==0){
                printf("DOGGY!\n");
                for(i=0;isprint(s[i]);i++){
                    if(s[i]!=s[0])
                        break;
                }
                swap(s[0],s[i]);
                puts(s);
            } else {
                puts(s);
            }
        }
    }
    return 0;
}

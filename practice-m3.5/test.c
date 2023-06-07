#include <stdio.h>
 
int main()
{
    int n;
    scanf("%d\n", &n);
    int arr[26] = {0};
    char ch;
    for(int i=0; i<n; i++){
        scanf("%c", &ch);
        arr[ch-'a']++;
    }
    for(int i=0; i<26; i++){
        
        if(arr[i]>0){
            while(arr[i]!=0){
                printf("%c",i+'a');
                arr[i]--;
            }
        }
    }
    return 0;
}
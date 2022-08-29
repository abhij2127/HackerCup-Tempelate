#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    FILE *fp;
    fp = fopen("solutions.txt", "w");
    for(int i=1; i<=t; i++){
            int res = 0, j = i;
            //Put code Below this


            //Put code above this
            string result = to_string(res);
            string s = "Case #"+to_string(j)+ ": "+result+"\n";
            fputs(s.c_str(), fp);
            cout<<s<<endl;
    }

    fclose(fp);
    return 0;

}
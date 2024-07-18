#include<iostream>
using namespace std;

int firstOccurence(string haystack,string niddle){

    int n = haystack.size();
    int m = niddle.size();

    for(int i =0;i<= n-m;i++){
        for(int j =0; j<m;j++){
            if(niddle[j] != haystack[i+j]){
                break;
            }
            if( j== m-1){
                return i;
            }
        }
    }
    return -1;

}
int main(){
    string s1 = "aamirchoudharyletsadu";
    string s2= "sad";
    cout<<firstOccurence(s1,s2);


    return 0;
}
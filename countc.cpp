#include <iostream>
#include <string>
using namespace std;

int main() {
  //make variables for input and counting
  string str1;
  int num=0;
  int letter=0;
  int other=0;
  cin>>str1;
  //make for loop for counting the different types of characters
  for(int i = 0; i<str1.length(); i++){
    if(str1[i]>='0' and str1[i]<='9'){
      num+=1;
    }
    else if(str1[i]>='a' and str1[i]<='z'){
      letter+=1;
    }
    else if(str1[i]>='A' and str1[i]<='Z'){
      letter+=1;
    }
    else{
      other++;
    }
  }
  //output
  cout<<letter<<" "<<num<<" "<<other;
}
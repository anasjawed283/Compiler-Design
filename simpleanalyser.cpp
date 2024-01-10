#include <string>
#include <bits/stdc++.h>
using namespace std;

vector<string> kw ={"auto","break","case","char","const","continue","default",
                            "do","double","else","enum","extern","float","for","goto",
                            "if","int","long","register","return","short","signed",
                            "sizeof","static","struct","switch","typedef","union",
                            "unsigned","void","volatile","while"};

vector<string> op ={"+","-","*","/","="};

vector<string> num ={"1","2","3","4","5","6","7","8","9","0"};

vector<string> p = {"()","(",")"};

vector<string> b = {"{","}"};

void printout(string x){
  
  if(find(kw.begin(), kw.end(), x) != kw.end()) // check x contains in keyword vector
    cout<<x<<" \tkeyword\n";
  else if(find(op.begin(), op.end(), x) != op.end())
    cout<<x<<" \toperator\n";
  else if(find(num.begin(), num.end(), x) != num.end())
    cout<<x<<" \tnumber\n";
  else if(find(p.begin(), p.end(), x) != p.end())
    cout<<x<<" \tparanthesis\n";
  else if(find(b.begin(), b.end(), x) != b.end())
    cout<<x<<" \tcurley brases\n";
  else if(x==";")
    cout<<x<<" \tseperator\n";
  else if(x.find("_")==0 || ( x[0]>='a' and x[0]<='z' )||( x[0]>='A' and x[0]<='Z' ))
    cout<<x<<" \tvalid identifier\n";
}

int main(){

  string line;
  vector<string> v;
  
  while(getline(cin, line, ' ')){ // seperate words using space( ' ' )
      v.push_back(line);
  }
  for(auto x : v)
  printout(x); // send word by word
  
  return 0;
}

/*
make sure every word is seperated with space before and after
INPUT 

void main () { 
 int _i = 4 + 5  ; 
 } 
 
*/


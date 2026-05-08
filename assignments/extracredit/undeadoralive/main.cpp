#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  char c;
  bool face = false;
  bool smiley = false;
  bool frowny = false;

  while(cin>>noskipws>>c)
  {
    if(c==':') 
    {
      face=true;
      continue;
    }
    if(face) 
    {
      if (c == ')'){smiley = true;} 
      else if (c == '('){frowny = true;}
    face = false;
    }
  }

  if(smiley && frowny){cout<<"double agent"<<endl;} 
  else if(smiley){cout<<"alive"<<endl;} 
  else if(frowny){cout<<"undead"<<endl;} 
  else{cout<<"machine"<<endl;}
}
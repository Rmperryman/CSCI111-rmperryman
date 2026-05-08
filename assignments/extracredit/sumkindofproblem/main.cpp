#include <iostream>
using namespace std;

int main() {
  int P;
  cin>>P;
  while (P--) {
    int dataset,N,sum1,sum2,sum3;
    cin>>dataset>>N;
    sum1=N*(N+1)/2;
    sum2=N*N;
    sum3=N*(N+1);
    cout<<dataset<<" "<<sum1<<" "<<sum2<<" "<<sum3<<endl;
  }
}
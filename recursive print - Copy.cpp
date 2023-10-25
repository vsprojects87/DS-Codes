#include <iostream>
using namespace std;
void recursivecheck(int n){
  if(n==0){
    return;
  }

  cout<<n<<" ";
  recursivecheck(n-1);
} 


int main() {
  std::cout << "Hello World!\n";
recursivecheck(10);

  return 0;
}
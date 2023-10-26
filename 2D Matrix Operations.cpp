#include <iostream>

int main() {
  int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int i = 0;
  // Enter Matrix element
  // std::cout << "Enter the matrix elements"
  //           << "\n";
  // for (; i < 3; i++) {
  //   for (int j = 0; j < 3; j++) {
  //     std::cin >> a[i][j];
  //   }
  // }

  // Print matrix :
  std::cout << "the matrix elements are :"
            << "\n";
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      std::cout << a[i][j] << "\t";
    }
    std::cout << "\n";
  }

  // printing the wave like pattern in 2D arrays
  // like this :
  //          ___
  //       |  |  |
  //       |__|  |

  //  std::cout<<"The wave printing : "<<"\n\n";

  //   for(int i=0;i<3;i++){
  //     if(i%2==0){
  //       for(int j=0;j<3;j++){
  //       std::cout<<a[j][i]<<"\t";
  //       }
  //       std::cout<<"\t";
  //     }
  //     if(i%2!=0){
  //       for(int j=2;j>=0;j--){
  //         std::cout<<a[j][i]<<"\t";
  //       }
  //         std::cout<<"\t";
  //     }
  //   }

  // Sum for each Row :
  // for(int i=0;i<3;i++){
  //   int sum=0;
  //   for(int j=0;j<3;j++){
  //     sum = sum + a[i][j];
  //   }
  //   std::cout<<"the sum for "<<i<<"row"<<sum<<"\n";
  // }
  return 0;
}

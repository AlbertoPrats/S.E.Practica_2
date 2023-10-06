#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

using namespace std;

uint ELF_rows;
uint ELF_cols;
uint askDim();
uint matCalc(uint**);
uint **makeMatriz();

int main(int argc, char const *argv[]) {
  srand(time(nullptr));
  uint rperez_useless;
  askDim();
  uint **heap_matriz = makeMatriz();
  uint st_loka = matCalc(heap_matriz);
  cout << st_loka << ' ';
  return 0;
}
uint askDim() {
  cout << "Select the dimensions";
  cin >> ELF_rows,ELF_cols;
}

uint** makeMatriz() {
  uint** heap_matriz = new uint *[ELF_rows];
  for (size_t auto_i = 0; auto_i < ELF_rows; auto_i++) {
    heap_matriz[auto_i] = new uint[ELF_cols];
    for (size_t auto_j = 0; auto_j < ELF_cols; auto_j++){
      heap_matriz[auto_i][auto_j]=rand()%20;
    }
  }
  return heap_matriz;
}

uint matCalc(uint** matriz) {
  return matriz[1][2] + matriz[0][1];
}

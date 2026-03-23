#include <iostream>
using namespace std;

/// Мы можем делать указатели на указатели
/// int** это указатель на указатель int
/// Это нужно когда у тебя сложная структура
/// Например двумерный массив

/// Задание: тебе даётся 2мерная таблица
/// Надо посчитать сумму в каждой строке и в каждом столбце и вывести
/// Так же посчитай общую сумму.
/// Можно использовать только указатели, new и delete


int main() {
   int rows, cols, sum_rows, sum_total;
   sum_total = 0;

   //cout << " > ";
   cin >> rows >> cols;


   int** massive = new int*[rows];
   int* sum_cols = new int[cols];

   // create cols
   for (int i = 0; i < rows; ++i) {
   massive[i] = new int[cols];    }

   // set sum cols
   for (int i = 0; i < cols; ++i) {
   sum_cols[i] = 0;               }

   // set massive
   for (int i = 0; i < rows; ++i) {
   //cout << " > ";
      for (int j = 0; j < cols; ++j) {
        cin >> massive[i][j];          
      }
    }

   // sums
   for (int i = 0; i < rows; ++i) {
      sum_rows = 0;
      for (int j = 0; j < cols; ++j) {
        sum_cols[j] += massive[i][j];
        sum_rows += massive[i][j];
        sum_total += massive[i][j];    
      }
      cout << sum_rows << ' ';       
   }

   cout << '\n';
   for (int i = 0; i < cols; ++i) {
      cout << sum_cols[i] << ' ';    
   }

   cout << '\n';
   cout << sum_total << '\n';

   // delete all massive
   for (int i = 0; i < rows; i++) {
      delete[] massive[i];           
   }
   delete[] massive;
   delete[] sum_cols;
}

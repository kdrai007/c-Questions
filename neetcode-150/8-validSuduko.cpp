#include <iostream>
#include <vector>
using namespace std;

bool validSudoku(vector<vector<char>> &board) {
  vector<vector<bool>> columns(9, vector<bool>(9, false));
  vector<vector<bool>> rows(9, vector<bool>(9, false));
  vector<vector<bool>> subBoxes(9, vector<bool>(9, false));

  for (int r = 0; r < 9; ++r) {
    for (int c = 0; c < 9; ++c) {
      char currentCell = board[r][c];

      if (currentCell == '.')
        continue;

      int digitIndex = currentCell - '0' - 1;
      int subBoxIndex = (r / 3) * 3 + (c / 3);

      if (rows[r][digitIndex] || columns[c][digitIndex] ||
          subBoxes[subBoxIndex][digitIndex]) {
        return false;
      }

      rows[r][digitIndex] = true;
      columns[c][digitIndex] = true;
      subBoxes[subBoxIndex][digitIndex] = true;
    }
  }
  return true;
}

int main() {
  cout << "8- Valid Suduko: \n";
  vector<vector<char>> board = {{'.', '2', '.', '.', '3', '.', '.', '.', '.'},
                                {'4', '.', '.', '5', '.', '.', '.', '.', '.'},
                                {'.', '9', '8', '.', '.', '.', '.', '.', '3'},
                                {'5', '.', '.', '.', '6', '.', '.', '.', '4'},
                                {'.', '.', '.', '8', '.', '3', '.', '.', '5'},
                                {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
                                {'.', '.', '.', '.', '.', '.', '2', '.', '.'},
                                {'.', '.', '.', '4', '1', '9', '.', '.', '8'},
                                {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

  bool isValid = validSudoku(board);
  if (isValid)
    cout << " Valid Suduko \n";
  else {
    cout << "Invalid Suduko \n";
  }

  return 0;
}

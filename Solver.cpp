#include "Solver.h"
#include <vector>

auto solver::solve(std::vector<std::vector<int> > unsolvedBoard) {
  auto solvedBoard = unsolvedBoard;
  return solvedBoard;
};
isValidStruct solver::isValid(int column, int row, int index, int value) {
  bool checkcolumn = false;
  bool checkrow = false;
  isValidStruct checker;
  //Checking column
  for(int i = 0; i <= 9; i++) {
    if (board[row][i] != value) {
      checkcolumn = true;
    }
    else {
      checker.isFalse = false;
      checker.tempcolumn = i;
      checker.temprow = row;
      return checker;
    }
  }
  //Checking row
  for (int i = 0; i <= 9; i++) {
    if (board[i][column] != value) {
      checkrow = true;
    }
    else {
      checkrow = false;
    }
  }
  board[row][column] = value;
  return checker;
};

#include <array>
#include <string>
#include <vector>

struct isValidStruct {
  bool isFalse;
  int tempvalue;
  int temprow;
  int tempcolumn;
};

class solver {

public:
  void readProblem();
  bool isSolved = false;
  auto solve(std::vector<std::vector<int>> unsolvedBoard);
  isValidStruct isValid(int column, int row, int index, int value);
//private:
  std::vector<std::vector<int> > board = {
  {0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0} };
};

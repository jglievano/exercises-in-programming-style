#include<fstream>
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main() {

  // The constrained memory should have no more than 1024 cells
  vector<char> *data = new vector<char>();

  /**
   *
   * We're lucky:
   * The stop words are only 556 characters and the lines are all
   * less than 80 characters, so we can use that knowledge to
   * simplify the problem: we can have the stop words loaded in
   * memory while processing one line of the input at a time.
   *
   * If these two assumptions didn't hold, the algorithm would
   * need to be changed considerably.
   *
   * Overall strategy: (PART 1) read the input file, count the
   # words, increment/store counts in secondary memory (a file)
   # (PART 2) find the 25 most frequent words in secondary memory.
   #
   * PART 1:
   * - read the input one line at a time.
   * - filter the characters, normalize to lower case.
   * - identify words, increment corresponding counts in file.
   */

  // Load the list of stop words.
  ifstream f("../input.txt");
  

  return 0;
}

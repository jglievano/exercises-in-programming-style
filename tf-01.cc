#include<array>
#include<fstream>
#include<iostream>
#include<string>
#include<vector>

const int WORD_MAX_SIZE = 10;
const int LINE_MAX_SIZE = 80;

int main() {

  // The constrained memory should have no more than 1024 cells
  std::vector< std::array<char, WORD_MAX_SIZE> > data;

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
  
  std::ifstream f("../stop_words.txt");
  std::string str;
  for (std::array<char, WORD_MAX_SIZE> a; f.getline(&a[0], WORD_MAX_SIZE, ',');) {
    data.push_back(a);
  }

  std::array<char, LINE_MAX_SIZE> line;
  int startCharOfWord = 0;
  int i = 0;
  bool wordFound = false;
  std::array<char, WORD_MAX_SIZE> word;
  std::array<char, WORD_MAX_SIZE> wordNNNN;
  int frequency = 0;

  for (auto &a : data) {
    std::cout << &a[0] << std::endl;
  }

  return 0;
}

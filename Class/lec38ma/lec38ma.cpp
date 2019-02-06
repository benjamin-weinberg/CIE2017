//------------------------------------------------------------------
// Programmer: TODO: Your Name Here
// Description: This program contains the mini-assignment for
//              exploring standard algorithms and standard containers
//
//-------------------------------------------------------------------
#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <list>
#include <deque>
#include <set>

#include <algorithm>
#include <numeric>

using namespace std;


/**
  * @brief Increment value by 1
  * @param v
  */
void multiplyBy100( float & v )
{
  v *= 100.0;
}

void Example()
{
  vector<float> fractionCorrect{.9,.5,.67,.83,.99,1.0};
  ostream_iterator<float> output{cout," "};

  std::for_each(fractionCorrect.begin(),fractionCorrect.end(),multiplyBy100);

  std::copy(fractionCorrect.cbegin(),fractionCorrect.cend(),output);
}


//TODO: Write incrementByOne function

//TODO: Write function for squaring values

/**
 * @brief Determine if a letter is a vowel
 * @param letter
 * @return true if the input letter is one of the vowels
 */
bool isVowel(std::string::value_type letter)
{
  static const std::set<std::string::value_type> vowels{'a','e','i','o','u'};
  return (vowels.find(tolower(letter)) != vowels.cend());
}

//TODO: Use this function in Task 9 to
std::string::value_type upperCaseVowels(std::string::value_type letter)
{
  if( isVowel(letter) )
  {
    letter=toupper(letter);
  }
  else
  {
    letter=tolower(letter);
  }
  return letter;
}

//TODO: Write function for determining if a value is odd (i.e. value % 2 == 1 )


int main() {
  // create an array with 7 elements in it
  array<float, 7> myArray{1.0,2.0,3.0,4.0,5.0,6.0,7.0};
  // create other container classes with the same size as myArray
  vector<float>   myVector(myArray.size());
  list<float>     myList(myArray.size());
  deque<float>    myDeque(myArray.size());
  vector<int>     myIntVector{100,1,10,200,2,20,300,3,30,1,2,3,100,200,300,300,300,300,300,300,1,2,3,4,5,6,7,8,9,10,11};

  const std::string myString{"The quick brown fox jumped over the lazy river."};

  int xxx;
  // An iterator for an output stream!  Intialize with cout (or any other stream output object)
  ostream_iterator<float> output{cout, " "};

  cout << "Task 1 result" << endl;
  cout << "1 2 3 4 5 6 7 | should be replicated by the following line" << endl;
  //TODO:  use std::copy to print a space separated content of myArray to cout using the output iterator
  cout << "|\n" << endl;

  cout << "Task 2 result" << endl;
  cout << "7 6 5 4 3 2 1 | should be replicated by the following line" << endl;
  //TODO:  use std::copy to print a space separated content of myArray in reverse order cout using the output iterator
  cout << "|\n" << endl;

  cout << "Task 3 result" << endl;
  cout << "7 6 5 4 3 2 1 | should be replicated by the following line" << endl;
  //TODO:  Copy myArray to myVector
  //TODO: then print myVector in reverse order
  cout << "|\n" << endl;

  cout << "Task 4 result" << endl;
  cout << "1 4 9 16 25 36 49 | should be replicated by the following line" << endl;
  //HINT: http://www.cplusplus.com/reference/algorithm/transform/
  //TODO:  Square the values of myArray and store in myList
  //TODO: then print myList in forward order
  std::copy(myList.cbegin(),myList.cend(),output);
  cout << "|\n" << endl;

  cout << "Task 5 result" << endl;
  cout << "1 4 9 16 25 36 49 | should be replicated by the following line" << endl;
  //TODO:  Square the values of myArray in reverse order and store in myDeque
  //http://en.cppreference.com/w/cpp/algorithm/transform
  //TODO: then print myDeque in reverse order
  std::copy(myDeque.crbegin(),myDeque.crend(),output);
  cout << "|\n" << endl;

  cout << "Task 6 result" << endl;
  cout << "140| should be replicated by the following line" << endl;
  //HINT http://en.cppreference.com/w/cpp/algorithm/accumulate
  //TODO:  Add all values of myDeque together
  cout << "|\n" << endl;

  cout << "Task 7 result" << endl;
  cout << "5040| should be replicated by the following line" << endl;
  //HINT http://en.cppreference.com/w/cpp/algorithm/accumulate
  //HINT: http://en.cppreference.com/w/cpp/utility/functional/multiplies
  //TODO:  multiply all values of myVector in reverse order
  cout << "|\n" << endl;

  cout << "Task 8 result" << endl;
  cout << "1,4,9,16,25,36,49,| should be replicated by the following line" << endl;
  //TODO: print myDeque in reverse order with comma separated lines
  ostream_iterator<float> commaostream{cout,","};
  cout << "|\n" << endl;

  cout << "Task 9 result" << endl;
  cout << "thE qUIck brOwn fOx jUmpEd OvEr thE lAzy rIvEr.| should be replicated by the following line" << endl;
  //TODO: Capitalize all vowels and lowercase all consonants for the given sentence
  ostream_iterator<std::string::value_type> nospaceoutput{cout,""};
  cout << "|\n" << endl;

  cout << "Task 10 result" << endl;
  cout << "9| should be replicated by the following line" << endl;
  //HINT: http://en.cppreference.com/w/cpp/algorithm/count
  //TODO: count the number of odd numbers myIntVector
  cout << "|\n" << endl;

  cout << "Task 11 result" << endl;
  cout << "13| should be replicated by the following line" << endl;
  //HINT: http://en.cppreference.com/w/cpp/algorithm/count
  //TODO: Count the number of vowels in myString

  cout << "Task 12 result" << endl;
  cout << "true| should be replicated by the following line" << endl;
  //HINT: http://www.cplusplus.com/reference/algorithm/sort/
  //HINT: http://en.cppreference.com/w/cpp/algorithm/binary_search
  //TODO: Use binary_search to determine if myIntVector has the value 10 in it, (you may need to prepare mIntVector)
  cout << "|\n" << endl;


  cout << "Task 12 result" << endl;
  cout << "1 2 3 4 5 6 7 8 9 10 11 20 30 100 200 300 | should be replicated by the following line" << endl;
  //HINT: http://www.cplusplus.com/reference/algorithm/unique  READ CAREFULLY, and look at the example
  //TODO: Remove all duplicate values from myIntVector,and print to the screen
  cout << "|\n" << endl;


  cout << "Task 13 result" << endl;
  cout << "2 3 4 5 6 7 8 | should be replicated by the following line" << endl;
  //TODO: Increment each value by one
  cout << "|\n" << endl;

  Example();
  return 0;
}



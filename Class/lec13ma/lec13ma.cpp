//-----------------------------------------------------------------------------
// Programmer: Ben Weinberg
// Description:  Complete the code segments below so that running
//               the program produces the following output:

/*
----------------------
Professor Bai is not a CIE instructor.
Professor Canahuate is a CIE instructor.
Professor Kuhl is a CIE instructor.
Professor Christensen is not a CIE instructor.
----------------------
Printing all of the double array
1
2
2
3
4
5
6
7
11.7
----------------------
Print the first half of the smallest integers in the int array
0: -11
1: -6
2: -5
3: -3
----------------------
Print the last half of the largest integers in the unsigned int array
5: 5
6: 6
7: 7
8: 8
9: 11
----------------------
----------------------
Change all the values in the unsigned int array to 79, then print the unsigned int array using range-based for
79
79
79
79
79
79
79
79
79
79
----------------------
----------------------
While the user enters a value other than -1, store the entered values into an std::vector<int>then sort and print the vector using range-based for
Enter next integer (-1 to stop entering numbers)

6
Enter next integer (-1 to stop entering numbers)
7
Enter next integer (-1 to stop entering numbers)
1
Enter next integer (-1 to stop entering numbers)
2
Enter next integer (-1 to stop entering numbers)
1
Enter next integer (-1 to stop entering numbers)
99
Enter next integer (-1 to stop entering numbers)
7
Enter next integer (-1 to stop entering numbers)
-1
1
1
2
6
7
7
99
----------------------
 */
//-----------------------------------------------------------------------------
#include <iostream>
#include <vector>
#include <array>

#include <algorithm> // Needed for the sort algorithm

using namespace std;

static void CIEInstructorLookup(const string & who)
{
  array<string, 5> names{"Canahuate", "Johnson", "Guzun", "Garvin", "Kuhl"};
  sort(names.begin(), names.end());
  //bool found = false;
  bool found = binary_search(names.begin(), names.end(), who);
  cout << "Professor " << who <<  (found ? " is" : " is not" ) << " a CIE instructor." << endl;
}


int main()
{

  cout << "----------------------" << endl;
  CIEInstructorLookup("Bai");
  CIEInstructorLookup("Canahuate");
  CIEInstructorLookup("Kuhl");
  CIEInstructorLookup("Christensen");
  cout << "----------------------" << endl;
 
  array<double, 9>         darr{5.0,3.0,2.0,1.0,6.0,2.0,11.7,7.0,4.0};
  array<int, 8>            iarr{-5,-3,-2,-1,-6,-2,-11};
  array<unsigned short,10 > usarr{5,3,2,1,6,2,11,0,7,8};


  cout << "Printing all of the double array" << endl;
  sort(darr.begin(),darr.end());
  for( const double x : darr )  //Range based for loop from Ch. 7.5
  {
     cout << x << endl;
  }
  cout << "----------------------" << endl;

  cout << "Print the first half of the smallest integers in the int array" << endl;
  sort(iarr.begin(),iarr.end());
  int size = iarr.size();
  size /= 2;
  for (int i=0; i < size; i++)
  {
    cout << i << ": " << iarr[i] << endl;
  }
  cout << "----------------------" << endl;
  cout << "Print the last half of the largest integers in the unsigned int array" << endl;
  sort(usarr.begin(),usarr.end());
  size = usarr.size();
  int hsize = size/2;
  for (int i=hsize; i < size; i++)
  {
    cout << i << ": " << usarr[i] << endl;
  }
  cout << "----------------------" << endl;

  cout << "----------------------" << endl;
  cout << "Change all the values in the unsigned int array to 79, "
       << "then print the unsigned int array using range-based for" << endl;
  usarr.fill(79);
  for( int item : usarr )
  {
    cout << item << endl;
  }

  cout << "----------------------" << endl;

  cout << "----------------------" << endl;
  cout << "While the user enters a value other than -1, store the entered values into an std::vector<int>"
       << "then sort and print the vector using range-based for" << endl;
  int input = 0;
  //TODO:  initialize myVector to hold integers, but have it initially be empty
  vector<int>  myVector{};
  do{
    cout << "Enter next integer (-1 to stop entering numbers)" << endl;
    cin  >> input ;
    if (input != -1)
    {
      myVector.push_back(input);

    }
  } while( input != -1 );
  sort(myVector.begin(),myVector.end());
  for( int item : myVector )
  {
    cout << item << endl;
  }
  cout << "----------------------" << endl;

  return 0;
}

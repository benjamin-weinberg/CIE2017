/*------------------------------------------------------------------------------
 * Programmer: Ben Weinberg
 * Name:
 * Description:
 -------------------------------------------------------------------------------*/
#include <iostream>
#include "helperfunctions.cpp"
#include "Movie.cpp"
#include "RentalCustomer.cpp"

using namespace std;

int main(void)
{
    cout << "----------------------------------------------" << endl
         << "-     Welcome to the move rental system!     -" << endl
         << "----------------------------------------------" << endl << endl;
    int choice = 0;
    RentalCustomerPtrType userStartPtr = nullptr;
    MoviePtrType movieStartPtr = nullptr;
    const unsigned int INITIALNUMMOVIES=11;
    const unsigned int INITIALNUMUSERS=8;
    static const char* const InitialMovieNameList[INITIALNUMMOVIES] = {
      "Passengers", "La La Land", "Assasins Creed", "Sing",
      "Suicide Squad", "The Girl on the Train", "The Magnificient Seven",
      "Underworld: Blood Wars", "Fifty Shades Darker", "Moana", "Arrival"
    };
    static const char* const InitialUserNamesList[INITIALNUMUSERS] = {
      "E.Mou", "B.Evans", "B.Schweer", "R.Su", "K.Anderson",
      "K.Christensen", "M.Jacob", "H.Johnson"
    };
    //initialize the userlist and get the pointer to the first node

    for (int i=0;i<INITIALNUMUSERS;i++)
    {
        addUser(&userStartPtr,InitialUserNamesList[i]);
    }
    for (int i=0;i<INITIALNUMMOVIES;i++)
    {
        addMovie(&movieStartPtr,InitialMovieNameList[i]);
    }



    //    userStartPtr = initialUsers(InitialUserNamesList,INITIALNUMUSERS);
    //    movieStartPtr = intitialMovies(InitialMovieNameList, INITIALNUMMOVIES);

    string nameOfUser,nameOfMovie;
    int numChoice=0;
    /*====================================
    /     BEGIN MAIN MOVIE PROGRAM
    /=====================================*/
    printMenu(choice);
    while (choice != 8)
    {
        switch(choice)
        {
            //1) LIST STATUS
            case 1:
                listStatus(userStartPtr,movieStartPtr);
            break;
            //2) RETURN A MOVIE
            case 2:
                returnMovie(userStartPtr,movieStartPtr);
            break;
            //3) RENT A MOVIE
            case 3:
                rent(userStartPtr,movieStartPtr);
            break;
            //4) ADD A USER
            case 4:
                cout << "============================================="<<endl
                     << "                 Add User                    "<<endl
                     << "============================================="<<endl<<endl
                     << "Please enter the name of the user: ";
                cin.ignore();
                getline(cin,nameOfUser);
                addUser(&userStartPtr, nameOfUser);
                cout << endl<<endl<<"User " << nameOfUser << " was added!"<<endl<<endl;
            break;
            //5) DELETE A USER
            case 5:
                cout << "============================================="<<endl
                     << "              Delete A User                  "<<endl
                     << "============================================="<<endl<<endl;
                printUsers(userStartPtr);
                cout <<endl<<endl<< "Please enter the number of the user you want to delete: ";
                cin>>numChoice;
                nameOfUser=getUserName(userStartPtr,numChoice);
                deleteUser(&userStartPtr, &movieStartPtr, nameOfUser);
            break;
            //6) ADD A MOVIE
            case 6:
                cout << "============================================="<<endl
                     << "                 Add Movie                   "<<endl
                     << "============================================="<<endl<<endl
                     << "Please enter the name of the movie: ";
                cin.ignore();
                getline(cin,nameOfMovie);
                addMovie(&movieStartPtr, nameOfMovie);
                cout << endl<<endl<<"Movie " << nameOfMovie << " was added!"<<endl<<endl;
            break;
            //7) DELETE A MOVIE
            case 7:
                cout << "============================================="<<endl
                     << "              Delete A Movie                 "<<endl
                     << "============================================="<<endl<<endl;
                printMovies(movieStartPtr);
                cout <<endl<<endl<< "Please enter the number of the movie you want to delete: ";
                cin>>numChoice;
                nameOfMovie=getMovieName(movieStartPtr,numChoice);
                deleteMovie(&movieStartPtr, nameOfMovie);
            break;
            //ALL OTHER CASES (choice verification)
            default:
                cout << "Invalid choice, please pick again!" << endl<<endl;
            break;
        }
        printMenu(choice);
    }

  return 0;
}

/*------------------------------------------------------------------------------
 * Programmer: Ben Weinberg
 * Name: helperfunctions.cpp
 * Description: helper functions for homework 4
 -------------------------------------------------------------------------------*/
#include "Movie.h"
#include "RentalCustomer.h"
#include "helperfunctions.h"
#include <iostream>

using namespace std;

void printMenu(int &choice)
{
    cout << "=============================================" <<endl
         << "#                Main Menu:                 #" <<endl
         << "=============================================" <<endl
         << "Please enter the number of the action you would like to preform: "<<endl << endl
         << "1) List status" << endl
         << "2) Return a Movie "<<endl
         << "3) Rent a Movie" << endl
         << "4) Add a User" << endl
         << "5) Delete a User" << endl
         << "6) Add a Movie" << endl
         << "7) Delete a Movie" << endl
         << "8) Exit program"<<endl<<endl
         << "Choice(1-8) : ";
    cin >> choice;
    cout << endl << endl;
    return;
}

void printUsers(RentalCustomerPtrType userStartPtr)
{
    int i=0;
    int moviesincirc =0;
    cout << "Users and movies they have rented:" << endl
         << "----------------------------------"<<endl;
    for (RentalCustomerPtrType currentPtr = userStartPtr; currentPtr != nullptr; currentPtr = currentPtr->getNextPtr())
    {
        i++;
        cout << i << ") " << currentPtr->getName() << endl;
        if (currentPtr->getMoviePtr()!=nullptr)
        {
            cout<< "    Rented Movies:"<<endl;
            for (MoviePtrType currentMovPtr = currentPtr->getMoviePtr(); currentMovPtr != nullptr; currentMovPtr = currentMovPtr->getNextPtr())
            {
                moviesincirc++;
                cout << "    " << currentMovPtr->getName() << endl;
            }
        }
    }
    cout << "Total Movies in circulation: " << moviesincirc<<endl;
    cout << endl;
    return;
}

void printMovies(MoviePtrType movieStartPtr)
{
    int i =0;
    cout << "Movies available:"<<endl
         << "----------------------------------"<<endl;
    for (MoviePtrType currentPtr = movieStartPtr; currentPtr != nullptr; currentPtr = currentPtr->getNextPtr())
    {
        i++;
        cout << i <<") "<< currentPtr->getName() << endl;
    }
}

void listStatus(RentalCustomerPtrType userStartPtr,MoviePtrType movieStartPtr)
{
    cout << "============================================="<<endl
         << "                   Status                    "<<endl
         << "============================================="<<endl<<endl;
    printUsers(userStartPtr);
    printMovies(movieStartPtr);
    cout << "--------------------------"<<endl<<endl;
    return;
}

void addUser(RentalCustomerPtrType *userStartPtr,string value)
{
    RentalCustomerPtrType newNodePtr; /* will point to newly created node */
    RentalCustomerPtrType beforeNodePtr, afterNodePtr;
    /* dynamically allocate memory for new node */
    newNodePtr = new RentalCustomer;
    /* insert node in list */
    if (newNodePtr != nullptr) /* if successfully allocated memory */
    {
        newNodePtr->setName(value);
        newNodePtr->setNextPtr(nullptr);
        newNodePtr->setMoviePtr(nullptr);
        /* determine where node should be inserted    */
        /* by defining beforeNodePtr and afterNodePtr */
        beforeNodePtr = nullptr;
        afterNodePtr = *userStartPtr;
        while (afterNodePtr != nullptr && afterNodePtr->getName() < value)
        {
            beforeNodePtr = afterNodePtr;
            afterNodePtr = afterNodePtr->getNextPtr();
        }
        /* case 1: insert at beginning of list (beforeNodePtr is still NULL) */
        if (beforeNodePtr == NULL)
        {
            newNodePtr->setNextPtr(*userStartPtr); /* set link to prior start */
            *userStartPtr = newNodePtr;       /* set new value for the userStartPtr */
        }
        else /* case 2: insert in middle or at end of list */
        {
            beforeNodePtr->setNextPtr(newNodePtr);
            newNodePtr->setNextPtr(afterNodePtr);
        }
    }
    else
    {
        cout << "Error allocating memory for new node of linked list." << endl ;
    }
}

void addMovie(MoviePtrType *movieStartPtr,string value)
{
    MoviePtrType newNodePtr; /* will point to newly created node */
    MoviePtrType beforeNodePtr, afterNodePtr;
    /* dynamically allocate memory for new node */
    newNodePtr = new Movie;
    /* insert node in list */
    if (newNodePtr != nullptr) /* if successfully allocated memory */
    {
        newNodePtr->setName(value);
        newNodePtr->setNextPtr(nullptr);
        /* determine where node should be inserted    */
        /* by defining beforeNodePtr and afterNodePtr */
        beforeNodePtr = nullptr;
        afterNodePtr = *movieStartPtr;
        while (afterNodePtr != nullptr && afterNodePtr->getName() < value)
        {
            beforeNodePtr = afterNodePtr;
            afterNodePtr = afterNodePtr->getNextPtr();
        }
        /* case 1: insert at beginning of list (beforeNodePtr is still NULL) */
        if (beforeNodePtr == NULL)
        {
            newNodePtr->setNextPtr(*movieStartPtr); /* set link to prior start */
            *movieStartPtr = newNodePtr;       /* set new value for the movieStartPtr */
        }
        else /* case 2: insert in middle or at end of list */
        {
            beforeNodePtr->setNextPtr(newNodePtr);
            newNodePtr->setNextPtr(afterNodePtr);
        }
    }
    else
    {
        cout << "Error allocating memory for new node of linked list." << endl ;
    }
}


void deleteUser(RentalCustomerPtrType *userStartPtr, MoviePtrType *movieStartPtr, string nameOfUser)
{
    RentalCustomerPtrType nodeToDeletePtr; /* will point to node to be deleted */
    RentalCustomerPtrType priorNodePtr;    /* will point to node immediately preceding node to be deleted */
    /* 1. determine which node should be deleted by defining nodeToDeletePtr and priorNodePtr */
    nodeToDeletePtr = *userStartPtr;
    priorNodePtr = nullptr;
    while (nodeToDeletePtr != nullptr && nodeToDeletePtr->getName() != nameOfUser)
    {
        priorNodePtr = nodeToDeletePtr;
        nodeToDeletePtr = nodeToDeletePtr->getNextPtr();
    }
    /* 2. delete node */
    if (nodeToDeletePtr == nullptr) /* empty list or node not found */
    {
        return;
    }
    else if (priorNodePtr == nullptr) /* first node should be deleted */
    {
        *userStartPtr = (*userStartPtr)->getNextPtr(); /* move userStartPtr to second node in list */
        delete nodeToDeletePtr;            /* free memory */
    }
    else /* middle or end node should be deleted */
    {
        priorNodePtr->setNextPtr(nodeToDeletePtr->getNextPtr()); /* skip nodeToDelete in linked list */
        delete nodeToDeletePtr;                            /* free memory */
    }
    cout << endl<<endl<<"User was deleted!"<<endl<<endl;
}

void deleteMovie(MoviePtrType *movieStartPtr, string nameOfMovie)
{
    MoviePtrType nodeToDeletePtr; /* will point to node to be deleted */
    MoviePtrType priorNodePtr;    /* will point to node immediately preceding node to be deleted */
    /* 1. determine which node should be deleted by defining nodeToDeletePtr and priorNodePtr */
    nodeToDeletePtr = *movieStartPtr;
    priorNodePtr = nullptr;
    while (nodeToDeletePtr != nullptr && nodeToDeletePtr->getName() != nameOfMovie)
    {
        priorNodePtr = nodeToDeletePtr;
        nodeToDeletePtr = nodeToDeletePtr->getNextPtr();
    }
    /* 2. delete node */
    if (nodeToDeletePtr == nullptr) /* empty list or node not found */
    {
        return;
    }
    else if (priorNodePtr == nullptr) /* first node should be deleted */
    {
        *movieStartPtr = (*movieStartPtr)->getNextPtr(); /* move movieStartPtr to second node in list */
        delete nodeToDeletePtr;            /* free memory */
    }
    else /* middle or end node should be deleted */
    {
        priorNodePtr->setNextPtr(nodeToDeletePtr->getNextPtr()); /* skip nodeToDelete in linked list */
        delete nodeToDeletePtr;                            /* free memory */
    }
    cout << endl<<endl<<"Movie was deleted!"<<endl<<endl;
}

string getUserName(RentalCustomerPtrType userStartPtr, int choice)
{
    RentalCustomerPtrType finalPtr = nullptr;
    int counter=0;
    for (RentalCustomerPtrType currPtr = userStartPtr;currPtr!=nullptr && counter != choice; currPtr=currPtr->getNextPtr())
    {
        counter++;
        finalPtr=currPtr;
    }
    return finalPtr->getName();

}

string getMovieName(MoviePtrType movieStartPtr, int choice)
{
    MoviePtrType finalPtr = nullptr;
    int counter=0;
    for (MoviePtrType currPtr = movieStartPtr;currPtr!=nullptr && counter != choice; currPtr=currPtr->getNextPtr())
    {
        counter++;
        finalPtr=currPtr;
    }
    return finalPtr->getName();

}

void rent(RentalCustomerPtrType userStartPtr,MoviePtrType movieStartPtr)
{
    int choiceUser, choiceMovie;
    printUsers(userStartPtr);
    cout << endl<<"Please enter the user number that is renting a movie: ";
    cin >> choiceUser;
    cout << endl<<endl;
    printMovies(movieStartPtr);
    cout << endl << "Please enter the Movie number that you would like to rent: ";
    cin >> choiceMovie;




}

void returnMovie(RentalCustomerPtrType userStartPtr,MoviePtrType movieStartPtr)
{
    int choiceUser, choiceMovie;
    printUsers(userStartPtr);
    cout << endl<<"Please enter the user number that would like to return a movie: ";
    cin >> choiceUser;
    cout << endl << "Please enter the Movie number that you would like to return: ";
    cin >> choiceMovie;


}


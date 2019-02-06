/*------------------------------------------------------------------------------
 * Programmer: Ben Weinberg
 * Name: helperfunctions.h
 * Description: definition of helper functions defined in helperfunctions.cpp
 -------------------------------------------------------------------------------*/

#ifndef SRC_HELPERFUNCTIONS_H
#define SRC_HELPERFUNCTIONS_H
extern void printMenu(int &choice);
extern void listStatus(RentalCustomerPtrType userStartPtr,MoviePtrType movieStartPtr);
extern void printUsers(RentalCustomerPtrType userStartPtr);
extern void printUsers(MoviePtrType movieStartPtr);
extern void deleteUser(RentalCustomerPtrType userStartPtr, MoviePtrType movieStartPtr, string nameOfUser);
extern void deleteMovie(MoviePtrType movieStartPtr, string nameOfMovie);
extern string getMovieName(MoviePtrType movieStartPtr, int choice);
extern string getUserName(RentalCustomerPtrType userStartPtr, int choice);
extern void rent(RentalCustomerPtrType userStartPtr,MoviePtrType movieStartPtr);
extern void returnMovie(RentalCustomerPtrType userStartPtr,MoviePtrType movieStartPtr);

#endif // SRC_HELPERFUNCTIONS_H

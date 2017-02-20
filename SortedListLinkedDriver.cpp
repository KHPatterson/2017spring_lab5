#include "SortedListLinked.h"
#include "CD.h"
using CSC2110::CD;
#include "ListArray.h"
using CSC2110::ListArray;
#include "ListArrayIterator.h"
using CSC2110::ListArrayIterator;
#include <iostream>
using namespace std;

void addCDs(ListArray<CD>* list, SortedListLinked<CD>* lb)
{
   ListArrayIterator<CD>* iter = list->iterator();

   //DO THIS
   //iterate over and add the cds to the list box (use lb->addItem)
<<<<<<< HEAD
	while (curr.getNode() != NULL)
	{
		lb->addItem;
	}
	delete iter;
=======
   while (iter->hasNext())
   {
	   lb->add(iter->Next());
   }


   delete iter;
>>>>>>> 101859e353e2a3ee6cd04f3045a675b9c76942f5
}

void deleteCDs(ListArray<CD>* list)
{
   ListArrayIterator<CD>* iter = list->iterator();

   //DO THIS  
   //iterate over and delete the cds
<<<<<<< HEAD
	while(curr.getNode() != NULL)
	{
		NewNode<T>* node1 = curr;
		SortedListLinked<T>::remove(curr.getItem());
		curr = node1.getNext();
	}
=======

	while (iter->hasNext())
   {
	   CD* curr = iter->next();
	   delete curr;
   }


>>>>>>> 101859e353e2a3ee6cd04f3045a675b9c76942f5
   delete iter;
}

int main(int argc, char* argv[])
{
   ListArray<CD>* cds = CD::readCDs("cds.txt");
   //DO THIS
   //create and test the sorted linked list 
   
   SortedListLinked<CD>* sll = new SortedListLinked<CD>(&(CSC2110::CD::compare_items));


   return 0;
}

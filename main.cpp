#include <iostream>

#include "src/cutie.hpp"
#include "src/queue.hpp"
#include "src/kitty.hpp"
#include "src/puppy.hpp"
#include "src/marmoset.hpp"

using namespace std;
int main() {
  // Create a bunch of objects that implement the Cutie base class
  Kitty kitty("Kitty", 10);
  Puppy puppy("Puppy", 7);
  Marmoset marmoset("Pygmy Marmoset", 2);
 
  Queue<Cutie*> queue;
 
  // The size of the queue should equal zero since there are no objects in it
  cout << queue.size() << endl;
 
  // Add the cuties to the queue
  queue.enqueue(&puppy);
  queue.enqueue(&kitty);
  queue.enqueue(&marmoset);
 
  // The size of the queue should equal three since there are three objects in it
  cout << queue.size() << endl;
 
  // The first dequeue should return the puppy
  cout << queue.dequeue()->get_description() << endl;
 
  // The second dequeue should return the kitty
  cout << queue.dequeue()->get_description() << endl;
 
  // The third dequeue should return the pygmy marmoset
  cout << queue.dequeue()->get_description() << endl;
}
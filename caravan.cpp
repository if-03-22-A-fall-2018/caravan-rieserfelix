#include "caravan.h"
#include "general.h"
#include <stdlib.h>

struct Node {
  PackAnimal animal;

  struct Node* next;
};

struct CaravanImplementation{
   Node* _head;

   int length;
};

Caravan new_caravan()
{
  Caravan caravan = (Caravan)malloc(sizeof(struct CaravanImplementation));

  caravan->_head = 0;

  caravan->length = 0;

  return caravan;
}

int get_length(Caravan caravan)
{
  return caravan->length;
}

void delete_caravan(Caravan caravan)
{
  Node* curr = caravan->_head;

  while(curr != 0){

    Node* to_be_deleted = curr;

    curr = curr->next;

    sfree(to_be_deleted);

  }
  sfree(caravan);
}

void add_pack_animal(Caravan caravan, PackAnimal animal)
{

  if (animal != 0) {

    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->animal = animal;
    
    if (caravan->_head != 0) {

      newNode->next = caravan->_head;

    }
    caravan->_head = newNode;

    caravan->length++;

    add_to_caravan(animal, caravan);
  }
}

void remove_pack_animal(Caravan caravan, PackAnimal animal)
{

}

int get_caravan_load(Caravan caravan)
{
  return 0;
}

void unload(Caravan caravan)
{

}

int get_caravan_speed(Caravan caravan)
{
  return 0;
}
void optimize_load(Caravan caravan)
{

}

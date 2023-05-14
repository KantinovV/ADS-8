// Copyright 2021 NNTU-CS
#include "train.h"

void Train::addCage(bool light) {
  if (!begin) {
    Cage* item = new Cage;
    item->light = light;
    begin = item;
    end = item;
  } else {
    Cage* item = new Cage;
    item->light = light;
    end->next = item;
    item->prev = end;
    end = item;
  }
  end->next = begin;
  begin->prev = end;
}

int Train::getLength() {
  Cage* tmp = begin;
  temp->light = true;
  while (1) {
    tmp = tmp->next;
    count++;
    if (temp->light) {
      temp->light = false;
      for (int i = 0; i < count; i++) {
        temp = temp->prev;
      }
      countOp += count * 2;
      if (!temp->light) {
        return count;
      }
      count = 0;
    }
  }
  return 0;
}

int Train::getOpCount() {
  return countOp;
}

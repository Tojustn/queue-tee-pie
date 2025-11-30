#pragma once
#include "cutie.hpp"

class Puppy : public Cutie {
  private:
    std::string description;
    int cuteness_rating;

  public:
    Puppy(std::string description, int cuteness_rating) 
      : Cutie(description, cuteness_rating), 
        description(description), 
        cuteness_rating(cuteness_rating) {}

    std::string get_description() override {
      return description;
    }

    int get_cuteness_rating() override {
      return cuteness_rating;
    }
};


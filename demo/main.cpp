// Copyright 2022 Melnikova Maria <dandelion.m@mail.ru>
#include "client.hpp"
int main() {
  Client cl;
  // {"input":"hel"}
  cl.request();
  std::cout << std::endl;
  std::cout << "RESPONSE: " << std::endl;
  std::cout << std::endl;
  cl.start();
}
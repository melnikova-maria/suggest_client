// Copyright 2022 Melnikova Maria <dandelion.m@mail.ru>
#ifndef INCLUDE_CLIENT_HPP_
#define INCLUDE_CLIENT_HPP_

#include <boost/beast/core.hpp>
#include <boost/beast/http.hpp>
#include <boost/beast/version.hpp>
#include <boost/asio/ip/tcp.hpp>
#include <boost/asio/connect.hpp>
#include <boost/config.hpp>
#include <nlohmann/json.hpp>
#include <cstdlib>
#include <iostream>
#include <string>

using nlohmann::json;

namespace beast = boost::beast;
namespace http = beast::http;
namespace net = boost::asio;

class Client
{
 private:
  std::string _req;

 public:
  Client();
  void request();
  void start();
  ~Client();
};

#endif // INCLUDE_CLIENT_HPP_

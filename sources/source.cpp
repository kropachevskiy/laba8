// Copyright 2020 kropachevskiy <kropachev-95@mail.ru>

#include <Client.hpp>
int main(int argc, char* argv[]) {
  Client client(argc, argv);
  client.Run();
}

//./cmake-build-debug/demo  http://localhost:8080/v1/api/suggest {\"input\":\"hel\"}

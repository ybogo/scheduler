#include <chrono>
#include <iostream>

#include <boost/asio.hpp>

#include "hello.hpp"

int main() {
    boost::asio::io_context io;
    boost::asio::steady_timer t(io, boost::asio::chrono::seconds(5));
    t.async_wait(&SayHello);

    io.run();
    return 0;
}

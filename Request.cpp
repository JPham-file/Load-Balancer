//
// Created by JP on 9/23/2023.
//

#include "Request.h"
#include <cstdlib>

Request::Request() {
    time = rand()%10+5;
    IP_in = generate_rand_IP();
    IP_out = generate_rand_IP();
}

std::string Request::generate_rand_IP() {
    int p1 = rand() % 256;
    int p2 = rand() % 256;
    int p3 = rand() % 256;
    int p4 = rand() % 256;
    std::string res = std::to_string(p1) + "." + std::to_string(p2) + "." + std::to_string(p3) + "." + std::to_string(p4);
    return res;
}

int Request::get_time() const {
    return time;
}

std::string Request::get_IP_in() const {
    return IP_in;
}

std::string Request::get_IP_out() const {
    return IP_out;
}


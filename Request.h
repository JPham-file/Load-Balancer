//
// Created by JP on 9/23/2023.
//

#ifndef PROJECT_2_REQUEST_H
#define PROJECT_2_REQUEST_H

#include <string>


class Request {
public:
    Request();
    int get_time() const;
    std::string get_IP_in() const;
    std::string get_IP_out() const;
    std::string generate_rand_IP();
private:
    int time;
    std::string IP_in;
    std::string IP_out;
};


#endif //PROJECT_2_REQUEST_H

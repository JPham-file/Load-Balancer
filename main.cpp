#include <iostream>
#include <vector>
#include <queue>
#include <ctime>

#include "WebServer.h"
#include "Request.h"
#include "LoadBalancer.h"

using std::cout, std::endl, std::cin;
using std::srand;
using std::queue;

int main() {

    // TODO: user input for numbers of servers and simulation time
    int num_servers = 0;
    int num_time = 0;
    srand(static_cast<unsigned>(time(nullptr)));

    cout << "number of servers: ";
    cin >> num_servers;
    cout << "number of time: ";
    cin >> num_time;
    cout << "[STARTING]" << endl;

    queue<Request> request_q = {};
    int request_q_size = num_servers*5;
    for (int i = 0; i < request_q_size; i++) {
        Request r;
        request_q.push(r);
//        cout << r.get_IP_in() << " " << r.get_time() << endl;
//        cout << r.get_IP_out() << " " << r.get_time() << endl;
    }

    cout << "[ENDED]" << endl;
    return 0;
}

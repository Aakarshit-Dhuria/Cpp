// Threads in C++
// theads helps in doing multiple things at a single time

#include <iostream>
#include <thread>
using namespace std;

static bool s_finished = false;

void doWork()
{
    using namespace std::literals::chrono_literals;
    cout << "Started thread id = " << std::this_thread::get_id() << endl;

    while (!s_finished)
    {
        cout << "Working..\n";
        this_thread ::sleep_for(1s);
    }
}

int main()
{
    thread worker(doWork);
    cin.get();
    s_finished = true;
    worker.join();
    cout << "Finished" << endl;
    cout << "Started thread id = " << std::this_thread::get_id() << endl;
    cin.get();
    return 0;
}
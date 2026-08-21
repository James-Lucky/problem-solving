#include <iostream>
#include <bits/stdc++.h>

int main()
{

    std::queue<int> myQueue;
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    std::cout << "Queue size: " << myQueue.size() << std::endl;
    std::cout << "Front element: " << myQueue.front() << std::endl;
    std::cout << "Back element: " << myQueue.back() << std::endl;

    std::cout << "Removing elements: ";
    while (!myQueue.empty())
    {
        std::cout << myQueue.front() << " ";
        myQueue.pop();
    }
    std::cout << std::endl;

    if (myQueue.empty())
    {
        std::cout << "The queue is now empty." << std::endl;
    }

    
    



    return 0;
}

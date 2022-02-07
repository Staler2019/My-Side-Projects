/**
 * @file bfs.cpp
 * @author Staler2019 (github.com/Staler2019)
 * @brief BFS search, usage see https://github.com/Staler2019/NCU-HW/blob/master/Algorithm-hw/final_exam/BFS.cpp
 * @version 1
 * @date 2021-06-22
 *
 * @copyright Copyright (c) 2021
 *
 */
#include <iostream>
#include <queue>
using namespace std;

/**
 * @brief your node definition
 *
 */
struct Node {
};

/**
 * @brief expand bfs from now Node
 *
 * @param Q readyQueue, for upcoming Nodes
 * @param now nowExectuting Node
 * @param accessed Nodes have been pushed into readyQueue
 */
void bfsForward(queue<Node> &Q, Node &now, vector<Node> &accessed)
{
    /**
     * @brief template for expanding Node
     *
     */
    /***
    Node newNode = now;
    if (find(accessed.begin(), accessed.end(), newNode) == accessed.end()) {
        Q.emplace(newNode);
        accessed.push_back(newNode);
    }
    */
}
/**
 * @brief this bfs would not access the same Node
 *
 */
void bfs(Node &startNode, Node &endNode)
{
    queue<Node> readyQueue;
    vector<Node> accessed;

    readyQueue.emplace(startNode);
    accessed.push_back(startNode);

    while (readyQueue.size() != 0) {
        Node now = readyQueue.front();
        readyQueue.pop();
        // printArr(now);
        if (now == endNode)
            break;
        bfsForward(readyQueue, now, accessed);
    }
}

int main()
{
}
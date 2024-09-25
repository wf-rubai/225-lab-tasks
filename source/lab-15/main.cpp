#include <iostream>
#include "GraphType.cpp"

using namespace std;

int main() {

    GraphType<char> gt(8);
    gt.AddVertex('A');
    gt.AddVertex('B');
    gt.AddVertex('C');
    gt.AddVertex('D');
    gt.AddVertex('E');
    gt.AddVertex('F');
    gt.AddVertex('G');
    gt.AddVertex('H');

    gt.AddEdge('A', 'B', 1);
    gt.AddEdge('A', 'C', 1);
    gt.AddEdge('A', 'D', 1);
    gt.AddEdge('B', 'A', 1);
    gt.AddEdge('D', 'A', 1);
    gt.AddEdge('D', 'G', 1);
    gt.AddEdge('D', 'E', 1);
    gt.AddEdge('G', 'F', 1);
    gt.AddEdge('F', 'H', 1);
    gt.AddEdge('H', 'E', 1);

    cout << gt.OutDegree('D') << endl;

    if(gt.FoundEdge('A', 'D'))
        cout << "Found" << endl;
    else
        cout << "Not found" << endl;
    if(gt.FoundEdge('B', 'D'))
        cout << "Found" << endl;
    else
        cout << "Not found" << endl;

    gt.DepthFirstSearch('B', 'E');
    gt.DepthFirstSearch('E', 'B');
    gt.BreadthFirstSearch('B', 'E');

    // gt.print();

    return 0;
}

#include "Node.h"; 
#include "Edge.h";
#include <vector>
#include <iostream>
using namespace std; 

class Graph { 
    private:
        vector<Node> nodes; 
        vector<vector<Edge>> edgeList;  
    public: 

    // all city names and the size 
    // of the city is equal to the size of num nodes
    Graph (vector<string> cities){ 
        for(int i = 0; i < cities.size(); ++i){ 
            Node tmp = Node(cities[i]); 
            nodes.push_back(tmp);
            edgeList.push_back(vector<Edge>());
        }  
    }

    void addEdge(Node city, Node destination, int weight){ 
        Edge tmp = Edge(city, destination, weight); 
        // get the city name in the list of edges and then add tmp to it 
        
        
    }

};
#include "Node.h";
class Edge { 
    private: 

        Node city;
        Node destination; 
        int weight; 
    
    public:

        Edge(Node city, Node destination, int weight){ 
            this->city = city; 
            this->destination = destination; 
            this->weight = weight; 
        }
};
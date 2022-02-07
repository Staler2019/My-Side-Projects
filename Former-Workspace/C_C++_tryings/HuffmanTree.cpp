#include <iostream>
#include <queue>
#include <map>
using namespace std;


class Node{
    public:
    Node(Node* _left, Node * _right, int _value, char _element): left(_left),right(_right),value(_value),element(_element){}
    Node* getLeft(){return left;}
    Node* getRight() {return right;}
    int getValue(){return value;}
    char getElement(){return element;}

    private:
    int value;
    char element = NULL;
    Node* left = nullptr;
    Node* right = nullptr;
};


class HuffmanTree {
   public:
    vector<pair<char, string>> getMap() {
        return decodingTree;
    }
    HuffmanTree(string _str) : str(_str) { createMap(); }

   private:
    void createMap() {
        // count for each letter's
        map<char, int> char_count;
        for(auto &i:str) char_count[i]++;

        // store the number change until size()==1
        priority_queue<Node*, vector<Node*>, [](Node* a,Node* b)->bool{
            return a.getValue()>b.getValue();
        }> pq;

        for (auto& i : char_count) pq.push(Node(nullptr,nullptr,i.second,i.first));

        while(pq.size()>1){
            Node* one = pq.pop();
            Node* two = pq.pop();
            pq.push(Node(one,two,one->getValue()+two->getValue(),NULL));
        }

        Node* head = pq.pop()
        createHuffmanCode(head);
        delete head;
    }

    void createHuffmanCode(Node* node, string code){
        if(node->getLeft()!=nullptr)
            createHuffmanCode(node->getLeft(),code+"0");
        if(node->getRight()!=nullptr)
            createHuffmanCode(node->getRight(),code+"1");

        if(node->getLeft() == nullptr && node->getRight() == nullptr){
            if(node->getElement()!=NULL)
                decodingTree.emplace_back(node->getLeft()->getElement(),code);
            delete node;
            return;
        }
    }


    string str = "";
    vector<pair<char, string>> decodingTree;
};


int main() {
    string str = "";
    cout << "Please input your string:";
    cin >> str;
    auto hf = HuffmanTree(str);

    auto hfMap = hf.getMap();
    for(auto &i: hfMap)
        cout << i.first << " " << i.second << endl;
}
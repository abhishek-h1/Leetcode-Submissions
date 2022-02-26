/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(!node)
            return node;
        unordered_map<Node*,Node*> m;
        queue<Node*> q;
        q.push(node);
        m[node]=new Node(node->val);
        
        while(!q.empty())
        {
            Node* temp=q.front();
            q.pop();
            
            for(auto nbr:temp->neighbors)
            {
                if(m[nbr]==NULL)
                {
                    q.push(nbr);
                    m[nbr]=new Node(nbr->val);
                }
                m[temp]->neighbors.push_back(m[nbr]);
            }
        }
        return m[node];
    }
};
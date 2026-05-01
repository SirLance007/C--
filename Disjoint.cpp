// Hare Krishna
// Code by Prankur Sharma
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <queue>
#include <stack>
#include <deque>
#include <cmath>
#include <climits>
using namespace std;

#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

class Disjoint{
    vector<int> rank , parent;

    public : 

    Disjoint(int n){
        rank.resize(n+1 , 0);
        parent.resize(n+1);

        for(int i = 1 ; i <= n ; i++){
            parent[i] = i;
        }
    }

    // to find parent
    int findPar(int node){
        if(node == parent[node]){
            return node;
        }
        else{
            return parent[node] = findPar(parent[node]);
        }
    }


    void unionByRank(int u , int v){
        int u_p = findPar(u);
        int v_p = findPar(v);

        if(u_p == v_p){
            return;
        }

        if(rank[u_p] < rank[v_p]){
            parent[u_p] = v_p; 
        }else if(rank[u_p] > rank[v_p]){
            parent[u_v] = u_p;
        }else{
            parent[u_v] = u_p;
            rank[u_v]++;
        }
    }

}

// Use case
// Jab apan graph banate hai us time apne ko kisi bhi point par kha jaa sakta hai ki aap ye batao ki do elements jo hai kya vo ek hi group ke hai ya nhi 
// toh usko liye we will gonna use disjoint set ... jisse we could just see ki jin compnent ke liye apne ko pucha hai kya unka ultimate parent same node hai ya nhi
// agar hai then they belong to the same component
// if not then they do no belong to the same component
// One more thing when we club two component why we attach smaller component to the bigger component
vector<bool> visited;
stack<int> s;

void TS(vector<int> adj[], int x){
            visited[x]=true;
            for(int j=0;j<adj[x].size();j++){
                if(!visited[x][j])
                TS(adj, adj[x][j]);
            }
        s.push(x);  
}

int* topoSort(int V, vector<int> adj[])
{   
    
    for(int i=0;i<V;i++){
        visited.push_back(false);
    }
    for(int i=0;i<V;i++){
        if(!visited[i])
            TS(adj, i);
    }

    int arr[V+1];
    int i=0;
    while(!s.empty()){
        int t = s.top();
        arr[i]=t;
        i++;
        s.pop();
    }

    return arr;
}
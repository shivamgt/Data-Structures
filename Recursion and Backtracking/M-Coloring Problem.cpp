//Time - O( n^m)
//Space - O(n)

//n - node
//m - color 

bool isSafe(int node, int color[], bool graph[101][101], int V, int col)
{
    for(int i=0; i<=V; i++)
    {
        if( i != node && graph[i][node] == 1 && color[i] == col)
            return false;
    }
    return true;
}

bool solve(int node, int color[], int m, int V, bool graph[101][101])
{
    if(node == V)
        return true;
    for(int i=1; i<=m; i++)
    {
        if( isSafe(node, color, graph, V, i))
        {
            color[node] = i;
            if( solve(node+1, color, m, V, graph))
                return true;
            color[node] = 0;   //Backtrack    
        }
    }
    return false;
}

bool graphColoring(bool graph[101][101], int m, int V)
{
    int color[V] = {0};
    if( solve(0, color, m, V, graph ) )
        return true;
    return false;
}

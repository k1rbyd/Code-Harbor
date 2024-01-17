#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int front, rear;
    int capacity;
    int* array;
} Queue;

Queue* createQueue(int capacity) {
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    queue->front = queue->rear = -1;
    queue->capacity = capacity;
    queue->array = (int*)malloc(queue->capacity * sizeof(int));
    return queue;
}

int isQueueEmpty(Queue* queue) {
    return (queue->front == -1);
}

void enqueue(Queue* queue, int item) {
    queue->array[++queue->rear] = item;
    if (queue->front == -1)
        queue->front = 0;
}

int dequeue(Queue* queue) {
    int item = queue->array[queue->front];
    if (queue->front == queue->rear)
        queue->front = queue->rear = -1;
    else
        queue->front++;
    return item;
}

void BFS(int** graph, int numNodes, int startNode, int* traversal, int* level, int* parent) {
    int* visited = (int*)calloc(numNodes, sizeof(int));

    Queue* queue = createQueue(numNodes);

    visited[startNode] = 1;
    level[startNode] = 0;
    parent[startNode] = -1;
    enqueue(queue, startNode);

    int index = 0;

    while (!isQueueEmpty(queue)) {
        int currentNode = dequeue(queue);
        traversal[index] = currentNode;
        index++;

        for (int i = 0; i < numNodes; i++) {
            if (graph[currentNode][i] == 1 && !visited[i]) {
                visited[i] = 1;
                level[i] = level[currentNode] + 1;
                parent[i] = currentNode;
                enqueue(queue, i);
            }
        }
    }

    free(visited);
    free(queue->array);
    free(queue);
}

void printBFSResult(int* traversal, int* level, int* parent, int numNodes) {
    for (int i = 0; i < numNodes; i++) 
    {
        if(i!=numNodes-1)
        printf("%d, ", traversal[i]);
        else
        printf("%d",traversal[i]);
    }
    printf("\n");
    printf("\n");

    for (int i = 0; i < numNodes; i++) {
        int node = traversal[i];
        if(i!=numNodes-1)
        printf("%d, ", level[node]);
        else
        printf("%d",level[node]);
    }
    printf("\n");
    printf("\n");

    for (int i = 0; i < numNodes; i++) {
        int node = traversal[i];
        if(i!=numNodes-1)
        printf("%d, ", parent[node]);
        else
        printf("%d",parent[node]);
    }
    printf("\n");
    printf("\n");
}

int main() {
    int numNodes, numEdges;
    printf("Number of nodes:");
    scanf("%d", &numNodes);
    printf("Number of edges:");
    scanf("%d", &numEdges);

    int** graph = (int**)malloc(numNodes * sizeof(int*));
    for (int i = 0; i < numNodes; i++)
    graph[i] = (int*)calloc(numNodes, sizeof(int));

    for (int i = 0; i < numEdges; i++) {
        int node1, node2;
        scanf("%d, %d", &node1, &node2);
        graph[node1][node2] = 1;
        graph[node2][node1] = 1;
    }

    int startNode;
    scanf("%d", &startNode);

    int* traversal = (int*)malloc(numNodes * sizeof(int));
    int* level = (int*)calloc(numNodes, sizeof(int));
    int* parent = (int*)calloc(numNodes, sizeof(int));

    BFS(graph, numNodes, startNode, traversal, level, parent);

    printBFSResult(traversal, level, parent, numNodes);

    for (int i = 0; i < numNodes; i++)
        free(graph[i]);
    free(graph);
    free(traversal);
    free(level);
    free(parent);
}

/*
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

struct graph* makegraph();
void BFS(struct graph* g);
int isEmpty();
int isFull();
void enqueue(int x);
int dequeue();
int count_q();


int queue[SIZE];
int front = -1;
int rear = -1;

struct graph{
    int V;
    int E;
    int adjmat[10][10];
    int level[10];
    int parent[10];
};

struct graph* makegraph(){
    int u,v;
    char sep;
    struct graph* g = malloc(sizeof(struct graph));
    scanf("%d",&g->V);
    scanf("%d",&g->E);
    for(int i =0;i<g->V;i++){
        g->level[i] = 0;
        g->parent[i] = -1;
    }
    for(int i =0;i<g->V;i++){
        for(int j=0;j<g->V;j++){
            g->adjmat[i][j] = 0;
        }
    }
    for(int i =0;i<g->E;i++){
        scanf("%d%c %d",&u,&sep,&v);
        for(int j =0;j<g->V;j++){
            for(int k =0;k<g->V;k++){
                g->adjmat[u][v] = 1;
                g->adjmat[v][u] = 1;
            }
        }
    }
    return g;
}

void BFS(struct graph* g){
    int count = 0;
    int traversal[g->V];
    int src,node;
    int visited[g->V];
    for(int i=0;i<g->V;i++){
        visited[i] = 0;
    }
    scanf("%d",&src);
    enqueue(src);
    visited[src] = 1;
    while(count_q()!=0){
        count_q();
        node = dequeue();
        traversal[count++] = node;
        visited[node] = 2;
        for(int i=0;i<g->V;i++){
            if(g->adjmat[node][i] == 1 && visited[i] == 0){
                enqueue(i);
                visited[i] = 1;
                g->level[i] = g->level[node] + 1;
                g->parent[i] = node;
            }
        }
    }
    for(int i =0;i<(g->V)-1;i++){
        printf("%d, ",traversal[i]);
    }
    printf("%d\n\n",traversal[(g->V)-1]);
    
    for(int i =0;i<(g->V)-1;i++){
        printf("%d, ",g->level[traversal[i]]);
    }
    printf("%d\n\n",g->level[traversal[(g->V)-1]]);
    
    for(int i =0;i<(g->V)-1;i++){
        printf("%d, ",g->parent[traversal[i]]);
    }
    printf("%d\n",g->parent[traversal[(g->V)-1]]);
}

int isEmpty(){
    if (front == -1){
        return 1;
    }
    return 0;
}

int isFull(){
    if(rear == SIZE-1){
        return 1;
    }
    return 0;
}

void enqueue(int x){
    if(isFull()){
        return;
    }
    if(isEmpty()){
        front++;
        rear++;
        queue[rear] = x;
        return;
    }
    rear++;
    queue[rear] = x;
}

int dequeue(){
    if (isEmpty()){
        return -9999;
    }
    int val = queue[front];
    front++;
    return val;
}

int count_q(){
    return rear-front+1;
}

int main(){
    struct graph* g;
    g = makegraph();
    BFS(g);
    return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct MinHeap
{
    int *d;
    int max_size;
    int size;
} MinHeap;

MinHeap *init_MinHeap(int max_size)
{
    MinHeap *Q = (MinHeap *)malloc(sizeof(MinHeap));
    Q->d = (int *)malloc((max_size + 1) * sizeof(int));
    Q->max_size = max_size;
    Q->size = 0;
    return Q;
}

void read_inputMinHeap(MinHeap *Q, int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i != n)
            scanf("%d, ", &(Q->d[i]));
        else
            scanf("%d", &(Q->d[i]));
        Q->size++;
    }
}

void minHeapify(MinHeap *Q, int index)
{
    int smallest = index;
    int left = 2 * index;
    int right = 2 * index + 1;

    if (left <= Q->size && Q->d[left] < Q->d[smallest])
        smallest = left;
    if (right <= Q->size && Q->d[right] < Q->d[smallest])
        smallest = right;
    if (smallest != index)
    {
        int temp = Q->d[index];
        Q->d[index] = Q->d[smallest];
        Q->d[smallest] = temp;
        minHeapify(Q, smallest);
    }
}

void buildMinHeap(MinHeap *Q)
{
    for (int i = Q->size / 2; i >= 1; i--)
        minHeapify(Q, i);
}

int extractMin(MinHeap *Q)
{
    if (Q->size == 0)
        return -1;

    int min = Q->d[1];
    Q->d[1] = Q->d[Q->size];
    Q->size--;
    minHeapify(Q, 1);
    return min;
}

void addElement(MinHeap *Q, int x)
{
    if (Q->size == Q->max_size)
        return;

    Q->size++;
    int i = Q->size;

    while (i > 1 && Q->d[i / 2] > x)
    {
        Q->d[i] = Q->d[i / 2];
        i = i / 2;
    }
    Q->d[i] = x;
}

void Heapsort(MinHeap *Q)
{
    int size = Q->size;
    for (int i = Q->size; i >= 2; i--)
    {
        int temp = Q->d[1];
        Q->d[1] = Q->d[i];
        Q->d[i] = temp;
        Q->size--;
        minHeapify(Q, 1);
    }
    Q->size = size;
}

void printHeap(MinHeap *Q)
{
    for (int i = 1; i <= Q->size; i++)
    {
        if (i != Q->size)
            printf("%d, ", Q->d[i]);
        else
            printf("%d", Q->d[i]);
    }
    printf("\n");
}

int main()
{
    MinHeap *Q;
    int choice = 0, max_size, n;
    scanf("%d", &max_size);
    Q = init_MinHeap(max_size);
    scanf("%d", &n);
    read_inputMinHeap(Q, n);
    int element;
    while (choice != 9)
    {
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            buildMinHeap(Q);
            break;
        case 2:
            scanf("%d", &element);
            addElement(Q, element);
            break;
        case 3:
            printf("%d\n", extractMin(Q));
            break;
        case 4:
            printHeap(Q);
            break;
        case 5:
            Heapsort(Q);
            printHeap(Q);
            break;
        case 9:
            break;
        default:
            break;
        }
    }
}

#include <stdio.h>
#include <stdlib.h>
 
int n;    
int adj[30][30];
char* color[30]={"white","grey","black"}; 
int queue[30], front = -1,rear = -1;
 
void get_BFS()
{
    int v;
    
    for(v=0; v<n; v++){ 
        color[v] = "white";
    }    
    
    printf("Enter Start Vertex for BFS: \n");
    scanf("%d", &v);
    BFS(v);
}
 
void BFS(int v)
{	
	
    int i;
    
    enque(v);
    color[v] = "grey";
    
    while(!isque_empty())
    {
        v = deque( );
        printf("%d ",v);
        color[v] = "black";

        	for(i=0;i<n;i++){

            	if(adj[v][i] == 1 && color[i] == "white"){ 
            	
                	enque(i);
                	color[i] = "grey";
                }	
            }
        
    }
}
 
void enque(int vertex)
{	

    if(rear<29)
    {
        if(front == -1) 
            front = 0;
        	rear = rear+1;
        	queue[rear] = vertex ;
    }
}
 
int isque_empty()
{
    if(front == -1 || front > rear)
        return 1;
    else
        return 0;
}
 
int deque()
{
    int x;
    x = queue[front];
    front = front+1;
    return x;
}
 
void create_graph()
{
    int count,max_edge,origin,destin;
 
    printf("Enter number of vertices : ");
    scanf("%d",&n);
    max_edge = n*(n-1);
 
    for(count=1; count<=max_edge; count++)
    {
        printf("Enter edge %d( -1 -1 to quit ) : ",count);
        scanf("%d %d",&origin,&destin);

        if((origin == -1) && (destin == -1))
            break;
 
       if(origin>=n || destin>=n || origin<0 || destin<0)
       {
           printf("Invalid edge!\n");
           count--;
       }
       else
       {
           adj[origin][destin] = 1;
      }
  }
}

void main()
{
    create_graph();
    get_BFS();
}
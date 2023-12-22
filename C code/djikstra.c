//Arun_9523
#include<stdio.h>
#define INFINITY 9999
#define MAX 10
void dijkstra(int G[MAX][MAX],int n,int startnode)
{
  int cost[MAX][MAX],distance[MAX],prev[MAX];
  int visited[MAX],count,mindist,nextnode,i,j;
  for(i=0;i<n;i++)
  {
     for(j=0;j<n;j++)
     {
       if (G[i][j]==0)
       {
          cost[i][j]=INFINITY;
       }
       else
       {
          cost[i][j]=G[i][j];
       }
     }
  }
  for(i=0;i<n;i++)
  {
    distance[i]=cost[startnode][i];
    prev[i]=startnode;
    visited[i]=0;
  }
  distance[startnode]=0;
  visited[startnode]=1;
  count=1;
  while(count<n-1)
  {
    mindist=INFINITY;
    for(i=0;i<n;i++)
    {
       if(distance[i]<mindist && !visited[i])
       {
          mindist=distance[i];
          nextnode=i;
       }
       visited[nextnode]=1;
       for(i=0;i<n;i++)
       {
          if(!visited[i])
          {
              if(mindist+cost[nextnode][i]<distance[i])
              {
                 distance[i]=mindist+cost[nextnode][i];
                 prev[i]=nextnode;
              }
          }
       }
     }
   count++;
  }
  for(i=0;i<n;i++)
  {
     if(i!=startnode)
     {
        printf("\nDistance of node%d=%d",i,distance[i]);
        printf("\nPath=%d",i);
        j=i;
        do
        {
            j=prev[j];
            printf("%d",j);
        }while(j!=startnode);
     }
  }
}  
int main()
{
   int G[MAX][MAX],i,j,n,u;
   printf("Enter the number of vertices=");
   scanf("%d",&n);
   printf("\n Enter the adjacency matrix=");
   for(i=0;i<n;i++)
   {
     for(j=0;j<n;j++)
     {
       scanf("%d",&G[i][j]);
     }
   }
   printf("\nEnter the starting node=");
   scanf("%d",&u);
   dijkstra(G,n,u);
return 0;
}

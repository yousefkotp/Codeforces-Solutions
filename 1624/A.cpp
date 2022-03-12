#include <stdio.h>
#include <stdlib.h>
int NumberofOperations(int A[],int Size){
int Max=A[0];
int Min=A[0];
for(int i=0;i<Size;i++)
{
    if(A[i]>Max)
        Max=A[i];
}
for(int i=0;i<Size;i++)
{
    if(A[i]<Min)
        Min=A[i];
}
int NOP=Max-Min;
return NOP;
}
 
int main()
{
    int NoTestCases;
    int TestCases[NoTestCases];
    scanf("%d",&NoTestCases);
    //For Running Getting the output
    for(int i=0;i<NoTestCases;i++)
    {
        int NoElements;
        scanf("%d",&NoElements);
        int *Case = (int*)malloc(NoElements*sizeof(int));
        for(int j=0;j<NoElements;j++)
        {
            int Element;
            scanf("%d",&Element);
            Case[j]=Element;
        }
            TestCases[i] = NumberofOperations(Case,NoElements);
 
 
    }
    //for printing the output
    for(int i=0;i<NoTestCases;i++)
    {
        printf("%d\n",TestCases[i]);
    }
    return 0;
}
#include<stdio.h>
#define SIZE 10
int hashTable[SIZE];//10
void insert(int key)
{
    int index=key%SIZE;
    while(hashTable[index]!=-1)
    {
        index=(index+1)%SIZE;
    }
    hashTable[index]=key;
}
void display()
{
    for(int i=0;i<SIZE;i++)
    {
        printf("Index %d: value %d\n",i,hashTable[i]);
    }
}
int main()
{
    for(int i=0;i<SIZE;i++)
    {
        hashTable[i]=-1;
    }
    insert(15);
    insert(25);//collision
    display();
}




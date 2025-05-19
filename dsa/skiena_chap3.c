// #include <bits/stdc++.h>

// #include<iostream>
#include<stdio.h>
// using namespace std;




// 3.1 contigious vs non contigious dsa

//3.1.1 arrays
// advantage-> constant time access given the index, space efficiency, memory locality
// disadvantage-> cannot adjust their size

// average copy-> 2n

// 3.1.2-> pointers and linked structures

// list<int> ls;
// searching a list




typedef struct list_c{
    int item;
    struct list_c *next;
 } list_c;

list_c *search_list(list_c *l, int x){

    if (l==NULL) return NULL;
    if (l->item==x) // *(l).item is equivalent to l->item
    {
        return(l);
    }
    else return (search_list(l->next,x));

}
 void insert_list(list_c **l, int x){ // not clear
    list_c *p; 
    p = malloc(sizeof(list_c));
    p->item=x;
    p->next=*l;
    *l=p;
 }


list_c *predecessor_list(list_c *l, int x)
{
    if ((l == NULL) || (l->next == NULL)) {
        printf("Error: predecessor sought on null list.\n");
        return(NULL);
    }
    if ((l->next)->item == x)
        return(l);
    else
        return( predecessor_list(l->next, x) );
}

delete_list(list_c **l, int x)
{
    list_c *p; /* item pointer */
    list_c *pred; /* predecessor pointer */
    list_c *search_list(), *predecessor_list();
    p = search_list(*l,x);
    if (p != NULL) {
    pred = predecessor_list(*l,x);
    if (pred == NULL) /* splice out out list */
    *l = p->next;
    else
    pred->next = p->next;
    free(p); /* free memory used by node */
}
}

typedef struct tree {
int item; /* data item */
struct tree *parent; /* pointer to parent */
struct tree *left; /* pointer to left child */
struct tree *right; /* pointer to right child */
} tree;

// serching a tree

tree *search_tree(tree *l, int x)
{
if (l == NULL) return(NULL);
if (l->item == x) return(l);
if (x < l->item)
return( search_tree(l->left, x) );
else
return( search_tree(l->right, x) );
}



// finding minimum and maximum 
tree *find_minimum(tree *t)
{
tree *min; /* pointer to minimum */
if (t == NULL) return(NULL);
min = t;
while (min->left != NULL)
min = min->left;
return(min);
}



// traversal in a Tree

void traverse_tree(tree *l)
{
if (l != NULL) {
traverse_tree(l->left);
process_item(l->item);
traverse_tree(l->right);
}
}


// insertion in a tree


insert_tree(tree **l,int x, tree *parent)
{
tree *p; /* temporary pointer */
if (*l == NULL) {
p = malloc(sizeof(tree)); /* allocate new node */
p->item = x;
p->left = p->right = NULL;
p->parent = parent;
*l = p; /* link into parent’s record */
return;
}
if (x < (*l)->item)
insert_tree(&((*l)->left), x, *l);
else
insert_tree(&((*l)->right), x, *l);
}

// deletion in a tree















int main(){


    // We use the term container to denote a data structure that permits storage and
    // retrieval of data items independent of content. 

    // 3.1 contigious vs non contigious dsa

    //3.1.1 arrays
    // advantage-> constant time access given the index, space efficiency, memory locality
    // disadvantage-> cannot adjust their size

    // average copy-> 2n

    // 3.1.2-> pointers and linked structures

    // list<int> ls;
    // searching a list





    // 3.2 stacks and queues
    // stacks- LIFO- push, pop
    // queues- FIFO- minimize the max time spent, put(enqueue), get(dequeue)

    // 3.3 dictionaries-> Dictionary(D) key(k), value(D[k]) pair-> (D,k)
    // search(D,k), insert(D,k), delete(D,k), max(D) or min(D)
    // exercise-> duplicate name removing. 
    // 7 fundamental functions in dictionary 
    //                       unsorted   Sorted
    // Dictionary operation  array      array
    // Search(L, k)          O(n)       O(log n)
    // Insert(L, x)          O(1)       O(n)
    // Delete(L, x)          O(1)∗      O(n)
    // Successor(L, x)       O(n)       O(1)
    // Predecessor(L, x)     O(n)       O(1)
    // Minimum(L)            O(n)       O(1)
    // Maximum(L)            O(n)       O(1)



    // 3.4 Binary Search Tree
    // Sorted arrays support binary search and logarithmic query times, 
    // but at the cost of linear-time update
    // 3.4.1 Implementation of Binary Search Tree

    // 3.4.2-> balanced search Trees-> if tree not balanced, we may take linear time


    // 3.5 priority queue (Q)
    // basic operation-> Insert(Q,x), Find-Minimum(Q) or find-max(Q), delete-Min(Q), Delete-Max(Q)



    // 3.7 hashing (a way to mantain a dictionary; mantained as an array)
    // hashing afunction that maps keys to integers
    // hash function formula for hash table of size m and total element n
    // collision resulution-> link list (chaining), 
    // open addressing like sequential probing
    // Chaining and open addressing both require O(m) to initialize an m-element
    // hash table to null elements prior to the first insertion. 
    // traversing(systematically visiting all elements in ds) all element takes O(n+m) in chaining. O(m) in open chain

    // Hash table 
    // Operation--> (expected)|(worst case)
    // Search(L, k)-->O(n/m)| O(n)
    // Insert(L, x)-->O(1)| O(1)
    // Delete(L, x)-->O(1) |O(1)
    // Successor(L, x)-->O(n + m)| O(n + m)
    // Predecessor(L, x)-->O(n + m)| O(n + m)
    // Minimum(L)-->O(n + m)| O(n + m)
    // Maximum(L)-->O(n + m)| O(n + m)

    // 3.7.2 efficient string matching via hashing--> Ranbin-Karp algorithm
    // 3.7.3 duplicate detection via hashing

    // 3.8 specialized data structures
        // string data structres
        // geometric data structers
        // graph data structres
        // set data structures 

}



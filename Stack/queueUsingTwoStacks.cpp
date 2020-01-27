
//Problem Link:"https://practice.geeksforgeeks.org/problems/queue-using-two-stacks/1"
/* The method push to push element into the queue */
void StackQueue :: push(int x)
 {
        s1.push(x);
 }

/*The method pop which return the element poped out of the queue*/
int StackQueue :: pop()
{
        if(s2.empty()){
            if(s1.empty())
                return -1;
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int temp=s2.top();
        s2.pop();
        return temp;
}
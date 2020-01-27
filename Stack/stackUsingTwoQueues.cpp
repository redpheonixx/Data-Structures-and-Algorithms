//Problem Link:"https://practice.geeksforgeeks.org/problems/stack-using-two-queues/1"

/* The method push to push element into the stack */
void QueueStack :: push(int x)
{
        if(q1.empty()){
            q2.push(x);
        }
        else
            q1.push(x);
}

/*The method pop which return the element poped out of the stack*/
int QueueStack :: pop()
{
        if(q1.empty()){
            if(q2.empty())
                return -1;
            while(q2.size()!=1){
                q1.push(q2.front());
                q2.pop();
            }
            int temp=q2.front();
            q2.pop();
            return temp;
        }  
        else{
            if(q1.empty())
                return -1;
            while(q1.size()!=1){
                q2.push(q1.front());
                q1.pop();
            }
            int temp=q1.front();
            q1.pop();
            return temp;
        }
}
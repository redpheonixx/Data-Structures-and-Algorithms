//Problem Link:"https://practice.geeksforgeeks.org/problems/get-minimum-element-from-stack/1"
/*returns min element from stack*/
int _stack :: getMin()
{
    if(s.empty())
        return -1;
    return minEle;
}

/*returns poped element from stack*/
int _stack ::pop()
{
    if(s.empty())
        return -1;
    s.pop();
    int temp=s.top();
    s.pop();
    if(!s.empty())
        minEle=s.top();
    return temp;
}

/*push element x into the stack*/
void _stack::push(int x)
{
    if(s.empty()){
        minEle=x;
    }
    else{
        if(x<minEle){
            minEle=x;
        }
    }
    s.push(x);
    s.push(minEle);
}

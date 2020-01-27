//Problem Link :"https://practice.geeksforgeeks.org/problems/circular-tour/1"

int tour(petrolPump p[],int n)
{
    int pe=0, ans, left=0;
    for(int i=0;i<n;i++){
        ans=i;
        pe=0;
        left=0;
        for(int j=i;j<n;j++){
            pe+=p[j].petrol;
            pe-=p[j].distance;
            if(pe<0)
                break;
        }
        //cout<<"petrol"<<i<<" "<<pe<<"\n";
        for(int k=0;k<i;k++){
            left+=p[k].petrol-p[k].distance;
        }   
        //cout<<"left "<<left<<"\n";
        if(pe>=abs(left))
            break;
    }
    if(pe>=abs(left))
        return ans;
    else 
        return -1;
}
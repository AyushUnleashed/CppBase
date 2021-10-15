 long long reversedBits(long long X) 
    {
        long long secondNum=0;
        int arr[32];int brr[32];
    
        for(int i=0;i<32;i++)
        {
            arr[i]=0;
            brr[i]=0;
        }
    
        int index=0;
        while (X>0)
        {
            if( (X & 1 )!=0)    //if bit is 1
            {   //cout<<"\nBit is 1 at index:"<<index<<" of number:"<<num;
                //indexes.push_back(index);
                arr[index]+=1;
                //cout<<endl<<arr[index];
            }
            
            X=X>>1;
            index++;
        }
    
        //cout<<endl<<arr[0];
    
        for(int i=0;i<32;i++)
        {
            int temp=arr[i];
            arr[i]=brr[32-i-1];
            brr[32-i-1]=temp;
        }
    
        for(int i=0;i<32;i++)
        {   
            //cout<<"\nbrr["<<i<<"]:"<<brr[i];
            if(brr[i]==1)
            {
                int check = 1<< i;
                secondNum = (secondNum | check);
            }
        }
        return (-secondNum);

    }
};
    #include<iostream>
    #include<cstdlib>
    using namespace std;
    typedef struct link
	{
    	int data;
    	struct link* next;
    }link;
    int main()
    {
    	int n,cot;
    	cin>>n;
    	link *head,*p,*pre=NULL;
    	p=head=new link;
    	for(int i=1;i<n;i++) 
		{
    		p->data=i;
    		p->next=new link;
    		p=p->next;
    	}
    	p->data=n;
    	p->next=head;//Ñ­»·Á´±íok
    	p=head;
    	cot=1; 
    	while(p->next!=p)
		{
    		if(cot%3==0)
			{
    			pre->next=p->next;
    			free(p);
    			p=pre;
    		}
    		cot++;
    		pre=p;
    		p=p->next;
    	}
    	cout<<p->data<<endl;
    	return 0;
    }

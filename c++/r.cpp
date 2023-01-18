#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    map<int,set<int>>m;
	    
	    for(int i=1;i<=n;i++)
	    {
	        int q;
	        cin>>q;
	        int s;
	        cin>>s;
	        
	        m[q].insert(s);
	    }
	    int ans = 0;
	    for(auto &pr : m)
	    {
			cout<<pr.first<<" "<<pr.second.begin();
	        int temp;
	        if(pr.first>0 && pr.first<9)
	        {
	            for(auto &score : pr.second)
	            {
	                auto it = score;
	                temp=it;
	                                                         
	            }
	            ans = ans + (temp) ; 
	        }
	    }
	    
	    cout<<ans<<endl;
	    
	}
	return 0;
}

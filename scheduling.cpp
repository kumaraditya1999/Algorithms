#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

main()
{  int n,m,o,index;
   char ch;
    vector<int> lift;
    cin>>n>>o;
//   while(ch!='\n')
//   {cin>>m>>ch;
//        lift.push_back(m);
//        cout<<m<<" ";
//   }

for(int i=0;i<o;i++)
{cin>>m;
        lift.push_back(m);
}

	sort(lift.begin(),lift.end());
	
//	for(int i=0;i<lift.size();i++)
//    {  cout<<lift[i]<<" ";
//        
//	}
index=n-1;
for(int i=0;i<lift.size();i++)
{  if(n<lift[i])
  {
  index=i;break;
  cout<<index;
  }
}



//cout<<index;
	
cout<<n<<" ";
for(int i=index;i<lift.size();i++)
{  cout<<lift[i]<<" ";
}

for(int i=index-1;i>=0;i--)
{cout<<lift[i]<<" ";
}

cout<<"\ntotal distance:"<<2*lift[o-1]-lift[0]-n;

	
}

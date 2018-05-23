#include<iostream>
#include<vector>
#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

void encrypt(string encr,int key,int j)
{
//cout<< isalpha(encr[0]);
	
//	string code;
//cout<<isalpha(encr[0])<<"\n";
//cout<<islower(encr[0])<<"\n";
//cout<< (encr[0]+key>'z')<<"\n";
//cout<<(char)(encr[0]+key-'z');

	for(int i=0;i<encr.size();i++){
		
		if(isalpha(encr[i]))
		{ if(islower(encr[i])){
			if((encr[i])+key>'z')
			  encr[i]+=key-'z'+'a'-1;
			else encr[i]+=key;
			  
		}
		
		else { if((encr[i])+key>'Z')
			  encr[i]+=key-'Z'+'A'-1;
			  else encr[i]+=key;
			
		}
		}
	}
	
	cout<<"ciphertext#"<<j+1<<":"<<encr<<"\n";
}

void decrypt(string decr,int key,int j){

  for(int i=0;i<decr.size();i++){
		
		if(isalpha(decr[i]))
		{ if(islower(decr[i])){
			if((decr[i])-key<'a')
			  decr[i]=decr[i]-key+26;
			  else decr[i]-=key;
			  
		}
		
		else { if((decr[i])-key<'A')
			  decr[i]=decr[i]-key+26;
			  else decr[i]-=key;
			
		}
		}
	}
	
	cout<<"ciphertext#"<<j+1<<":"<<decr<<"\n";
}

int main()
{   int n, key;

cin>>n>>key;
string str;

cin.clear();
getline(cin, str);
vector <string> liste;
vector <string >listd;

for(int i=0;i<n;i++)
{  getline(cin, str);
    liste.push_back(str);
    
}


for(int i=0;i<n;i++)
{  getline(cin, str);
    listd.push_back(str);
    
}
//cout<<n<<key;
//for(int i=0;i<n;i++)
//{  cout<<"encryp;"<<liste[i]<<" decrypt"<<listd[i]<<"\n";
//}
for(int i=0;i<n;i++)
{  
    encrypt(liste[i],key,i);
}


for(int i=0;i<n;i++)
{  
decrypt(listd[i],key,i);
    
}


return 0;
}

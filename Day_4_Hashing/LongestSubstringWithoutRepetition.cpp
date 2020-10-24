#include<bits/stdc++.h>
using namespace std;




int lengthOfLongestSubstring(string s) {
			int n = s.size();
			unsigned int MaxSize = 0;
			for(int i = 0; i<n; i++)
			{
				unordered_map<char, int> hmap;
				hmap[s[i]] = 1;
				for(int j = i+1; j<n; j++)
				{
					// Check if char already exists
					if(hmap[s[j]] == 1)
					{
						break;
					}
					else
					hmap[s[j]] = 1;
				}
				if(hmap.size() > MaxSize)
				MaxSize = hmap.size();
			}
			return MaxSize;
}
    
int main()
{
	int _;
	cin>>_;
	while(_--)
	{
		string s;
		cin>>s;
		cout<<"String accepted : "<<s<<endl;
		
		int length = lengthOfLongestSubstring(s);
		cout<<"Length of longest substring :"<<length<<"\n";
	}
	return 0;
}

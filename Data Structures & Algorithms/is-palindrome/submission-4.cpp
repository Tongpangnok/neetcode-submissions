class Solution {
public:
    bool isPalindrome(string s) {
     	string t="";
	for(int i=0;i<s.size();i++)
	{
         if(s[i]>='a' &&  s[i]<='z'|| s[i]>='A' && s[i]<='Z' || s[i]>='0' && s[i]<='9')
         {
         	t+=tolower(s[i]);
		 }
	}

string d=t;
reverse(d.begin(),d.end());

if(t==d)
{
	return true;
}
return false;
}
};

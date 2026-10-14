string result1 = "";
    string result2 = "";
    for(int i=0;i<s.size()-1;i++){
        result1 += s[i];
        for (int j = s.size()-1; j > 0; j--)
        {
            result2 += s[j];
        } 
    }
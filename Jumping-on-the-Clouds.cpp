int jumpingOnClouds(vector<int> c)
{
    int result = 0;

    for (size_t i = 0; i < c.size()-1; ++i)
    {
        if (c[i] == 0)
        {
            ++i;
        }
        
        ++result;
    }
    
    return result;
}

int jumpingOnClouds1(vector<int> c)
{
    int result = 0;

    for (size_t i = 0; i < c.size()-1; ++i)
    {
        if (c[i+1] == 1 || c[i+2] == 0)
        {
            ++i;
        }
        
        ++result;
    }

    return result;
}

template <typename T>
inline T const& Max (T const& a, T const& b) 
{ 
   return a < b ? b:a; 
}

int main(int argc, char** argv)
{
    //int a = Max(1,2);

    //float b = Max(1.0, 2.0);    // implicit coversion from double to float

    //float c = Max(1.0f, 2.0f);      // no implicit coversion of inputs


    return 0;
}

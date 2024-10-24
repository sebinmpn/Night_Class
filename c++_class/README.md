## C++


### Function
```
data_type function_name (data_type variable, data_type variable,...)
{
    body;

    return (data_type) vdata_typeariable;
}
```
eg. 
int fun (int x) // function will return an integer value
{
    int x_squr = x * x;

    return (int) x_squr;
}

void show (int x) \\ nothing is to return. so void (a dummy data type) is used. 
{
    std::cout << "x" << "\n";

    return;
}


### cntrol statements

if (condition)
{
    body;    
}


if (condition)
{
    body;  // if codition is true
}
else
{
    body; // if codition is false
}


#### exted if

if (condition)
{
    body;  // if codition is true
}
else if (condition)
{
    body;  // if codition is true
}
else if (condition)
{
    body;  // if codition is true
}
else
{
    body; // if codition is false
}



or 
if (condition)
{
    body;  // if codition is true
    
    if (condition)
    {
        body;  // if codition is true
        
        if (condition)
        {
        body;  // if codition is true
        }
    }

}


## loops (for, while, do while)

## (jump statemets)

#include<iostream>
using namespace std;
int Binary_search_function(int ar1[], int total_number_element_in_array, int searched_element)
{
    int lowest_element=0, last_element=total_number_element_in_array - 1;
    while (lowest_element<=last_element)
    {
        int mid_element=(lowest_element + last_element) / 2;
        if (searched_element==ar1[mid_element])
        {
            return mid_element;

        }
        else if (searched_element<=ar1[mid_element])
        {
            last_element= mid_element - 1;
        }
        else
        {
            lowest_element= mid_element + 1;
        }
    }
    return -1;
}
int main()
{
    int ar1[] = {15,18,24,32,35,39,44,47,52,53,57,59};
    int searched_element= 39;
    int total_number_element_in_array=sizeof (ar1)/sizeof (ar1[0]);
    int final_result=Binary_search_function(ar1,total_number_element_in_array,searched_element);
    if (final_result!=-1)
    {
        cout <<"found";
    }
    else
    {
        cout <<"not found";
    }
    return 0;
}

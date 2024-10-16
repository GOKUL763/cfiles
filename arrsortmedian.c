#include<stdio.h>
int i,j,t,m,n,d=1;
    float s;
    nums1[nums1Size+nums2Size];
    n=nums1Size+nums2Size;
    for(i=nums1Size,j=0;i<nums2Size,j<nums2Size;i++,j++)
    {
        nums1[i]=nums2[j];
    }
    n=sizeof(nums1)/sizeof(nums1[0]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(nums1[i]>nums1[i+1])
            {
                t=nums1[i];
                nums1[i]=nums1[i+1];
                nums1[i+1]=t;
            }
        }
    }
    t=0;
    if(n%2==0)
    {
        for(i=0;i<n;i++)
        {
            if(n/2==i)
            {
                s=((float)nums1[i]+(float)nums1[i+1])/2.0;
            }
        }
    }
    else
    {
        n+=1;
        s=(float)nums1[n/2];
    }

    return s;

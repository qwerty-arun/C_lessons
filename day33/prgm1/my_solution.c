# include <stdio.h>

int* searchRange(int* nums, int numsSize, int target, int* returnSize) 
{
	int count=0,check=0;
	int result[2];
	returnSize=result;
	for(int i=0;i<numsSize;i++)
	{
		if(target==nums[i])	
		{
			count+=1;
			check=1;
		}
		else
			check=0;
		if(count==1)
			returnSize[0]=i;
		if(target!=nums[i])
		{
			returnSize[1]=i-1;
		}
	}
	if(count==0)
	{
		returnSize[0]=-1;
		returnSize[1]=-1;
	}
		
	return(returnSize);
}

int main()
{
	int nums []= {5,7,8,8,8,10};
	int target = 8;
	int numsSize=6;
	int* returnSize;
	int* result = searchRange(nums, numsSize,target,returnSize);
	if(result[0]==-1)
	printf("[%d,%d]\n",-1,-1);
	else
	printf("[%d,%d]",result[0],result[1]);
}


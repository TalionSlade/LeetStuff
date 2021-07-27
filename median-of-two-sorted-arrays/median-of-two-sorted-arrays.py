class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        i = 0
        i1 = 0
        i2 = 0
        nums3 = []
        l = len(nums1)+len(nums2)
        while( i < l ):
            if(i1 >= len(nums1)):
                nums3.append(nums2[i2])
                i2 =i2+1
                i=i+1
            elif (i2 >= len(nums2)):
                nums3.append(nums1[i1])
                i1=i1+1
                i =i+1
            elif( nums1[i1] > nums2[i2]):
                nums3.append(nums2[i2])
                i2 =i2+1
                i=i+1
            else:
                nums3.append(nums1[i1])
                i1=i1+1
                i =i+1
        if( l % 2 != 0) :
              return(float(nums3[int(l/2)]))
        else:
              index = (nums3[int(l/2)]+ nums3[int(l/2)-1])/2
              return(index)
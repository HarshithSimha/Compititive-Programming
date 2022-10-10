// LC Q-35 

class SearchInsertPosition {
  public int main(int[] nums, int target) {
      int start = 0, end = nums.length - 1;
      while(start + 1 < end){
          int mid = (end - start) / 2 + start;
          if(nums[mid] == target) 
              return mid;
          else if(nums[mid] < target) start = mid;
          else end = mid;
      }
      if(target <= nums[start]) 
          return start;
      if(target > nums[end]) 
          return end + 1;
      else 
          return end;
  }
}
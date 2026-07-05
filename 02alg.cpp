#include <iostream>
using namespace std;

//انواع السيرش
// 1.linear search ==>هون زي لما كنا نمشي بالفور لوب ع عنصر عنصر ق بكون عندي فنكشن مسؤو ل عن عملية السيرش و بيستقبل مني 3 شغلات ( الارري السايز و العنصر اللي بدور عليه
//time ==>o(n)
// 2.binary search==>بتشبه فكرة القاموس بتيجي بتقسم المصفوفة لقسمين متساويين و التايم logn
// و لكن في شرط لما بتعامل معاه الداتا لازم تكون مرتبة او شبه مرتبة 
// السورت الجاهز التايم فيه n logn
// رح بكون عندي مؤشرين واحد عالليفت و التاني عالرايت و بكل مرة رح احسب ال mid
//mid =(left+right)/2
//
//
//
//
int linearsearch(int arr[], int size, int x) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == x) {
            return i;
        }
    }return -1;

}

//binary search 

int binarysearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (mid == target)
            return mid;
        else if (target < mid) {
            right = mid - 1;
        }
        else
            left = mid + 1;
    }
    return -1;
}

int main()
{
    int arr[] = { 9,8,7,6,5 };
    int n = sizeof(arr) /sizeof( arr[0]);
    int target; cin >> target;
    cout << linearsearch(arr, 10, 5);
}


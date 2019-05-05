#include <stdio.h>
#include<stdlib.h>
long long merge(long long arr[], long long temp[], long long left, long long mid, long long right){
	long long i, j, k;
	long long invn = 0;
	i = left;
	j = mid;
	k = left;
	while ((i < mid) && (j <= right)) {
		if (arr[i] <= arr[j])
			temp[k++] = arr[i++];
		else {
			temp[k++] = arr[j++];
			invn = invn + (mid - i);
		}
	}
	while (i <= mid - 1)
		temp[k++] = arr[i++];
	while (j <= right)
		temp[k++] = arr[j++];
	for (i = left; i <= right; i++)
		arr[i] = temp[i];
	return invn;
}
long long ms(long long arr[], long long temp[], long long left, long long right){
	long long mid, invn = 0;
	if (right > left) {
		mid = (right + left) / 2;
		invn = ms(arr, temp, left, mid);
		invn += ms(arr, temp, mid + 1, right);
		invn += merge(arr, temp, left, mid + 1, right);
	}
	return invn;
}
long long sort(long long arr[], long long size){
	long long* temp = (long long*)malloc(sizeof(long long) * size);
	return ms(arr, temp, 0, size - 1);
}

int main(){
    long long t;
	scanf("%lld", &t);
	while(t--){
	long long n, i;
	scanf("%lld", &n);
	long long arr[n];
	for(i = 0; i < n; i++)
	scanf("%lld", &arr[i]);
	printf("%lld\n", sort(arr, n));
    }
}

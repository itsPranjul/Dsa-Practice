int start=0, end=n-1, sum1=0,sum2=end;

    while(start<end) {
        if(a[start]<a[end] && sum2>sum1) {
            sum1+=a[start];
            start++;
        }
        else {
            end--;
            sum2+=a[end];
        }
    }
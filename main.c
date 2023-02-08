#include <stdio.h>
#include <math.h>

int rev(int num) { // gönderilen sayının tesrini alaıp geri döndüren fonksiyon

    int  reverse = 0, remainder;

    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    return reverse;
}

int chkFriendly(int n) { // varsa gönderilen sayının  ve tersinin toplamına karesi eşit olan sayıyı geri döndüren program.
    // herhangi bir eşleşme yolsa - 1 döndürüyor. 
    int friend =-1,leftSide;

    leftSide=n+rev(n);
    int bound = (int) (sqrt(leftSide))+1;

    for (int i=1;i<bound;i++) {

        if (i*i == leftSide) friend=i ;
    }


    return friend;
}

int main() {

    int fi;
    int i=1;
    int count=0;
    int n;

    printf("Enter number :");
    scanf("%d",&n);

while (count<n) {
    fi = chkFriendly(i);

    if (fi != -1) {
        printf("%d + %d = %d ^2 \n", i, rev(i), fi);
        count++;
    };
    i++;
}

    return 0;
}

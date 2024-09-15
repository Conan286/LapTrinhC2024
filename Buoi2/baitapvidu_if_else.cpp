#include<stdio.h>
int main()
{	
// viet chuong trinh nhap vao tu ban phim so n, kiem tra xem 
// neu n chia het cho 3 in ra "n chia het cho 3"
// neu n chia het cho 2 in ra "n chia het cho 2"
// neu n chia het cho ca 3 va 2 in ra "n chia het cho 2 va 3"
// con lai in ra "NO"
int n; 
scanf("%d",&n);
if((n%3==0) && (n%2==0))
{
	printf("n chia het cho 2 va 3");
	
}
else{
	
	if(n%2==0){
		printf("n chia het cho 2");
	}
	
	else if(n%3==0)
	{
		printf("n chia het cho 3");
	}

	else{
		printf("NO");
	}
}
}


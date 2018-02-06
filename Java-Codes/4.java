//Gaurav Sharma

public class array2d
{
public static void main(String args[])
{
int i,j;
int a[][]=new int[3][3];

for(i=0;i<3;i++)
for(j=0;j<3;j++)
a[i][j]=i+j;

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
	System.out.print(a[i][j] + " ");

System.out.println();

}
}
}

#include<stdio.h>
// question 1 a program in c to find the division of students
/*star
enter division
enter student name
enter student aggregates
print 
stop*/
int main(){
	int i;
	int division=1;2;3;
	char studentname[60];
	int aggregates;
	printf("\n enter student name :");
	fgets(studentname,60,stdin);
//	printf("\n%s",studentname);
	printf("\n enter aggregates :");
	scanf("\n%d",&aggregates);
	if(aggregates>=4&&aggregates<=12){
		printf("\n%s got division 1",studentname);
	}
	else if(aggregates>12&&aggregates<=22){
		printf("\n%sgot division 2",studentname);
	}
	else if(aggregates>22&&aggregates<=27){
		printf("\n%s got divison 3",studentname);
	}
	else if(aggregates>27&&aggregates<=36){
		printf("\n%s failed",studentname);
		
	}
	
	
else{
	printf(" Invalid enter numbers between 4 and 36");
}
	
	return 0;
	
	
}

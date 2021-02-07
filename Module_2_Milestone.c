int main(int argc, char ** argv) {
	ReadUserInfo(); //the method readuserinfo is called
	int value = CheckUserPermissionAccess(); //the function is called and captures the username/password
	
	if(value==1){ //1 is checked against the correct passw if not then 0
		DisplayStudentInformation(); //this function displays student data
		printf("Adjust grades for students?"); //print to screen for option to user
	
		char choice ='Y';
			char value = 'N';
		
		scanf("%c",&value); //this is what accepts the user input
		
		if(choice==value){ //the input has comparison ran, if value is correct sys will continue if not goes to line 260 then terminates
			printf("Enter the GPA for each student \n");
			int x; //recieves value and saves it, then loop is initialized and iterates through the cycle
			for(x = 0; x < 15; x++){ 
				printf("%s",students[x]);       
                scanf(" %c",&grades[x]);
            }
		}
		printf("Grades are successfully updated. Please view the following:\n"); //Grade modification has completed iteration
		DisplayStudentInformation(); //new data for each student is now displayed
		}
}

void DisplayStudentInformation(){
	
	int x;
		for(x=0; x<5; x++){
			printf(“%s %c\n”,students[x],grades[x]); //will loop for 5 times displaying student and grade
		}
}



#include <stdio.h>
#include <string.h>

// global variables
char name[];
int password;
char choice[];
int i;
char grades[][] ={'A','C','C','D','F','A','B','F','C','B','B','C','C'};
char students[][]={"Jim","Tom","Ben","Alice","Ruby","Jason","Robert","Sam","David","Jose","John","Bud","Phillip"};

void ReadUserInfo(){

	ReadUserInfo(); //method being called read user information
	int access = CheckUserPermissionAccess(); //verifying and validating user information
	
	if(access==1){
	
}

int CheckUserPermissionAccess(){

	char pass[] = "123"; //password entry
	char name[] = "";    //username entry
	if(strcmp(password, pass)==0){//user permissions are being validated with 1 or 0.
		return 1; }		//if 1 password is valid and user moves forward.
		else{
		return 0; }		//if 0, password is invalid and user is shown a 0 displayed.
		
}

void DisplayStudentInformation(){

	int i;
	for(i=0; i<15; i++){		//iteration is setup for processing through the students and grade 
							//modification. The system will keep up with the number of students
							//displaying 15 students at a time up until last student is accessed.
		printf(%s %c \n",students[i],grades[i]); 	 

}

// main
int main(int argc, char* argv){

	ReadUserInfo();
	
	if (CheckUserPermissionAccess()==1) {
	
		printf("Welcome professor. Below are all student grades\n");
		
		DisplayStudentInformation();
		
		printf("Adjust grades for students?\n");
		scanf("%s",choice);
		
		if (choice[0] == 'Y') {
		
			printf("Enter the GPA for students one at a time\n ");
			
			for(i=0;i<15;i++){
			
				printf("%s", students[i]);
				scanf("%s",grades[i]);
				
			}
			
			printf("You have successfully updated class grades. The grades are now as follows: \n");
			
			DisplayStudentInformation();
		
		}
		
	}
	
	return 0;
	
}	

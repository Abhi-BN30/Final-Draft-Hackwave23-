#include <stdio.h>
#include <string.h>
typedef struct 
{
  char gender;
  char name[20];
  int team_size;
  char flex[4];
  char destination[10];
  int date;
} Person;

void Write_to_file(char writestr[])
{
  FILE *fp;

   fp = fopen("output.txt","a+");

   if ( fp )
   {
	   fputs(writestr,fp);
     fputc('\n',fp);
    }

   fclose(fp);
}

int main(void)
{

  FILE *file;
  file = fopen("data.csv", "r"); 
  Person People[100];
  int records = 0;

  do 
  {
 
    fscanf(file,
                  "%19[^,],%c,%d,%3[^,],%9[^,],%d\n",
                  People[records].name,
                  &People[records].gender, 
                  &People[records].team_size,
                  People[records].flex,
                  People[records].destination,
                  &People[records].date); 
    
     records++;//10


  } while (!feof(file));
  fclose(file);
  
  int DATE=10142023;
  char DESTINATION[]="Goa";
  char GENDER='M';
//  char ans[40];

int x=0;
  for (int i = 0; i < records; i++){
    if (People[i].date==DATE && strcmp(People[i].destination,DESTINATION)==0)
    {
        if (strcmp(People[i].flex,"Yes")==0)
        {Write_to_file(People[i].name);
        printf("%s ",People[i].name);}
        
        else if(People[i].gender==GENDER)
        printf("%s ",People[i].name); 

        else
        x=1; 
    }
    
  }
  if (x==1)
  printf("No Match Found");
  

 
}
    

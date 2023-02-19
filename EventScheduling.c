#include<stdio.h>
#include<string.h>
struct bool
{
char eventname[20];
int entryno;
int tot_stu;
};
struct slots
{
char slot[20];
char session[20];
int kslot;
int pslot;
};
struct final_slot
{
char slot[20];
};
int main()

EVENT SCHEDULING PAGE 16

{ int n; struct bool
b[3]; struct
slots s[2]; struct
final_slot f[n];
int choice =0;
int i,j;

while(choice!=3)
{
printf(" COLLEGE FESTIVAL EVENT

\n");
printf("1] Bool\n");
printf("2] Slot\n");
printf("3] Final dicission\n");
printf("ENTER YOUR CHOICE:");
scanf("%d",&choice);
switch(choice)
{
case 1:

printf("BOOLING AREA\n");
printf(" \n");

EVENT SCHEDULING PAGE 17

printf("Number of Events=");
scanf("%d",&n); printf("EVENT
NAMES:");
for(i=0;i<3;i++)
{

scanf("%s",b[i].eventname);

}
printf("TOTAL NUMBER OF STUDENTS:");

for(i=0;i<3;i++)
{

scanf("%d",&b[i].tot_stu);

}
printf("ENTER YOUR EVENT NAME: ");
scanf("%s",b[i].eventname); printf("ENTER
YOUR NUMBER: ");
scanf("%d",&b[i].entryno);
printf("TOTAL NUMBER OF STUDENTS:");
scanf("%d",&b[i].tot_stu); if(b[i].eventname=="M1event"
|| b[i].tot_stu==50)
{

printf("WELCOME TO THE %s Quiz\n",b[i].eventname);

}

else if(b[i].eventname=="M2event" || b[i].tot_stu==100)

{

printf("WELCOME TO THE %s Cricket\n",b[i].eventname);

}

EVENT SCHEDULING PAGE 18

else if(b[i].eventname=="M3event" || b[i].tot_stu==150)
{ printf("WELCOME TO THE %s Football\n",b[i].eventname);
}
else
{
printf("CHECK YOUR EVENT NAME\n");
}
break; case
2:
printf("ENTER YOUR SLOT NAME: ");

for(i=0;i<2;i++)
{
scanf("%s",s[i].slot);
}
printf("ENTER YOUR SESSION: ");

for(i=0;i<2;i++)
{

scanf("%s",s[i].session);

}
printf("ENTER YOUR SLOT:");

scanf("%s",s[i].slot);

printf("ENTER YOUR SESSION:");

scanf("%s",s[i].session);
if(s[i].slot=="P" || s[i].session=="FN")

{ printf("Welcome to %s slot in FN session",s[i].slot);
}
else if(s[i].slot=="K" || s[i].session=="AN")

EVENT SCHEDULING PAGE 19

{

printf("Welcome to %s slot in AN session",s[i].slot);

}
else
{

printf("INVALID SLOT NAME\n");

}
break; case
3:
printf("TO CHECK THE MAXIMUM HAPPINESS OF THE STUDENT:\n");

int k_slot; int p_slot;

printf("NUMBER OF STUDENTS IN K_SLOT: ");

scanf("%d",&k_slot);
printf("NUMBER OF STUDENTS IN P_SLOT: ");
scanf("%d",&p_slot); if(k_slot>p_slot)
printf("\nK_slot is choosen by many students\n");
else printf("P-slot is choosen by many
students\n"); default:
printf("INVALID CHOICE\n");
}//case
} }//while
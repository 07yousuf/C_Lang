#include<stdio.h>
struct demo{
      int age;
      float height;
      char name[100],uni_name[100],department[100];
      int student_id,intake;
};
int main()
{     
      struct demo s1;
      int i,count;
      scanf("%d",&count);
      for(i=0; i<count; i++){
            s1.intake=51;
            scanf("%d\n",&s1.age);
            scanf("%f\n",&s1.height);
            scanf("%d\n",&s1.student_id);
            gets(s1.name);
            gets(s1.uni_name);
            gets(s1.department);

      }
      for(i=0; i<count; i++){
            printf("%d\n",s1.age);
            printf("%f\n",s1.height);
            printf("%s\n",s1.name);
            printf("%s\n",s1.uni_name);
            printf("%s\n",s1.department);
            printf("%d\n",s1.student_id);
            printf("%d\n",s1.intake);

      }
}
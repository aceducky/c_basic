#include <stdio.h>
void percentage_calculator()
{
  int total_subjects = 5;
  int subject_marks[total_subjects];
  for (int i = 0; i < total_subjects; i++)
  {
    scanf("%d", &subject_marks[i]);
  }

  float total_percentage = 0;
  for (int i = 0; i < total_subjects; i++)
  {
    total_percentage += subject_marks[i];
  }
  float final_percentage = total_percentage / total_subjects;
  printf("%f\n", final_percentage);
  if (final_percentage >= 90)
  {
    printf("A\n");
  }
  else if (final_percentage >= 80)
  {
    printf("B\n");
  }
  else if (final_percentage >= 70)
  {
    printf("C\n");
  }
  else
  {
    printf("D\n");
  }
}

void area_of_cone()
{
  int r, h;
  float area;
  scanf("%d %d", &r, &h);
  area = (float)(3.14 * r * r * h) / 2;
  printf("%f", area);
}
int main()
{
  percentage_calculator();
  area_of_cone();
  return 0;
}
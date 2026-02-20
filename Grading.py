# GPA and CGPA Calculator

semesters = int(input("Enter number of semesters: "))
total_cgpa_points = 0

for s in range(1, semesters + 1):
    print(f"\nSemester {s}")
    subjects = int(input("Enter number of subjects: "))
    
    total_points = 0
    total_credits = 0
    
    for i in range(subjects):
        grade = float(input("Enter grade point: "))
        credit = float(input("Enter credit: "))
        total_points += grade * credit
        total_credits += credit
    
    gpa = total_points / total_credits
    print("GPA =", round(gpa, 2))
    
    total_cgpa_points += gpa

cgpa = total_cgpa_points / semesters
print("\nFinal CGPA =", round(cgpa, 2))

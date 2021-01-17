import sys, os
import time

NO_OF_TEST_CASES = 5

def generateTestCases(testCaseGenerator, notc):
	for i in range(1, notc+1):
		os.system("{0}.exe > in{1}.txt".format(testCaseGenerator, i))
		time.sleep(1)


def judge(efficientSolution, bruteSolution, notc):
	c = 0
	for i in range(1, notc+1):
		os.system("{0}.exe < in{1}.txt > outeff{1}.txt".format(efficientSolution, i))
		os.system("{0}.exe < in{1}.txt > outbrute{1}.txt".format(bruteSolution, i))

		temp = os.system("FC outeff{0}.txt outbrute{0}.txt 1>nul".format(i))
		if temp:
			c += 1
			print("Failed on TC{}".format(i))
	
	print("{} test cases failed".format(c))

def main():
	if len(sys.argv) < 4:
		print('''
	USAGE
	$> python main.py effSol bruteSol TCGen 
	All files should be in cpp (names should be without extention)
	''')
		sys.exit()

	os.system("del outbrute* 2>nul")
	os.system("del outeff* 2>nul")

	
	# Assuming all files are in C++
	efficientSolution = sys.argv[1]
	bruteSolution = sys.argv[2]

	testCaseGenerator = sys.argv[3]

	if len(sys.argv) >= 5 and sys.argv[4] == "-n":
		refreshTC = False
	else:
		os.system("del in* 2>nul")
		refreshTC = True

	if not os.path.isfile(bruteSolution+".exe") or os.path.getmtime(bruteSolution+".cpp") > os.path.getmtime(bruteSolution+".exe"):
		os.system("g++ -std=c++14 {0}.cpp -o {0}".format(bruteSolution))


	if not os.path.isfile(efficientSolution+".exe") or os.path.getmtime(efficientSolution+".cpp") > os.path.getmtime(efficientSolution+".exe"):
		os.system("g++ -std=c++14 {0}.cpp -o {0}".format(efficientSolution))

	if not os.path.isfile(testCaseGenerator+".exe") or os.path.getmtime(testCaseGenerator+".cpp") > os.path.getmtime(testCaseGenerator+".exe"):
		os.system("g++ -std=c++14 {0}.cpp -o {0}".format(testCaseGenerator))

	if refreshTC:
		generateTestCases(testCaseGenerator, NO_OF_TEST_CASES)

	judge(efficientSolution, bruteSolution, NO_OF_TEST_CASES)
	

main()
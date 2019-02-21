CC := g++
CXXFLAGS = -g -Wall -std=c++11

# [gcc -l -L option flags for library link](https://www.rapidtables.com/code/linux/gcc/gcc-l.html)
LIB := -lopencv_core -lopencv_highgui -lopencv_imgproc

# [gcc -I option flag (include directory)](https://www.rapidtables.com/code/linux/gcc/gcc-i.html)
#INC := /usr/local/include/opencv4
INC := ${HOME}/.opencv/installation/OpenCV-4.0.1/include/opencv4
INC := $(addprefix -I,${INC})

TARGET := check_opencv_version

${TARGET} : ${TARGET}.cpp
% : %.cpp
	$(LINK.cc) ${LIB} ${INC} $^ -o $@

.PHONY : clean
clean :
	-${RM} ${TARGET} ${OBJECTS} *~ .*~ core


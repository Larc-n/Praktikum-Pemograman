# Variables
CXX = g++
CXXFLAGS = -Wall -g

# Target executable name
TARGET = code

# Source file
SRCS = code.cpp

# Rule to build the target (default target)
all: $(TARGET)

# Rule to build the executable from the source
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

# Clean rule to remove compiled files
clean:
	rm -f $(TARGET)

# Optional rule for cleaning object files (if needed in future)
clean_all:
	rm -f $(TARGET) *.o

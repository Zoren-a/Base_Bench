C = nvcc
NVCCFLAGS = -arch=sm_60 -lcudart
CFLAGS = -std=c++11

all: align

align: align.cu  
	$(C) $(NVCCFLAGS) $(CFLAGS) -o align align.cu 

clean:
	rm -f align *.dat


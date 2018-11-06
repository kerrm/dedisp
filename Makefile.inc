# The definitions in this file should be changed to match your system

CUDA_PATH ?= /usr/cuda
INSTALL_DIR = /home/vlite-master/mtk

CUDA_DIR   ?= $(CUDA_PATH)
THRUST_DIR ?= $(CUDA_DIR)/include

# LIB_ARCH   = lib
LIB_ARCH   = lib64
# GPU_ARCH   = sm_13
# GPU_ARCH   = sm_20
#GPU_ARCH   = sm_35
GPU_GENCODE   = -gencode arch=compute_35,code=sm_35 -gencode arch=compute_52,code=sm_52 -gencode arch=compute_61,code=sm_61

GCC        = gcc
GXX        = g++
AR         = ar
NVCC       = $(CUDA_DIR)/bin/nvcc #-Xptxas -abi=no
DOXYGEN    = doxygen
RM         = rm
ECHO       = echo
MKFLAGS    = 

DEDISP_DEBUG = 0

#.SILENT :

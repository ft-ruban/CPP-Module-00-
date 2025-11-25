override SRCSDIR	:= srcs/

override NAME := banana_phone

override BANANAPHONESRC := \
	main

override SRCS := $(addprefix $(SRCSDIR)/, $(addsuffix .cpp, $(BANANAPHONESRC)))

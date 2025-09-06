override SRCSDIR	:= srcs/

override NAME := megaphone

override MEGAPHONESRC := \
	megaphone \

override SRCS := $(addprefix $(SRCSDIR)/, $(addsuffix .cpp, $(MEGAPHONESRC)))

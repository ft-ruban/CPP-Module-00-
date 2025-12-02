override SRCSDIR	:= srcs/

override NAME := banana_phone

override BANANAPHONESRC := \
	main \
	PhoneBook.class \

override SRCS := $(addprefix $(SRCSDIR)/, $(addsuffix .cpp, $(BANANAPHONESRC)))

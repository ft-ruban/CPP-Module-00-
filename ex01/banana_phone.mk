override SRCSDIR	:= srcs/

override NAME := banana_phone

override BANANAPHONESRC := \
	main \
	PhoneBook.class \
	Contact.class \

override SRCS := $(addprefix $(SRCSDIR)/, $(addsuffix .cpp, $(BANANAPHONESRC)))

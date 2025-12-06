override SRCSDIR	:= srcs/
override MAINDIR    :=
override EXECDIR 	:= exec/

#override NAME := banana_phone
SRC += $(addprefix $(MAINDIR), $(addsuffix .cpp, $(MAIN)))
SRC += $(addprefix $(EXECDIR), $(addsuffix .cpp, $(EXECSRC)))

override SRCS		= $(addprefix $(SRCSDIR), $(SRC))

override MAIN := main \
				 PhoneBook.class \
				 Contact.class

override EXECSRC := add \
					exec \
					exit \
					search
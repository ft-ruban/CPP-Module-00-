override SRCSDIR	:= srcs/
override MAINDIR    :=
override UIDIR 	:= ui/

#override NAME := banana_phone
SRC += $(addprefix $(MAINDIR), $(addsuffix .cpp, $(MAIN)))
SRC += $(addprefix $(UIDIR), $(addsuffix .cpp, $(UISRC)))

override SRCS		= $(addprefix $(SRCSDIR), $(SRC))

override MAIN := main \
				 PhoneBook.class \
				 Contact.class

override UISRC := 	add \
					exit \
					prompt \
					search
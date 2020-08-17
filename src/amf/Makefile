ORYX_BASE ?= $(abspath ../..)
LOCAL_TARGET=libam_amfpacket.so
LOCAL_PATH   := $(shell pwd)
LOCAL_SRCS   := $(shell find . -regex ".*\.c\|.*\.cpp")
LOCAL_CFLAGS := -I$(ORYX_BASE)/inc/amf \
                -I$(ORYX_BASE)/inc/utility    \
                -I$(ORYX_BASE)/inc            \
                -std=c++11 -Werror

SRC:=$(LOCAL_SRCS)
FILE_TYPE=cpp
OBJ:=$(patsubst %.$(FILE_TYPE), %.o, $(SRC))

OBJPATH=".obj"

CFLAGS+=${LOCAL_CFLAGS}
LIBS+= -L$(ORYX_BASE)/lib -lamutil -lamosal

so: dir_check $(OBJ)
	$(CXX) $(CFLAGS) -shared -fPIC -Wl,-soname,${LOCAL_TARGET} -o ${OBJPATH}/${LOCAL_TARGET} ${OBJPATH}/*.o $(LIBS)
	@cp ${OBJPATH}/${LOCAL_TARGET} ${ORYX_BASE}/lib
	#@cp ${OBJPATH}/${LOCAL_TARGET} $(LIBS_BUILDOUT)

dir_check:
	@test -d ${OBJPATH} || mkdir ${OBJPATH} 
.$(FILE_TYPE).o:
	$(CXX) $(CFLAGS) -fPIC -shared -c $<
	@mv $@ ${OBJPATH}

install:
	@install -d $(DESTDIR)/usr/lib
	@install -m 0755 $(SRCDIR)/${OBJPATH}/${LOCAL_TARGET} $(DESTDIR)/usr/lib
	@echo "Build $@ Done."

clean:
	rm -rf ${OBJPATH}/ 

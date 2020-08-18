LOCAL_SRCS   := ./src

SUBDIR := ${LOCAL_SRCS}/utility/util ${LOCAL_SRCS}/utility/osal ${LOCAL_SRCS}/amf

all:
	for subdir in $(SUBDIR); \
	do \
		$(MAKE) -C $$subdir; \
	done

clean: libs_clean
	@for subdir in ${SUBDIR};\
	do \
		$(MAKE) clean -C $$subdir; \
	done

libs_clean:
	@rm -rf ./lib/*.so

.PHONY:
	all clean

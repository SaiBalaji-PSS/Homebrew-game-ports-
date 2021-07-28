XBE_TITLE = nxdk\ sample\ -\ SDL2 
GEN_XISO = $(XBE_TITLE).iso
SOURCEDIR = .
SRCS = $(shell find $(SOURCEDIR) -name '*.c') $(shell find $(SOURCEDIR) -name '*.cpp')
NXDK_DIR ?= $(CURDIR)/../..
NXDK_SDL = y

include $(NXDK_DIR)/Makefile

TARGET += $(OUTPUT_DIR)/resources
$(GEN_XISO): $(OUTPUT_DIR)/resources
$(OUTPUT_DIR)/resources: $(CURDIR)/resources $(OUTPUT_DIR)
	@$(VE)cp -r $< $@
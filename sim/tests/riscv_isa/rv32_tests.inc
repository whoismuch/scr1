
ARCH_lowercase = $(shell echo $(ARCH) | tr A-Z a-z)


rv32_isa_tests += isa/rv32mi/illegal.S  

ifneq (,$(findstring m,$(ARCH_lowercase)))
endif ## ifeq (m,$(findstring m,$(ARCH_lowercase)))

ifneq (,$(findstring c,$(ARCH_lowercase)))
endif ## ifeq (m,$(findstring c,$(ARCH_lowercase)))

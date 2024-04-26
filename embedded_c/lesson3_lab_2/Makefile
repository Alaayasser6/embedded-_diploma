CC=arm-none-eabi-
CFLAGS= -mcpu=cortex-m3 -gdwarf-2
INCS=-I
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)
AS= $(wildcard *.s)
ASOBJ= $(AS:.s=.o)
project_name=lab2_with_arm_cortex-m3
all: $(project_name).bin
	@echo "Build is done"
	
#startup.o: startup.s
#	$(CC)as.exe  $(CFLAGS) -g $< -o $@
	
%.o: %.s
	$(CC)as.exe  $(CFLAGS) -g $< -o $@	

%.o: %.c
	$(CC)gcc.exe -c -g  $(INCS)   $(CFLAGS)  -mthumb  $< -o $@
#app.o: app.c
	#$(CC)gcc.exe -c $(INCS) $(CFLAGS)   $< -o $@	
#lab1.elf: app.o uart.o startup.o
#	$(CC)ld.exe -T linker_script.ld   startup.o  uart.o app.o -o  $@ -Map=Map_file.map


$(project_name).elf: $(OBJ) $(ASOBJ)
	$(CC)ld.exe -T linker_script.ld   $(ASOBJ)  $(OBJ) -o  $@ -Map=Map_file.map
$(project_name).bin: $(project_name).elf	
	$(CC)objcopy.exe -O binary $< $@
	


clean_all:
	rm *.o *.elf *.bin     
 
clean:
		rm *.elf *.bin               
	
MEMORY
{
flash(RX) : ORIGIN = 0x08000000,LENGTH = 128K
sram(RWX) : ORIGIN = 0x020000000,LENGTH = 20K

}

SECTIONS
{
	.text : {
		*(.vectors*) 
		*(.text)
		*(.rodata)
		_E_text = . ;
		. = ALIGN(4) ; 
	} > flash
	
	.data : {
	_s_data = . ;
		*(.data*)
		_E_data = . ;
	} > sram AT> flash
	
	.bss : {
	_s_bss = . ;
	*(.bss*)
	_E_bss = . ;
	. = ALIGN(4);
	. = . + 0x1000 ;
	_stack_top = . ;
	} > sram
}
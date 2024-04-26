void  reset_handler();
extern int main();
void default_handler(){
	
	  reset_handler();
}



void NMI_Handler() __attribute__((weak,alias("default_handler")));
void H_fault__Handler() __attribute__((weak,alias("default_handler")));
void MM_Fault_Handler() __attribute__((weak,alias("default_handler")));
void NMT_Handler() __attribute__((weak,alias("default_handler")));
void Bus_Fault() __attribute__((weak,alias("default_handler")));
void Usage_Fault_Handler() __attribute__((weak,alias("default_handler")));


extern unsigned int _stack_top;
unsigned int vectors[] __attribute__((section(".vectors")))={
	(unsigned int) _stack_top,
	(unsigned int) &reset_handler,
	(unsigned int) &NMI_Handler,
	(unsigned int) &H_fault__Handler,
	(unsigned int) &MM_Fault_Handler,
	(unsigned int) &NMT_Handler,
	(unsigned int) &Bus_Fault,
	(unsigned int) &Usage_Fault_Handler,
	
};

extern unsigned int _s_data;
extern unsigned int _E_text;
extern unsigned int _E_data;
extern unsigned int _s_bss;
extern unsigned int _E_bss;

void reset_handler(){
	unsigned int data_size= (unsigned char *)& _s_data - (unsigned char *) &_E_data
	unsigned char* p_scr=(unsigned char *)& _E_text;
	unsigned char* p_dis=(unsigned char *)& _s_data;
	for (int i=0;i<data_size;i++){
		
		*((unsigned char*)p_dis++)=*((unsigned char*)p_scr++);	
	}
	
		unsigned int bss_size= (unsigned char *)& _s_bss - (unsigned char *) &_E_bss
		p_dis=(unsigned char*)&_s_bss;
		for (int i=0;i<bss_size;i++){
		
		*((unsigned char*)p_dis++)=(unsigned char)0;	
	}
		
		
	main();
}








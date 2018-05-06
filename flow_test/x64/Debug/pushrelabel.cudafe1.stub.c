#define __NV_CUBIN_HANDLE_STORAGE__ static
#include "crt/host_runtime.h"
#include "pushrelabel.fatbin.c"
extern void __device_stub__Z9testOnGPUPiS_S_iiiiiS_S_(int *, int *, int *, int, int, int, int, int, int *, int *);
static void __nv_cudaEntityRegisterCallback(void **);
static void __sti____cudaRegisterAll(void);
#pragma section(".CRT$XCU",read)
__declspec(allocate(".CRT$XCU"))static void (*__dummy_static_init__sti____cudaRegisterAll[])(void) = {__sti____cudaRegisterAll};
void __device_stub__Z9testOnGPUPiS_S_iiiiiS_S_(int *__par0, int *__par1, int *__par2, int __par3, int __par4, int __par5, int __par6, int __par7, int *__par8, int *__par9){__cudaSetupArgSimple(__par0, 0Ui64);__cudaSetupArgSimple(__par1, 8Ui64);__cudaSetupArgSimple(__par2, 16Ui64);__cudaSetupArgSimple(__par3, 24Ui64);__cudaSetupArgSimple(__par4, 28Ui64);__cudaSetupArgSimple(__par5, 32Ui64);__cudaSetupArgSimple(__par6, 36Ui64);__cudaSetupArgSimple(__par7, 40Ui64);__cudaSetupArgSimple(__par8, 48Ui64);__cudaSetupArgSimple(__par9, 56Ui64);__cudaLaunch(((char *)((void ( *)(int *, int *, int *, int, int, int, int, int, int *, int *))testOnGPU)));}
#line 5 "c:/Users/nein/source/repos/flow_test/flow_test/pushrelabel.cu"
void testOnGPU( int *__cuda_0,int *__cuda_1,int *__cuda_2,int __cuda_3,int __cuda_4,int __cuda_5,int __cuda_6,int __cuda_7,int *__cuda_8,int *__cuda_9)
#line 7 "c:/Users/nein/source/repos/flow_test/flow_test/pushrelabel.cu"
{__device_stub__Z9testOnGPUPiS_S_iiiiiS_S_( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5,__cuda_6,__cuda_7,__cuda_8,__cuda_9);
#line 93 "c:/Users/nein/source/repos/flow_test/flow_test/pushrelabel.cu"
}
#line 1 "x64/Debug/pushrelabel.cudafe1.stub.c"
static void __nv_cudaEntityRegisterCallback( void **__T0) {  __nv_dummy_param_ref(__T0); __nv_save_fatbinhandle_for_managed_rt(__T0); __cudaRegisterEntry(__T0, ((void ( *)(int *, int *, int *, int, int, int, int, int, int *, int *))testOnGPU), testOnGPU, (-1)); }
static void __sti____cudaRegisterAll(void) {  __cudaRegisterBinary(__nv_cudaEntityRegisterCallback);  }

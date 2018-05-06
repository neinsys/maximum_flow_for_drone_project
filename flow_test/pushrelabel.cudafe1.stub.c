#define __NV_CUBIN_HANDLE_STORAGE__ static
#include "crt/host_runtime.h"
#include "pushrelabel.fatbin.c"
extern void __device_stub__Z19push_relabel_kernelPN9flowGraph4edgeEPiS2_S2_iii(edge *, int *, int *, int *, int, int, int);
static void __device_stub__ZN6thrust8cuda_cub3cub11EmptyKernelIvEEvv(void);
static void __nv_cudaEntityRegisterCallback(void **);
static void __sti____cudaRegisterAll(void);
#pragma section(".CRT$XCU",read)
__declspec(allocate(".CRT$XCU"))static void (*__dummy_static_init__sti____cudaRegisterAll[])(void) = {__sti____cudaRegisterAll};
void __device_stub__Z19push_relabel_kernelPN9flowGraph4edgeEPiS2_S2_iii(edge *__par0, int *__par1, int *__par2, int *__par3, int __par4, int __par5, int __par6){__cudaSetupArgSimple(__par0, 0Ui64);__cudaSetupArgSimple(__par1, 8Ui64);__cudaSetupArgSimple(__par2, 16Ui64);__cudaSetupArgSimple(__par3, 24Ui64);__cudaSetupArgSimple(__par4, 32Ui64);__cudaSetupArgSimple(__par5, 36Ui64);__cudaSetupArgSimple(__par6, 40Ui64);__cudaLaunch(((char *)((void ( *)(edge *, int *, int *, int *, int, int, int))push_relabel_kernel)));}
#line 31 "C:/Users/nein/source/repos/push_relabel_cuda/flow_test/pushrelabel.cu"
void push_relabel_kernel( edge *__cuda_0,int *__cuda_1,int *__cuda_2,int *__cuda_3,int __cuda_4,int __cuda_5,int __cuda_6)
#line 31 "C:/Users/nein/source/repos/push_relabel_cuda/flow_test/pushrelabel.cu"
{__device_stub__Z19push_relabel_kernelPN9flowGraph4edgeEPiS2_S2_iii( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5,__cuda_6);
#line 70 "C:/Users/nein/source/repos/push_relabel_cuda/flow_test/pushrelabel.cu"
}
#line 1 "./pushrelabel.cudafe1.stub.c"
static void __device_stub__ZN6thrust8cuda_cub3cub11EmptyKernelIvEEvv(void) {  __cudaLaunch(((char *)((void ( *)(void))thrust::cuda_cub::cub::EmptyKernel<void> ))); }namespace thrust{
namespace cuda_cub{
namespace cub{

template<> __specialization_static void __wrapper__device_stub_EmptyKernel<void>(void){__device_stub__ZN6thrust8cuda_cub3cub11EmptyKernelIvEEvv();}}}}
static void __nv_cudaEntityRegisterCallback( void **__T3) {  __nv_dummy_param_ref(__T3); __nv_save_fatbinhandle_for_managed_rt(__T3); __cudaRegisterEntry(__T3, ((void ( *)(void))thrust::cuda_cub::cub::EmptyKernel<void> ), _ZN6thrust8cuda_cub3cub11EmptyKernelIvEEvv, (-1)); __cudaRegisterEntry(__T3, ((void ( *)(edge *, int *, int *, int *, int, int, int))push_relabel_kernel), _Z19push_relabel_kernelPN9flowGraph4edgeEPiS2_S2_iii, (-1)); __cudaRegisterVariable(__T3, __shadow_var(_ZN41_INTERNAL_19_pushrelabel_cpp1_ii_45def1c06thrust6system6detail10sequential3seqE,::thrust::system::detail::sequential::seq), 0, 1Ui64, 0, 0); __cudaRegisterVariable(__T3, __shadow_var(_ZN41_INTERNAL_19_pushrelabel_cpp1_ii_45def1c06thrust8cuda_cub3parE,::thrust::cuda_cub::par), 0, 1Ui64, 0, 0); __cudaRegisterVariable(__T3, __shadow_var(_ZN41_INTERNAL_19_pushrelabel_cpp1_ii_45def1c06thrust12placeholders2_1E,::thrust::placeholders::_1), 0, 1Ui64, 0, 0); __cudaRegisterVariable(__T3, __shadow_var(_ZN41_INTERNAL_19_pushrelabel_cpp1_ii_45def1c06thrust12placeholders2_2E,::thrust::placeholders::_2), 0, 1Ui64, 0, 0); __cudaRegisterVariable(__T3, __shadow_var(_ZN41_INTERNAL_19_pushrelabel_cpp1_ii_45def1c06thrust12placeholders2_3E,::thrust::placeholders::_3), 0, 1Ui64, 0, 0); __cudaRegisterVariable(__T3, __shadow_var(_ZN41_INTERNAL_19_pushrelabel_cpp1_ii_45def1c06thrust12placeholders2_4E,::thrust::placeholders::_4), 0, 1Ui64, 0, 0); __cudaRegisterVariable(__T3, __shadow_var(_ZN41_INTERNAL_19_pushrelabel_cpp1_ii_45def1c06thrust12placeholders2_5E,::thrust::placeholders::_5), 0, 1Ui64, 0, 0); __cudaRegisterVariable(__T3, __shadow_var(_ZN41_INTERNAL_19_pushrelabel_cpp1_ii_45def1c06thrust12placeholders2_6E,::thrust::placeholders::_6), 0, 1Ui64, 0, 0); __cudaRegisterVariable(__T3, __shadow_var(_ZN41_INTERNAL_19_pushrelabel_cpp1_ii_45def1c06thrust12placeholders2_7E,::thrust::placeholders::_7), 0, 1Ui64, 0, 0); __cudaRegisterVariable(__T3, __shadow_var(_ZN41_INTERNAL_19_pushrelabel_cpp1_ii_45def1c06thrust12placeholders2_8E,::thrust::placeholders::_8), 0, 1Ui64, 0, 0); __cudaRegisterVariable(__T3, __shadow_var(_ZN41_INTERNAL_19_pushrelabel_cpp1_ii_45def1c06thrust12placeholders2_9E,::thrust::placeholders::_9), 0, 1Ui64, 0, 0); __cudaRegisterVariable(__T3, __shadow_var(_ZN41_INTERNAL_19_pushrelabel_cpp1_ii_45def1c06thrust12placeholders3_10E,::thrust::placeholders::_10), 0, 1Ui64, 0, 0); __cudaRegisterVariable(__T3, __shadow_var(_ZN41_INTERNAL_19_pushrelabel_cpp1_ii_45def1c06thrust3seqE,::thrust::seq), 0, 1Ui64, 0, 0); __cudaRegisterVariable(__T3, __shadow_var(_ZN41_INTERNAL_19_pushrelabel_cpp1_ii_45def1c06thrust6deviceE,::thrust::device), 0, 1Ui64, 0, 0); }
static void __sti____cudaRegisterAll(void) {  __cudaRegisterBinary(__nv_cudaEntityRegisterCallback);  }

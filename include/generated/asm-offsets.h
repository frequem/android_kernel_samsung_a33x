#ifndef __ASM_OFFSETS_H__
#define __ASM_OFFSETS_H__
/*
 * DO NOT MODIFY.
 *
 * This file was generated by Kbuild
 */

#define TSK_ACTIVE_MM 1312 /* offsetof(struct task_struct, active_mm) */

#define TSK_TI_FLAGS 0 /* offsetof(struct task_struct, thread_info.flags) */
#define TSK_TI_PREEMPT 24 /* offsetof(struct task_struct, thread_info.preempt_count) */
#define TSK_TI_ADDR_LIMIT 8 /* offsetof(struct task_struct, thread_info.addr_limit) */
#define TSK_TI_TTBR0 16 /* offsetof(struct task_struct, thread_info.ttbr0) */
#define TSK_TI_SCS_BASE 32 /* offsetof(struct task_struct, thread_info.scs_base) */
#define TSK_TI_SCS_SP 40 /* offsetof(struct task_struct, thread_info.scs_sp) */
#define TSK_STACK 56 /* offsetof(struct task_struct, stack) */
#define TSK_STACK_CANARY 1488 /* offsetof(struct task_struct, stack_canary) */

#define THREAD_CPU_CONTEXT 3616 /* offsetof(struct task_struct, thread.cpu_context) */
#define THREAD_SCTLR_USER 4696 /* offsetof(struct task_struct, thread.sctlr_user) */
#define THREAD_KEYS_USER 4592 /* offsetof(struct task_struct, thread.keys_user) */
#define THREAD_KEYS_KERNEL 4672 /* offsetof(struct task_struct, thread.keys_kernel) */
#define THREAD_MTE_CTRL 4688 /* offsetof(struct task_struct, thread.mte_ctrl) */

#define S_X0 0 /* offsetof(struct pt_regs, regs[0]) */
#define S_X2 16 /* offsetof(struct pt_regs, regs[2]) */
#define S_X4 32 /* offsetof(struct pt_regs, regs[4]) */
#define S_X6 48 /* offsetof(struct pt_regs, regs[6]) */
#define S_X8 64 /* offsetof(struct pt_regs, regs[8]) */
#define S_X10 80 /* offsetof(struct pt_regs, regs[10]) */
#define S_X12 96 /* offsetof(struct pt_regs, regs[12]) */
#define S_X14 112 /* offsetof(struct pt_regs, regs[14]) */
#define S_X16 128 /* offsetof(struct pt_regs, regs[16]) */
#define S_X18 144 /* offsetof(struct pt_regs, regs[18]) */
#define S_X20 160 /* offsetof(struct pt_regs, regs[20]) */
#define S_X22 176 /* offsetof(struct pt_regs, regs[22]) */
#define S_X24 192 /* offsetof(struct pt_regs, regs[24]) */
#define S_X26 208 /* offsetof(struct pt_regs, regs[26]) */
#define S_X28 224 /* offsetof(struct pt_regs, regs[28]) */
#define S_FP 232 /* offsetof(struct pt_regs, regs[29]) */
#define S_LR 240 /* offsetof(struct pt_regs, regs[30]) */
#define S_SP 248 /* offsetof(struct pt_regs, sp) */
#define S_PSTATE 264 /* offsetof(struct pt_regs, pstate) */
#define S_PC 256 /* offsetof(struct pt_regs, pc) */
#define S_SYSCALLNO 280 /* offsetof(struct pt_regs, syscallno) */
#define S_ORIG_ADDR_LIMIT 288 /* offsetof(struct pt_regs, orig_addr_limit) */
#define S_PMR_SAVE 296 /* offsetof(struct pt_regs, pmr_save) */
#define S_STACKFRAME 304 /* offsetof(struct pt_regs, stackframe) */
#define S_FRAME_SIZE 336 /* sizeof(struct pt_regs) */

#define COMPAT_SIGFRAME_REGS_OFFSET 32 /* offsetof(struct compat_sigframe, uc.uc_mcontext.arm_r0) */
#define COMPAT_RT_SIGFRAME_REGS_OFFSET 160 /* offsetof(struct compat_rt_sigframe, sig.uc.uc_mcontext.arm_r0) */

#define MM_CONTEXT_ID 768 /* offsetof(struct mm_struct, context.id.counter) */

#define VMA_VM_MM 64 /* offsetof(struct vm_area_struct, vm_mm) */
#define VMA_VM_FLAGS 80 /* offsetof(struct vm_area_struct, vm_flags) */

#define VM_EXEC 4 /* VM_EXEC */

#define PAGE_SZ 4096 /* PAGE_SIZE */

#define DMA_TO_DEVICE 1 /* DMA_TO_DEVICE */
#define DMA_FROM_DEVICE 2 /* DMA_FROM_DEVICE */

#define PREEMPT_DISABLE_OFFSET 1 /* PREEMPT_DISABLE_OFFSET */
#define SOFTIRQ_SHIFT 8 /* SOFTIRQ_SHIFT */
#define IRQ_CPUSTAT_SOFTIRQ_PENDING 0 /* offsetof(irq_cpustat_t, __softirq_pending) */

#define CPU_BOOT_STACK 0 /* offsetof(struct secondary_data, stack) */
#define CPU_BOOT_TASK 8 /* offsetof(struct secondary_data, task) */

#define FTR_OVR_VAL_OFFSET 0 /* offsetof(struct arm64_ftr_override, val) */
#define FTR_OVR_MASK_OFFSET 8 /* offsetof(struct arm64_ftr_override, mask) */

#define VCPU_CONTEXT 368 /* offsetof(struct kvm_vcpu, arch.ctxt) */
#define VCPU_FAULT_DISR 2224 /* offsetof(struct kvm_vcpu, arch.fault.disr_el1) */
#define VCPU_WORKAROUND_FLAGS 2232 /* offsetof(struct kvm_vcpu, arch.workaround_flags) */
#define VCPU_HCR_EL2 2184 /* offsetof(struct kvm_vcpu, arch.hcr_el2) */
#define CPU_USER_PT_REGS 0 /* offsetof(struct kvm_cpu_context, regs) */
#define CPU_APIAKEYLO_EL1 1608 /* offsetof(struct kvm_cpu_context, sys_regs[APIAKEYLO_EL1]) */
#define CPU_APIBKEYLO_EL1 1624 /* offsetof(struct kvm_cpu_context, sys_regs[APIBKEYLO_EL1]) */
#define CPU_APDAKEYLO_EL1 1640 /* offsetof(struct kvm_cpu_context, sys_regs[APDAKEYLO_EL1]) */
#define CPU_APDBKEYLO_EL1 1656 /* offsetof(struct kvm_cpu_context, sys_regs[APDBKEYLO_EL1]) */
#define CPU_APGAKEYLO_EL1 1672 /* offsetof(struct kvm_cpu_context, sys_regs[APGAKEYLO_EL1]) */
#define HOST_CONTEXT_VCPU 1784 /* offsetof(struct kvm_cpu_context, __hyp_running_vcpu) */
#define HOST_DATA_CONTEXT 0 /* offsetof(struct kvm_host_data, host_ctxt) */
#define NVHE_INIT_MAIR_EL2 0 /* offsetof(struct kvm_nvhe_init_params, mair_el2) */
#define NVHE_INIT_TCR_EL2 8 /* offsetof(struct kvm_nvhe_init_params, tcr_el2) */
#define NVHE_INIT_TPIDR_EL2 16 /* offsetof(struct kvm_nvhe_init_params, tpidr_el2) */
#define NVHE_INIT_STACK_HYP_VA 24 /* offsetof(struct kvm_nvhe_init_params, stack_hyp_va) */
#define NVHE_INIT_PGD_PA 32 /* offsetof(struct kvm_nvhe_init_params, pgd_pa) */
#define NVHE_INIT_HCR_EL2 40 /* offsetof(struct kvm_nvhe_init_params, hcr_el2) */
#define NVHE_INIT_VTTBR 48 /* offsetof(struct kvm_nvhe_init_params, vttbr) */
#define NVHE_INIT_VTCR 56 /* offsetof(struct kvm_nvhe_init_params, vtcr) */
#define CPU_CTX_SP 104 /* offsetof(struct cpu_suspend_ctx, sp) */
#define MPIDR_HASH_MASK 0 /* offsetof(struct mpidr_hash, mask) */
#define MPIDR_HASH_SHIFTS 8 /* offsetof(struct mpidr_hash, shift_aff) */
#define SLEEP_STACK_DATA_SYSTEM_REGS 0 /* offsetof(struct sleep_stack_data, system_regs) */
#define SLEEP_STACK_DATA_CALLEE_REGS 112 /* offsetof(struct sleep_stack_data, callee_saved_regs) */
#define ARM_SMCCC_RES_X0_OFFS 0 /* offsetof(struct arm_smccc_res, a0) */
#define ARM_SMCCC_RES_X2_OFFS 16 /* offsetof(struct arm_smccc_res, a2) */
#define ARM_SMCCC_QUIRK_ID_OFFS 0 /* offsetof(struct arm_smccc_quirk, id) */
#define ARM_SMCCC_QUIRK_STATE_OFFS 8 /* offsetof(struct arm_smccc_quirk, state) */

#define HIBERN_PBE_ORIG 8 /* offsetof(struct pbe, orig_address) */
#define HIBERN_PBE_ADDR 0 /* offsetof(struct pbe, address) */
#define HIBERN_PBE_NEXT 16 /* offsetof(struct pbe, next) */
#define ARM64_FTR_SYSVAL 24 /* offsetof(struct arm64_ftr_reg, sys_val) */

#define PTRAUTH_USER_KEY_APIA 0 /* offsetof(struct ptrauth_keys_user, apia) */
#define PTRAUTH_KERNEL_KEY_APIA 0 /* offsetof(struct ptrauth_keys_kernel, apia) */


#endif

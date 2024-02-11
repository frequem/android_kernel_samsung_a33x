SECTIONS {
	__patchable_function_entries : { *(__patchable_function_entries) }
	.text : {
		__exynos_hdr_update.a8088351f22ad3b9006b532916af48ba.cfi_jt = . + 0x550ec;
		__exynos_hdr_prepare.a8088351f22ad3b9006b532916af48ba.cfi_jt = . + 0x55144;
		__exynos_dqe_update.5f1a96dadbcce5447e3779ff7aedac2e.cfi_jt = . + 0x5515c;
		__set_recovery_state.3435f46b26c05060f9e72a45c090fb5b.cfi_jt = . + 0x55244;
		__exynos_hdr_dump.a8088351f22ad3b9006b532916af48ba.cfi_jt = . + 0x55274;
		__drm_atomic_state_free.cfi_jt = . + 0x552a4;
		__set_recovery_mode.3435f46b26c05060f9e72a45c090fb5b.cfi_jt = . + 0x5537c;
		__exynos_dqe_dump.5f1a96dadbcce5447e3779ff7aedac2e.cfi_jt = . + 0x55414;
		__exynos_dqe_state.5f1a96dadbcce5447e3779ff7aedac2e.cfi_jt = . + 0x5550c;
		__get_recovery_state.3435f46b26c05060f9e72a45c090fb5b.cfi_jt = . + 0x5562c;
	}
}

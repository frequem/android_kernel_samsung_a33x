SECTIONS {
	__patchable_function_entries : { *(__patchable_function_entries) }
	.text : {
		__ctrl_gear.5e6dc7a848cc678417d05ab311d7e4f7.cfi_jt = . + 0x14e14;
		__sysfs_pm_qos_mif_show.f707e7f56ddfb6b43d1bcefb66701e39.cfi_jt = . + 0x14e84;
		__policy_heavy.cc08729119029b35b8e3c7a53e7f948e.cfi_jt = . + 0x14f04;
		__sysfs_qd_max_store.cc08729119029b35b8e3c7a53e7f948e.cfi_jt = . + 0x15044;
		__sysfs_pm_qos_int_store.f707e7f56ddfb6b43d1bcefb66701e39.cfi_jt = . + 0x1518c;
		__sysfs_detect_dwell_show.cc08729119029b35b8e3c7a53e7f948e.cfi_jt = . + 0x152ac;
	}
}

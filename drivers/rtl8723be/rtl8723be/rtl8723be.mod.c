#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xbff2abe1, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x6493d1a5, __VMLINUX_SYMBOL_STR(rtl_cam_delete_one_entry) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x544c61ce, __VMLINUX_SYMBOL_STR(rtl_pci_probe) },
	{ 0x97798d52, __VMLINUX_SYMBOL_STR(rtl_cam_get_free_entry) },
	{ 0xda3e43d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x705f9143, __VMLINUX_SYMBOL_STR(rtl_ps_disable_nic) },
	{ 0x66b1f3c1, __VMLINUX_SYMBOL_STR(rtl_btc_get_ops_pointer) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x8d4aabc7, __VMLINUX_SYMBOL_STR(rtl_get_tcb_desc) },
	{ 0x2123c5cd, __VMLINUX_SYMBOL_STR(rtl_efuse_shadow_map_update) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x79188a02, __VMLINUX_SYMBOL_STR(rtl_query_rxpwrpercentage) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x6099a1ba, __VMLINUX_SYMBOL_STR(rtl_cam_add_one_entry) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x207fbb70, __VMLINUX_SYMBOL_STR(rtl_evm_db_to_percentage) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x37e7352d, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x48746c14, __VMLINUX_SYMBOL_STR(rtl_pci_resume) },
	{ 0xe01857e, __VMLINUX_SYMBOL_STR(rtl_ps_enable_nic) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x4bebaf06, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x44f97894, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xc0e88dc, __VMLINUX_SYMBOL_STR(rtl_signal_scale_mapping) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0xba647499, __VMLINUX_SYMBOL_STR(rtl_pci_suspend) },
	{ 0xc0a94410, __VMLINUX_SYMBOL_STR(rtl_pci_disconnect) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xd21034fb, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x866aa1c6, __VMLINUX_SYMBOL_STR(ieee80211_find_sta) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xcbec22ab, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x49bf15cb, __VMLINUX_SYMBOL_STR(rtl_cam_mark_invalid) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x5268c48b, __VMLINUX_SYMBOL_STR(rtl_cam_del_entry) },
	{ 0x5960e06b, __VMLINUX_SYMBOL_STR(rtl_cam_empty_entry) },
	{ 0x4bb33b78, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x5f6fac50, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xc2394d30, __VMLINUX_SYMBOL_STR(rtl_cam_reset_all_entry) },
	{ 0x694d564c, __VMLINUX_SYMBOL_STR(rtl_process_phyinfo) },
	{ 0xcbdc0d34, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xccd68d59, __VMLINUX_SYMBOL_STR(efuse_read_1byte) },
	{ 0xe2c67b00, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0x33e64620, __VMLINUX_SYMBOL_STR(dma_ops) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rtlwifi,btcoexist,mac80211";

MODULE_ALIAS("pci:v000010ECd0000B723sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "7E5511712E4A95C6031F2B7");

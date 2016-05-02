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
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x1c364e87, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x358ec588, __VMLINUX_SYMBOL_STR(ethtool_op_get_ts_info) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x391093cf, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x8eac87bd, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0x43927f92, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x595158ae, __VMLINUX_SYMBOL_STR(napi_complete) },
	{ 0xf6a4a37b, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xe5eded24, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xaeda8faf, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xbc7676e3, __VMLINUX_SYMBOL_STR(x86_dma_fallback_dev) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x713611c7, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xb36da390, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x37e7352d, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x5b0fc56, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x67fd2ce1, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0xcb21ed87, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xf2324b52, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x33021a59, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xcf52d1dc, __VMLINUX_SYMBOL_STR(__pci_enable_wake) },
	{ 0x802d0e93, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x5ce051b5, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0xbe2c0274, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x977476bb, __VMLINUX_SYMBOL_STR(dev_kfree_skb_any) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x89591ae3, __VMLINUX_SYMBOL_STR(pci_find_capability) },
	{ 0x7bf5d9ee, __VMLINUX_SYMBOL_STR(dev_kfree_skb_irq) },
	{ 0x4b49659a, __VMLINUX_SYMBOL_STR(pci_set_mwi) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x1be040e, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x9af94720, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0xc15136da, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x4344e2f1, __VMLINUX_SYMBOL_STR(pci_disable_link_state) },
	{ 0xf5c54990, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0xed349219, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0xfcc46abb, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0x5d18ed0b, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xea581000, __VMLINUX_SYMBOL_STR(skb_checksum_help) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x361f4039, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xcbccd081, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xfaf98462, __VMLINUX_SYMBOL_STR(bitrev32) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x8f37f5dc, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x3733cddd, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0xc017b793, __VMLINUX_SYMBOL_STR(pci_clear_mwi) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x801678, __VMLINUX_SYMBOL_STR(flush_scheduled_work) },
	{ 0x9696caf7, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x92c5f0e, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x634b9a3, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x4a1188eb, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x48dfb368, __VMLINUX_SYMBOL_STR(pci_enable_msi_block) },
	{ 0x9549890f, __VMLINUX_SYMBOL_STR(pci_choose_state) },
	{ 0xd053cf7d, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0xb30c84cf, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xafad493b, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xcbdc0d34, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x9668ec0c, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xa8c29637, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x33e64620, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x9a7cb72, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xe640ab46, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000010ECd00008168sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004300sv00001186sd00004B10bc*sc*i*");

MODULE_INFO(srcversion, "7600C3366E422907A1D79F1");

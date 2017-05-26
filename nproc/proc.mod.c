#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5c000ad6, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x6cc42aee, __VMLINUX_SYMBOL_STR(proc_dointvec_minmax) },
	{ 0x3915237d, __VMLINUX_SYMBOL_STR(vma_kernel_pagesize) },
	{ 0x95ca15d6, __VMLINUX_SYMBOL_STR(d_path) },
	{ 0x656c1a0e, __VMLINUX_SYMBOL_STR(string_escape_mem) },
	{ 0xd02166d8, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xb26a1add, __VMLINUX_SYMBOL_STR(elfcorehdr_addr) },
	{ 0xf98a9259, __VMLINUX_SYMBOL_STR(put_pid) },
	{ 0x6f1d0b1e, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x514eb935, __VMLINUX_SYMBOL_STR(seq_put_decimal_ll) },
	{ 0xce20bab0, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xd812ea2, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0xbd0b2276, __VMLINUX_SYMBOL_STR(d_invalidate) },
	{ 0x6bf1c17f, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x2a3b3e6, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0xd21bc6d4, __VMLINUX_SYMBOL_STR(get_task_pid) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x39461d6a, __VMLINUX_SYMBOL_STR(in_egroup_p) },
	{ 0x54245b39, __VMLINUX_SYMBOL_STR(kstrtoull_from_user) },
	{ 0xd8bb2eb7, __VMLINUX_SYMBOL_STR(d_set_d_op) },
	{ 0xad55effd, __VMLINUX_SYMBOL_STR(from_kuid_munged) },
	{ 0x4d9a27c0, __VMLINUX_SYMBOL_STR(kill_anon_super) },
	{ 0xbca03596, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0xab91dc13, __VMLINUX_SYMBOL_STR(seq_release_private) },
	{ 0xb8b043f2, __VMLINUX_SYMBOL_STR(kfree_link) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xa5e0072a, __VMLINUX_SYMBOL_STR(kern_unmount) },
	{ 0xb414d120, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x9b0c1610, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x8507c383, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0xcafed1e5, __VMLINUX_SYMBOL_STR(__put_user_ns) },
	{ 0x30270c4f, __VMLINUX_SYMBOL_STR(downgrade_write) },
	{ 0x7729eeda, __VMLINUX_SYMBOL_STR(get_task_exe_file) },
	{ 0x13f6a49b, __VMLINUX_SYMBOL_STR(pid_nr_ns) },
	{ 0x179651ac, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xb3330e56, __VMLINUX_SYMBOL_STR(generic_delete_inode) },
	{ 0x7ba4898, __VMLINUX_SYMBOL_STR(get_task_comm) },
	{ 0x280b0eac, __VMLINUX_SYMBOL_STR(dput) },
	{ 0xdd48fbb3, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xe594ab93, __VMLINUX_SYMBOL_STR(save_stack_trace_tsk) },
	{ 0xee92292c, __VMLINUX_SYMBOL_STR(task_tgid_nr_ns) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0xee6face7, __VMLINUX_SYMBOL_STR(put_zone_device_page) },
	{ 0x69e44691, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0x56eeee52, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0xe75a24df, __VMLINUX_SYMBOL_STR(down_write_killable) },
	{ 0x4cc9e598, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x93c616b3, __VMLINUX_SYMBOL_STR(d_add) },
	{ 0x3a44809c, __VMLINUX_SYMBOL_STR(mmput) },
	{ 0x753634fa, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x5f83f97e, __VMLINUX_SYMBOL_STR(tty_get_pgrp) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0xd3b7331d, __VMLINUX_SYMBOL_STR(path_get) },
	{ 0x85f2152b, __VMLINUX_SYMBOL_STR(tty_devnum) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x8047601b, __VMLINUX_SYMBOL_STR(__put_net) },
	{ 0xec23d5b8, __VMLINUX_SYMBOL_STR(seq_pad) },
	{ 0x4a7eba13, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xf2b03354, __VMLINUX_SYMBOL_STR(__mmdrop) },
	{ 0xf2d8f605, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xd8e97a12, __VMLINUX_SYMBOL_STR(mutex_lock_killable) },
	{ 0xdcddf525, __VMLINUX_SYMBOL_STR(from_kgid_munged) },
	{ 0xde9360ba, __VMLINUX_SYMBOL_STR(totalram_pages) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0x6920ff27, __VMLINUX_SYMBOL_STR(proc_dointvec_userhz_jiffies) },
	{ 0x710c52b3, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0x2ac12806, __VMLINUX_SYMBOL_STR(find_get_entry) },
	{ 0x6634cc5b, __VMLINUX_SYMBOL_STR(remap_vmalloc_range_partial) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x3d6f59f7, __VMLINUX_SYMBOL_STR(from_kuid) },
	{ 0xb92687a, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xcc75d40f, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x7e3e8230, __VMLINUX_SYMBOL_STR(__seq_open_private) },
	{ 0xaac1f535, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x477e59a3, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0x209c962b, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0x1ad9728c, __VMLINUX_SYMBOL_STR(get_task_mm) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0x5d0161ec, __VMLINUX_SYMBOL_STR(proc_doulongvec_minmax) },
	{ 0xaf8e1db, __VMLINUX_SYMBOL_STR(__mmu_notifier_invalidate_range_start) },
	{ 0x761529dd, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0xcd61be97, __VMLINUX_SYMBOL_STR(mount_ns) },
	{ 0x9ab1087, __VMLINUX_SYMBOL_STR(seq_file_path) },
	{ 0x2b2427ab, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x91f1d1b9, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x2f53ee05, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xe8db8dd2, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0xe1b4bcc2, __VMLINUX_SYMBOL_STR(setattr_copy) },
	{ 0xd40f31d4, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xd875b75a, __VMLINUX_SYMBOL_STR(task_cputime_adjusted) },
	{ 0x86f5344, __VMLINUX_SYMBOL_STR(pid_task) },
	{ 0x2276db98, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0x9d3635fd, __VMLINUX_SYMBOL_STR(proc_doulongvec_ms_jiffies_minmax) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0x1411d693, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x9ee9da82, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xbf1b5ccf, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xa37e78b6, __VMLINUX_SYMBOL_STR(flex_array_get) },
	{ 0x71828a66, __VMLINUX_SYMBOL_STR(proc_dostring) },
	{ 0x49aa7161, __VMLINUX_SYMBOL_STR(linear_hugepage_index) },
	{ 0x20b4761, __VMLINUX_SYMBOL_STR(__task_pid_nr_ns) },
	{ 0x14bf9e8f, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0x3d6cd2b6, __VMLINUX_SYMBOL_STR(find_vma) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x1421fc5, __VMLINUX_SYMBOL_STR(init_task) },
	{ 0xfcb926cd, __VMLINUX_SYMBOL_STR(kstrtouint_from_user) },
	{ 0x5c20ca21, __VMLINUX_SYMBOL_STR(put_pid_ns) },
	{ 0x85efc7e0, __VMLINUX_SYMBOL_STR(zero_pfn) },
	{ 0x3f446532, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xa916b694, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x7a5f89cc, __VMLINUX_SYMBOL_STR(truncate_inode_pages_final) },
	{ 0xde2ca858, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x5635a60a, __VMLINUX_SYMBOL_STR(vmalloc_user) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb8040f92, __VMLINUX_SYMBOL_STR(simple_dentry_operations) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x2c2d81a6, __VMLINUX_SYMBOL_STR(__d_lookup_done) },
	{ 0x8b8059bd, __VMLINUX_SYMBOL_STR(in_group_p) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xcb0cd98, __VMLINUX_SYMBOL_STR(__mmu_notifier_invalidate_range_end) },
	{ 0x1b6bcd7e, __VMLINUX_SYMBOL_STR(PageHuge) },
	{ 0x10afcdb6, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x321af523, __VMLINUX_SYMBOL_STR(__put_cred) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x800fb92b, __VMLINUX_SYMBOL_STR(full_name_hash) },
	{ 0x82193fad, __VMLINUX_SYMBOL_STR(path_put) },
	{ 0x1d92a58b, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x61fb248a, __VMLINUX_SYMBOL_STR(node_states) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0xc3a3b1c, __VMLINUX_SYMBOL_STR(file_ns_capable) },
	{ 0xd77f5124, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xddd1e3ab, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x3fd16f91, __VMLINUX_SYMBOL_STR(d_lookup) },
	{ 0x7a4b576, __VMLINUX_SYMBOL_STR(flex_array_free) },
	{ 0x2796cfc0, __VMLINUX_SYMBOL_STR(init_pid_ns) },
	{ 0xefa6da50, __VMLINUX_SYMBOL_STR(d_hash_and_lookup) },
	{ 0xff1e9dd8, __VMLINUX_SYMBOL_STR(seq_list_start) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0xd3974bb9, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xa1c78913, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x8d838d91, __VMLINUX_SYMBOL_STR(ida_remove) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf5cf814, __VMLINUX_SYMBOL_STR(generic_permission) },
	{ 0x5280d92, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x304895bc, __VMLINUX_SYMBOL_STR(proc_dointvec_ms_jiffies) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0xbb0be4a9, __VMLINUX_SYMBOL_STR(current_time) },
	{ 0xa153f92d, __VMLINUX_SYMBOL_STR(pv_mmu_ops) },
	{ 0x738714db, __VMLINUX_SYMBOL_STR(ida_pre_get) },
	{ 0xe53cec9e, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0x4d1195e5, __VMLINUX_SYMBOL_STR(__put_task_struct) },
	{ 0x13315729, __VMLINUX_SYMBOL_STR(flex_array_alloc) },
	{ 0x7d280eba, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xb9eb9199, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xd7608792, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0xa4f156a0, __VMLINUX_SYMBOL_STR(__page_mapcount) },
	{ 0xeca2e95d, __VMLINUX_SYMBOL_STR(seq_put_decimal_ull) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0xc5fa692f, __VMLINUX_SYMBOL_STR(d_alloc_name) },
	{ 0xb82686fe, __VMLINUX_SYMBOL_STR(get_pid_task) },
	{ 0xca9360b5, __VMLINUX_SYMBOL_STR(rb_next) },
	{ 0x5efa021b, __VMLINUX_SYMBOL_STR(task_active_pid_ns) },
	{ 0x9bbe88b3, __VMLINUX_SYMBOL_STR(flex_array_put) },
	{ 0xfc1d5308, __VMLINUX_SYMBOL_STR(kern_mount_data) },
	{ 0x7d0db45c, __VMLINUX_SYMBOL_STR(jiffies_to_clock_t) },
	{ 0x9291cd3b, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xf039020a, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0xf3ed0663, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xe7d4daac, __VMLINUX_SYMBOL_STR(seq_list_next) },
	{ 0x77bc13a0, __VMLINUX_SYMBOL_STR(strim) },
	{ 0xcd974f00, __VMLINUX_SYMBOL_STR(rcu_all_qs) },
	{ 0x39f1c2f4, __VMLINUX_SYMBOL_STR(ida_get_new_above) },
	{ 0x96aba385, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x8ca586de, __VMLINUX_SYMBOL_STR(page_mapped) },
	{ 0x7201f767, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0x2a405d88, __VMLINUX_SYMBOL_STR(d_alloc_parallel) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0xe206317b, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x3943230, __VMLINUX_SYMBOL_STR(setattr_prepare) },
	{ 0xa1f01e41, __VMLINUX_SYMBOL_STR(generic_fillattr) },
	{ 0x9fd7cda1, __VMLINUX_SYMBOL_STR(flex_array_prealloc) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "96C6649A3B5992EE080CFB7");

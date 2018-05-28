/* This file is automatically generated by gensymlist.sh. DO NOT EDIT! */
/*
 *  GRUB  --  GRand Unified Bootloader
 *  Copyright (C) 2002,2006,2007,2008,2009,2010  Free Software Foundation, Inc.
 *
 *  GRUB is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  GRUB is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with GRUB.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <../config.h>
#include <../include/grub/cache.h>
#include <../include/grub/command.h>
#include <../include/grub/device.h>
#include <../include/grub/disk.h>
#include <../include/grub/dl.h>
#include <../include/grub/env.h>
#include <../include/grub/env_private.h>
#include <../include/grub/err.h>
#include <../include/grub/file.h>
#include <../include/grub/fs.h>
#include <../include/grub/i18n.h>
#include <../include/grub/kernel.h>
#include <../include/grub/list.h>
#include <../include/grub/misc.h>
#include <../include/grub/compiler-rt.h>
#include <../include/grub/mm.h>
#include <../include/grub/parser.h>
#include <../include/grub/partition.h>
#include <../include/grub/term.h>
#include <../include/grub/time.h>
#include <../include/grub/mm_private.h>
#include <../include/grub/net.h>
#include <../include/grub/memory.h>
#include <../include/grub/machine/kernel.h>
#include <../include/grub/machine/pxe.h>
#include <../include/grub/machine/int.h>
#include <../include/grub/i386/tsc.h>

#define COMPILE_TIME_ASSERT(cond) switch (0) { case 1: case !(cond): ; }

#pragma GCC diagnostic ignored "-Wmissing-format-attribute"

void
grub_register_exported_symbols (void)
{
  struct symtab { const char *name; void *addr; int isfunc; };
  struct symtab *p;
  static struct symtab tab[] =
    {
      {"grub_bios_interrupt", grub_bios_interrupt, 1},
      {"grub_boot_device", (void *) &grub_boot_device, 0},
      {"grub_command_list", (void *) &grub_command_list, 0},
      {"grub_current_context", (void *) &grub_current_context, 0},
      {"grub_device_close", grub_device_close, 1},
      {"grub_device_iterate", grub_device_iterate, 1},
      {"grub_device_open", grub_device_open, 1},
      {"grub_disk_cache_table", (void *) &grub_disk_cache_table, 0},
      {"grub_disk_close", grub_disk_close, 1},
      {"grub_disk_dev_list", (void *) &grub_disk_dev_list, 0},
      {"grub_disk_dev_register", grub_disk_dev_register, 1},
      {"grub_disk_dev_unregister", grub_disk_dev_unregister, 1},
      {"grub_disk_firmware_fini", (void *) &grub_disk_firmware_fini, 0},
      {"grub_disk_firmware_is_tainted", (void *) &grub_disk_firmware_is_tainted, 0},
      {"grub_disk_get_size", grub_disk_get_size, 1},
      {"grub_disk_open", grub_disk_open, 1},
      {"grub_disk_read", grub_disk_read, 1},
      {"grub_disk_write_weak", (void *) &grub_disk_write_weak, 0},
      {"grub_divmod64", grub_divmod64, 1},
      {"grub_dl_head", (void *) &grub_dl_head, 0},
      {"grub_dl_load", grub_dl_load, 1},
      {"grub_dl_load_core_noinit", grub_dl_load_core_noinit, 1},
      {"grub_dl_ref", grub_dl_ref, 1},
      {"grub_dl_unload", grub_dl_unload, 1},
      {"grub_dl_unref", grub_dl_unref, 1},
      {"grub_env_export", grub_env_export, 1},
      {"grub_env_get", grub_env_get, 1},
      {"grub_env_set", grub_env_set, 1},
      {"grub_env_unset", grub_env_unset, 1},
      {"grub_env_update_get_sorted", grub_env_update_get_sorted, 1},
      {"grub_err_printed_errors", (void *) &grub_err_printed_errors, 0},
      {"grub_errmsg", (void *) &grub_errmsg, 0},
      {"grub_errno", (void *) &grub_errno, 0},
      {"grub_error", grub_error, 1},
      {"grub_error_pop", grub_error_pop, 1},
      {"grub_error_push", grub_error_push, 1},
      {"grub_exit", grub_exit, 1},
      {"grub_fatal", grub_fatal, 1},
      {"grub_file_close", grub_file_close, 1},
      {"grub_file_filters_all", (void *) &grub_file_filters_all, 0},
      {"grub_file_filters_enabled", (void *) &grub_file_filters_enabled, 0},
      {"grub_file_get_device_name", grub_file_get_device_name, 1},
      {"grub_file_open", grub_file_open, 1},
      {"grub_file_progress_hook", (void *) &grub_file_progress_hook, 0},
      {"grub_file_read", grub_file_read, 1},
      {"grub_file_seek", grub_file_seek, 1},
      {"grub_free", grub_free, 1},
      {"grub_fs_autoload_hook", (void *) &grub_fs_autoload_hook, 0},
      {"grub_fs_list", (void *) &grub_fs_list, 0},
      {"grub_fs_probe", grub_fs_probe, 1},
      {"grub_get_time_ms", grub_get_time_ms, 1},
      {"grub_getkey", grub_getkey, 1},
      {"grub_getkey_noblock", grub_getkey_noblock, 1},
      {"grub_gettext", (void *) &grub_gettext, 0},
      {"grub_isspace", grub_isspace, 1},
      {"grub_list_push", grub_list_push, 1},
      {"grub_list_remove", grub_list_remove, 1},
      {"grub_machine_fini", grub_machine_fini, 1},
      {"grub_machine_mmap_iterate", grub_machine_mmap_iterate, 1},
      {"grub_malloc", grub_malloc, 1},
      {"grub_memalign", grub_memalign, 1},
      {"grub_memcmp", grub_memcmp, 1},
      {"grub_memmove", grub_memmove, 1},
      {"grub_memset", grub_memset, 1},
      {"grub_millisleep", grub_millisleep, 1},
      {"grub_mm_base", (void *) &grub_mm_base, 0},
      {"grub_modbase", (void *) &grub_modbase, 0},
      {"grub_named_list_find", grub_named_list_find, 1},
      {"grub_net_open", (void *) &grub_net_open, 0},
      {"grub_net_poll_cards_idle", (void *) &grub_net_poll_cards_idle, 0},
      {"grub_parser_cmdline_state", grub_parser_cmdline_state, 1},
      {"grub_parser_split_cmdline", grub_parser_split_cmdline, 1},
      {"grub_partition_get_name", grub_partition_get_name, 1},
      {"grub_partition_iterate", grub_partition_iterate, 1},
      {"grub_partition_map_list", (void *) &grub_partition_map_list, 0},
      {"grub_partition_probe", grub_partition_probe, 1},
      {"grub_pc_net_config", (void *) &grub_pc_net_config, 0},
      {"grub_print_error", grub_print_error, 1},
      {"grub_printf", grub_printf, 1},
      {"grub_printf_", grub_printf_, 1},
      {"grub_puts_", grub_puts_, 1},
      {"grub_pxe_call", grub_pxe_call, 1},
      {"grub_real_dprintf", grub_real_dprintf, 1},
      {"grub_realidt", (void *) &grub_realidt, 0},
      {"grub_realloc", grub_realloc, 1},
      {"grub_refresh", grub_refresh, 1},
      {"grub_register_command_prio", grub_register_command_prio, 1},
      {"grub_register_variable_hook", grub_register_variable_hook, 1},
      {"grub_snprintf", grub_snprintf, 1},
      {"grub_strchr", grub_strchr, 1},
      {"grub_strcmp", grub_strcmp, 1},
      {"grub_strcpy", grub_strcpy, 1},
      {"grub_strdup", grub_strdup, 1},
      {"grub_strlen", grub_strlen, 1},
      {"grub_strncmp", grub_strncmp, 1},
      {"grub_strndup", grub_strndup, 1},
      {"grub_strrchr", grub_strrchr, 1},
      {"grub_strtoul", grub_strtoul, 1},
      {"grub_strtoull", grub_strtoull, 1},
      {"grub_strword", grub_strword, 1},
      {"grub_term_highlight_color", (void *) &grub_term_highlight_color, 0},
      {"grub_term_inputs", (void *) &grub_term_inputs, 0},
      {"grub_term_inputs_disabled", (void *) &grub_term_inputs_disabled, 0},
      {"grub_term_normal_color", (void *) &grub_term_normal_color, 0},
      {"grub_term_outputs", (void *) &grub_term_outputs, 0},
      {"grub_term_outputs_disabled", (void *) &grub_term_outputs_disabled, 0},
      {"grub_term_poll_usb", (void *) &grub_term_poll_usb, 0},
      {"grub_tsc_rate", (void *) &grub_tsc_rate, 0},
      {"grub_unregister_command", grub_unregister_command, 1},
      {"grub_vprintf", grub_vprintf, 1},
      {"grub_vsnprintf", grub_vsnprintf, 1},
      {"grub_xasprintf", grub_xasprintf, 1},
      {"grub_xputs", (void *) &grub_xputs, 0},
      {"grub_xvasprintf", grub_xvasprintf, 1},
      {"grub_zalloc", grub_zalloc, 1},
      {"memcmp", memcmp, 1},
      {"memcpy", memcpy, 1},
      {"memmove", memmove, 1},
      {"memset", memset, 1},
      {0, 0, 0}
    };

  COMPILE_TIME_ASSERT (sizeof (tab) > sizeof (tab[0]));
  for (p = tab; p->name; p++)
    grub_dl_register_symbol (p->name, p->addr, p->isfunc, 0);
}

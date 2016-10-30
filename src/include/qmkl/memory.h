/*
 * Copyright (c) 2016 Sugizaki Yukimasa (ysugi@idein.jp)
 * All rights reserved.
 *
 * This software is licensed under a Modified (3-Clause) BSD License.
 * You should have received a copy of this license along with this
 * software. If not, contact the copyright holder above.
 */

#ifndef _QMKL_MEMORY_H_
#define _QMKL_MEMORY_H_

#include <sys/types.h>

	void memory_init();
	void memory_finalize();
	void* map_on_cpu(MKL_UINT ptr_gpu, size_t alloc_size);
	void unmap_on_cpu(void *ptr_cpu, size_t alloc_size);
	void* mkl_malloc(size_t alloc_size, int alignment);
	void mkl_free(void *a_ptr);

#define BUS_TO_PHYS(addr) ((addr) & ~0xc0000000)

#endif /* _QMKL_MEMORY_H_ */

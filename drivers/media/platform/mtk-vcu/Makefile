subdir-ccflags-y += -Werror
mtk-vcu-y += mtk_vcu.o \
	mtk_vcodec_mem.o \

obj-$(CONFIG_VIDEO_MEDIATEK_VCU) += mtk-vcu.o mtk_vcodec_mem.o
ccflags-y += -I$(srctree)/arch/arm
ccflags-y += -I$(srctree)/drivers/misc/mediatek/include/mt-plat
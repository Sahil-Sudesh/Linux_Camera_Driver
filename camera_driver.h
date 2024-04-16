#ifndef CAMERA_DRIVER_H
#define CAMERA_DRIVER_H

#include <linux/fs.h>

// Camera specifications
#define CAMERA_WIDTH 1280
#define CAMERA_HEIGHT 720
#define CAMERA_BUFFER_SIZE (CAMERA_WIDTH * CAMERA_HEIGHT * 2)

// Declare camera-specific functions
void camera_init(void);
void camera_capture(unsigned char *buffer);

// Declare device file operations
int camera_open(struct inode *inode, struct file *filp);
ssize_t camera_read(struct file *filp, char __user *user_buf, size_t len, loff_t *offset);

#endif /* CAMERA_DRIVER_H */

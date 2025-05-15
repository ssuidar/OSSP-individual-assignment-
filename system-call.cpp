#include <linux/fs.h> 
#include<linix/uaccess.h> 
#include<linux/namei.h> 
Long sys_chmod(const char __user*filename,umode_t mode) 
{ 
Struct path path ; 
Struct dentry*dentry; 
Struct inode*inode; 
Int error;  
error=kern_path(filename,LOOKUP_FOLLOW,&path); 
if(error) 
return error; 
dentry = path.dentry; 
inode = dentry->d_inode; 
//check the permission  
If(!capable(CAP_FOWNER)) 
Return-EPERM; 
//update inode permissions 
Inode->i_mode &=S_IRWXU; 
Inode->i_mode|=(mode & S_IRWXU); 
Mark_inode_dirty(inode); 
Return 0;
}

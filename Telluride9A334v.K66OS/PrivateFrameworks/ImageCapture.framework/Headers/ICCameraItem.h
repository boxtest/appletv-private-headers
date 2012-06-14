/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library
#import "ImageCapture-Structs.h"

@class ICCameraDevice, NSString, ICCameraFolder, NSMutableDictionary, NSDate, NSDictionary;

@interface ICCameraItem : NSObject {
@private
	void *_itemProperties;	// 4 = 0x4
}
@property(readonly, assign) NSString *UTI;	// G=0x32231bf1; 
@property(readonly, assign) NSDate *creationDate;	// G=0x32231c35; 
@property(readonly, assign) ICCameraDevice *device;	// G=0x32231b49; 
@property(readonly, assign) NSString *fileSystemPath;	// G=0x32231dc1; 
@property(readonly, assign) BOOL hasMetadata;	// G=0x32231aed; 
@property(readonly, assign) BOOL hasThumbnail;	// G=0x32231ae5; 
@property(assign, getter=isLocked) BOOL locked;	// G=0x32231ba9; S=0x32231bcd; 
@property(readonly, assign) NSDictionary *metadata;	// G=0x32231af1; 
@property(readonly, assign) NSDate *modificationDate;	// G=0x32231c79; 
@property(readonly, assign) NSString *name;	// G=0x32231b89; 
@property(readonly, assign) ICCameraFolder *parentFolder;	// G=0x32231b69; 
@property(readonly, assign) CGImageRef thumbnail;	// G=0x32231ae9; 
@property(readonly, assign) NSMutableDictionary *userData;	// G=0x32231cbd; 
- (id)initWithName:(id)name parentFolder:(id)folder device:(id)device;	// 0x3223227d
// declared property getter: - (id)UTI;	// 0x32231bf1
- (void)appendToPath:(id)path;	// 0x32231cdd
// declared property getter: - (id)creationDate;	// 0x32231c35
- (void)dealloc;	// 0x322323ed
- (id)description;	// 0x32231e31
// declared property getter: - (id)device;	// 0x32231b49
// declared property getter: - (id)fileSystemPath;	// 0x32231dc1
- (void)finalize;	// 0x32232399
- (void)flushMetadataCache;	// 0x32231b01
- (void)flushThumbnailCache;	// 0x32231afd
// declared property getter: - (BOOL)hasMetadata;	// 0x32231aed
// declared property getter: - (BOOL)hasThumbnail;	// 0x32231ae5
// declared property getter: - (BOOL)isLocked;	// 0x32231ba9
// declared property getter: - (id)metadata;	// 0x32231af1
// declared property getter: - (id)modificationDate;	// 0x32231c79
// declared property getter: - (id)name;	// 0x32231b89
// declared property getter: - (id)parentFolder;	// 0x32231b69
- (void)requestMetadata;	// 0x32231af9
- (void)requestThumbnail;	// 0x32231af5
- (void)setCreationDate:(id)date;	// 0x32231c55
// declared property setter: - (void)setLocked:(BOOL)locked;	// 0x32231bcd
- (void)setModificationDate:(id)date;	// 0x32231c99
- (void)setUTI:(id)uti;	// 0x32231c11
// declared property getter: - (CGImageRef)thumbnail;	// 0x32231ae9
// declared property getter: - (id)userData;	// 0x32231cbd
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x32231b05
@end

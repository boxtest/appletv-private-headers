/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ImageCapture-Structs.h"
#import "ICCameraItem.h"

@class NSArray;

@interface ICCameraFolder : ICCameraItem {
@private
	void *_folderProperties;	// 8 = 0x8
}
@property(readonly, assign) NSArray *contents;	// G=0x3223104d; 
- (id)initWithName:(id)name parentFolder:(id)folder device:(id)device;	// 0x322313a5
- (void)addFile:(id)file;	// 0x32230ec9
- (void)addFolder:(id)folder;	// 0x32230f05
// declared property getter: - (id)contents;	// 0x3223104d
- (void)dealloc;	// 0x3223162d
- (void)deleteFile:(id)file;	// 0x32230fd5
- (void)deleteFolder:(id)folder;	// 0x32231011
- (void)deleteItem:(id)item;	// 0x32230f41
- (id)description;	// 0x32231525
- (id)files;	// 0x322310cd
- (void)finalize;	// 0x322315d9
- (id)folders;	// 0x322310ed
- (BOOL)hasThumbnail;	// 0x32230eb1
- (id)metadata;	// 0x32230eb9
- (void)requestMetadata;	// 0x322311a9
- (void)requestThumbnail;	// 0x3223110d
- (CGImageRef)thumbnail;	// 0x32230eb5
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x322314bd
@end


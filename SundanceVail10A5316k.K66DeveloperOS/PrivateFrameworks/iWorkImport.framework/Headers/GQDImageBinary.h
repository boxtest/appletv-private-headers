/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GQDImageBinary : NSObject {
@private
	CGSize mSize;	// 4 = 0x4
	CFStringRef mPath;	// 12 = 0xc
	CFURLRef mAbsoluteUrl;	// 16 = 0x10
	int mResourceType;	// 20 = 0x14
}
- (id).cxx_construct;	// 0x36c49f2d
- (CFURLRef)absoluteUrlForState:(id)state;	// 0x36c49e49
- (void)dealloc;	// 0x36c49dd5
- (int)readDataAttributesFromReader:(xmlTextReader *)reader;	// 0x36c49f31
- (CFStringRef)relativePath;	// 0x36c49f1d
- (int)resourceType;	// 0x36c49f0d
- (CGSize)size;	// 0x36c49e31
@end


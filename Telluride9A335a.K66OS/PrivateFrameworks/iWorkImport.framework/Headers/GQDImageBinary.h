/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "iWorkImport-Structs.h"


__attribute__((visibility("hidden")))
@interface GQDImageBinary : NSObject {
@private
	CGSize mSize;	// 4 = 0x4
	CFStringRef mPath;	// 12 = 0xc
	CFURLRef mAbsoluteUrl;	// 16 = 0x10
	int mResourceType;	// 20 = 0x14
}
- (CFURLRef)absoluteUrlForState:(id)state;	// 0x3046b529
- (void)dealloc;	// 0x3046b635
- (int)readDataAttributesFromReader:(xmlTextReader *)reader;	// 0x3046b711
- (CFStringRef)relativePath;	// 0x3046b519
- (int)resourceType;	// 0x3046b509
- (CGSize)size;	// 0x3046b4f1
@end


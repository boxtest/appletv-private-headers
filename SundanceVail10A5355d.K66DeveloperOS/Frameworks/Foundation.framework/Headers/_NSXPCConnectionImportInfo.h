/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"

@class NSLock;

__attribute__((visibility("hidden")))
@interface _NSXPCConnectionImportInfo : NSObject {
	NSLock *_lock;	// 4 = 0x4
	CFDictionaryRef _map;	// 8 = 0x8
}
- (id)init;	// 0x34798d81
- (void)dealloc;	// 0x34798e05
- (BOOL)decrement:(unsigned long long)decrement;	// 0x34798f1d
- (void)finalize;	// 0x34798e65
- (void)increment:(unsigned long long)increment;	// 0x34798ea5
@end

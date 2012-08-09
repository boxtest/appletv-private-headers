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
@interface _NSXPCConnectionExportedObjectTable : NSObject {
	NSLock *_lock;	// 4 = 0x4
	CFDictionaryRef _proxyNumberToObject;	// 8 = 0x8
	CFDictionaryRef _objectToProxyNumber;	// 12 = 0xc
	unsigned long long _next;	// 16 = 0x10
}
- (id)init;	// 0x3479904d
- (void)dealloc;	// 0x34799139
- (id)exportedObjectForProxyNumber:(unsigned long long)proxyNumber;	// 0x34799299
- (void)finalize;	// 0x347991cd
- (id)interfaceForProxyNumber:(unsigned long long)proxyNumber;	// 0x34799391
- (unsigned long long)proxyNumberForExportedObject:(id)exportedObject interface:(id)interface;	// 0x34799411
- (void)releaseExportedObject:(unsigned long long)object;	// 0x34799519
- (void)setExportedObject:(id)object forProxyNumber:(unsigned long long)proxyNumber;	// 0x34799221
- (void)setInterface:(id)interface forProxyNumber:(unsigned long long)proxyNumber;	// 0x34799319
@end

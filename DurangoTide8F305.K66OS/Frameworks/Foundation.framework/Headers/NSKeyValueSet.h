/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueProxyCaching.h"
#import <NSSet.h> // Unknown library

@class NSString, NSObject, NSKeyValueNonmutatingSetMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueSet : NSSet <NSKeyValueProxyCaching> {
@private
	NSObject *_container;	// 4 = 0x4
	NSString *_key;	// 8 = 0x8
	NSKeyValueNonmutatingSetMethodSet *_methods;	// 12 = 0xc
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x327a6eb5
+ (id)_proxyShare;	// 0x327a70c1
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x327a6f4d
- (XXStruct_OzJQfB)_proxyLocator;	// 0x327a6ec1
- (void)_proxyNonGCFinalize;	// 0x327a6ee1
- (unsigned)count;	// 0x327a708d
- (void)dealloc;	// 0x327a6fed
- (id)member:(id)member;	// 0x327a7059
- (id)objectEnumerator;	// 0x327a7025
@end


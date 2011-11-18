/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSLocking.h"
#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library


@interface NSLock : NSObject <NSLocking> {
@private
	void *_priv;	// 4 = 0x4
}
@property(retain) id name;	// G=0x302d8fcd; S=0x3029e745; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x302560b1
- (id)init;	// 0x302560b9
- (void)dealloc;	// 0x3026b8a5
- (id)description;	// 0x302d8f05
- (void)finalize;	// 0x302d8dd5
- (void)lock;	// 0x3024fd25
- (BOOL)lockBeforeDate:(id)date;	// 0x30295b4d
// converted property getter: - (id)name;	// 0x302d8fcd
// converted property setter: - (void)setName:(id)name;	// 0x3029e745
- (BOOL)tryLock;	// 0x302d8ed9
- (void)unlock;	// 0x3024fda1
@end


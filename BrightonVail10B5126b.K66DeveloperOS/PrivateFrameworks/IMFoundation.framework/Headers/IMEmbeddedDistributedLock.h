/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import "IMDistributedLock.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface IMEmbeddedDistributedLock : IMDistributedLock {
	int _fd;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
}
@property(retain) NSString *name;	// G=0x341bd469; S=0x341bd36d; converted property
- (id)init;	// 0x341bd101
- (id)initWithName:(id)name;	// 0x341bd115
- (void)dealloc;	// 0x341bd1ed
- (void)lock;	// 0x341bd239
// converted property getter: - (id)name;	// 0x341bd469
// converted property setter: - (void)setName:(id)name;	// 0x341bd36d
- (BOOL)tryLock;	// 0x341bd2e1
- (void)unlock;	// 0x341bd2b9
@end


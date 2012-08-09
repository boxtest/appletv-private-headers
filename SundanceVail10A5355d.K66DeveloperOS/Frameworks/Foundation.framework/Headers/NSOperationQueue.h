/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSOperationQueue : NSObject {
	id _private;	// 4 = 0x4
	void *_reserved;	// 8 = 0x8
}
@property(assign) int maxConcurrentOperationCount;	// G=0x346cea89; S=0x3466ae69; converted property
@property(retain) id name;	// G=0x346cec05; S=0x346cec89; converted property
@property(assign) BOOL overcommitsOperations;	// G=0x346ceba5; S=0x346cebc9; converted property
@property(assign, getter=isSuspended) BOOL suspended;	// G=0x346ceb41; S=0x34683425; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x346ce075
+ (id)currentQueue;	// 0x34639469
+ (id)mainQueue;	// 0x346394bd
- (id)init;	// 0x34642f69
- (id)__;	// 0x346cf1ed
- (void)__:(id)_;	// 0x346cee7d
- (void)addOperation:(id)operation;	// 0x34645f71
- (void)addOperationWithBlock:(id)block;	// 0x346794e9
- (void)addOperations:(id)operations waitUntilFinished:(BOOL)finished;	// 0x346ce865
- (void)cancelAllOperations;	// 0x3467ad51
- (void)dealloc;	// 0x34681b3d
- (id)description;	// 0x346cee0d
// converted property getter: - (BOOL)isSuspended;	// 0x346ceb41
// converted property getter: - (int)maxConcurrentOperationCount;	// 0x346cea89
// converted property getter: - (id)name;	// 0x346cec05
- (unsigned)operationCount;	// 0x346cea41
- (id)operations;	// 0x3468310d
// converted property getter: - (BOOL)overcommitsOperations;	// 0x346ceba5
// converted property setter: - (void)setMaxConcurrentOperationCount:(int)count;	// 0x3466ae69
// converted property setter: - (void)setName:(id)name;	// 0x346cec89
// converted property setter: - (void)setOvercommitsOperations:(BOOL)operations;	// 0x346cebc9
// converted property setter: - (void)setSuspended:(BOOL)suspended;	// 0x34683425
- (void)waitUntilAllOperationsAreFinished;	// 0x34681e65
@end

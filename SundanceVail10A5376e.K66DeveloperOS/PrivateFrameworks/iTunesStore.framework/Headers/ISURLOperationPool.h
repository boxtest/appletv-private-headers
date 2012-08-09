/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library

@class ISOperationQueue;

@interface ISURLOperationPool : NSObject {
	ISOperationQueue *_operationQueue;	// 4 = 0x4
}
@property(retain, nonatomic) ISOperationQueue *operationQueue;	// G=0x30785b21; S=0x30785b31; @synthesize=_operationQueue
- (id)init;	// 0x307856f5
- (id)_poolOperationForOperation:(id)operation flags:(int)flags;	// 0x30785969
- (void)addOperation:(id)operation withFlags:(int)flags;	// 0x307857ad
- (void)cancelOperation:(id)operation;	// 0x3078585d
- (void)dealloc;	// 0x30785761
// declared property getter: - (id)operationQueue;	// 0x30785b21
// declared property setter: - (void)setOperationQueue:(id)queue;	// 0x30785b31
@end

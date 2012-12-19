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
@property(retain, nonatomic) ISOperationQueue *operationQueue;	// G=0x36a72899; S=0x36a728a9; @synthesize=_operationQueue
- (id)init;	// 0x36a7246d
- (id)_poolOperationForOperation:(id)operation flags:(int)flags;	// 0x36a726e1
- (void)addOperation:(id)operation withFlags:(int)flags;	// 0x36a72525
- (void)cancelOperation:(id)operation;	// 0x36a725d5
- (void)dealloc;	// 0x36a724d9
// declared property getter: - (id)operationQueue;	// 0x36a72899
// declared property setter: - (void)setOperationQueue:(id)queue;	// 0x36a728a9
@end

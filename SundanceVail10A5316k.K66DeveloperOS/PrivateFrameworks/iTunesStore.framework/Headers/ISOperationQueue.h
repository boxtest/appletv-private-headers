/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library

@class NSOperationQueue;

@interface ISOperationQueue : NSObject {
@private
	NSOperationQueue *_queue;	// 4 = 0x4
}
@property(assign) int maxConcurrentOperationCount;	// G=0x3351ec31; S=0x3351ec71; converted property
+ (id)mainQueue;	// 0x3351ea29
- (id)init;	// 0x3351e90d
- (void)addOperation:(id)operation;	// 0x3351ea95
- (void)addOperations:(id)operations waitUntilFinished:(BOOL)finished;	// 0x3351eaf1
- (void)cancelAllOperations;	// 0x3351ebf1
- (void)dealloc;	// 0x3351e9a9
// converted property getter: - (int)maxConcurrentOperationCount;	// 0x3351ec31
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x3351ecb1
- (int)operationCount;	// 0x3351ec11
- (id)operations;	// 0x3351ec51
// converted property setter: - (void)setMaxConcurrentOperationCount:(int)count;	// 0x3351ec71
- (void)setSuspended:(BOOL)suspended;	// 0x3351ec91
@end

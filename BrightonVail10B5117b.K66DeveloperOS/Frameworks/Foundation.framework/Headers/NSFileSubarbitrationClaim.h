/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSFileAccessClaim.h"

@class NSMutableSet, NSFileAccessNode, NSMutableDictionary, NSArray;

__attribute__((visibility("hidden")))
@interface NSFileSubarbitrationClaim : NSFileAccessClaim {
	NSArray *_readingURLs;	// 76 = 0x4c
	unsigned _readingOptions;	// 80 = 0x50
	NSArray *_writingURLs;	// 84 = 0x54
	unsigned _writingOptions;	// 88 = 0x58
	id _messageSender;	// 92 = 0x5c
	NSArray *_readingLocations;	// 96 = 0x60
	NSArray *_writingLocations;	// 100 = 0x64
	NSFileAccessNode *_rootNode;	// 104 = 0x68
	NSMutableSet *_forwardedClaimIDs;	// 108 = 0x6c
	NSMutableDictionary *_readRelinquishmentsByPresenterID;	// 112 = 0x70
	NSMutableDictionary *_writeRelinquishmentsByPresenterID;	// 116 = 0x74
}
@property(retain) id messageSender;	// G=0x31a83b91; S=0x31a83b4d; converted property
- (id)initWithClient:(id)client messageParameters:(id)parameters replySender:(id)sender;	// 0x31a83855
- (id)initWithReadingURLs:(id)readingURLs options:(unsigned)options writingURLs:(id)urls options:(unsigned)options4 claimer:(id)claimer;	// 0x31a837a9
- (void)dealloc;	// 0x31a83a71
- (void)devalueOldClaim:(id)claim;	// 0x31a84ddd
- (void)devalueSelf;	// 0x31a8540d
- (void)evaluateNewClaim:(id)claim;	// 0x31a84cc5
- (BOOL)evaluateSelfWithRootNode:(id)rootNode checkSubarbitrability:(BOOL)subarbitrability;	// 0x31a83e39
- (void)forwardReacquisitionMessageWithKind:(id)kind parameters:(id)parameters toPresenterForID:(id)anId;	// 0x31a8584d
- (void)forwardRelinquishmentMessageWithKind:(id)kind parameters:(id)parameters toPresenter:(id)presenter usingReplySender:(id)sender;	// 0x31a856d1
- (void)forwardUsingMessageSender:(id)sender crashHandler:(id)handler;	// 0x31a83bc9
- (void)granted;	// 0x31a84ebd
- (void)invokeClaimer;	// 0x31a852b5
- (BOOL)isBlockedByReadingItemAtLocation:(id)location options:(unsigned)options;	// 0x31a84eb5
- (BOOL)isBlockedByWritingItemAtLocation:(id)location options:(unsigned)options;	// 0x31a84eb9
- (void)itemAtLocation:(id)location wasReplacedByItemAtLocation:(id)location2;	// 0x31a855c1
// converted property getter: - (id)messageSender;	// 0x31a83b91
- (id)relinquishmentForMessageOfKind:(id)kind toPresenterForID:(id)anId;	// 0x31a855c5
- (void)revoked;	// 0x31a8533d
// converted property setter: - (void)setMessageSender:(id)sender;	// 0x31a83b4d
@end

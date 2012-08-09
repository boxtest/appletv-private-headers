/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSFileAccessClaim.h"

@class NSURL, NSFileAccessNode;

__attribute__((visibility("hidden")))
@interface NSFileReadingClaim : NSFileAccessClaim {
	NSURL *_url;	// 76 = 0x4c
	BOOL _urlDidChange;	// 80 = 0x50
	unsigned _options;	// 84 = 0x54
	NSFileAccessNode *_location;	// 88 = 0x58
	NSFileAccessNode *_rootNode;	// 92 = 0x5c
	int _linkResolutionCount;	// 96 = 0x60
}
- (id)initWithClient:(id)client messageParameters:(id)parameters replySender:(id)sender;	// 0x34e49415
- (id)initWithPurposeID:(id)purposeID url:(id)url options:(unsigned)options claimer:(id)claimer;	// 0x34e49395
- (BOOL)blocksClaim:(id)claim;	// 0x34e4a059
- (void)dealloc;	// 0x34e495f1
- (void)devalueSelf;	// 0x34e49f41
- (BOOL)evaluateSelfWithRootNode:(id)rootNode checkSubarbitrability:(BOOL)subarbitrability;	// 0x34e498ed
- (void)forwardUsingMessageSender:(id)sender crashHandler:(id)handler;	// 0x34e4963d
- (void)granted;	// 0x34e49a6d
- (void)invokeClaimer;	// 0x34e49c89
- (BOOL)isBlockedByReadingItemAtLocation:(id)location options:(unsigned)options;	// 0x34e49a09
- (BOOL)isBlockedByWritingItemAtLocation:(id)location options:(unsigned)options;	// 0x34e49a0d
- (void)itemAtLocation:(id)location wasReplacedByItemAtLocation:(id)location2;	// 0x34e4a005
@end

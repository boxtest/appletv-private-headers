/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSNumber, NSString;

@interface ASMovedItem : ASItem {
	NSString *_srcMsgId;	// 40 = 0x28
	NSNumber *_status;	// 44 = 0x2c
	NSString *_dstMsgId;	// 48 = 0x30
}
@property(retain) NSString *dstMsgId;	// G=0x322b2031; S=0x322b2069; converted property
@property(retain) NSString *srcMsgId;	// G=0x322b1f39; S=0x322b1f71; converted property
@property(retain) NSNumber *status;	// G=0x322b1fb5; S=0x322b1fed; converted property
+ (BOOL)acceptsTopLevelLeaves;	// 0x322b1ac1
+ (id)asParseRules;	// 0x322b1cdd
+ (BOOL)frontingBasicTypes;	// 0x322b1bbd
+ (BOOL)notifyOfUnknownTokens;	// 0x322b1c11
+ (BOOL)parsingLeafNode;	// 0x322b1b15
+ (BOOL)parsingWithSubItems;	// 0x322b1b69
- (void)dealloc;	// 0x322b1c65
// converted property getter: - (id)dstMsgId;	// 0x322b2031
// converted property setter: - (void)setDstMsgId:(id)anId;	// 0x322b2069
// converted property setter: - (void)setSrcMsgId:(id)anId;	// 0x322b1f71
// converted property setter: - (void)setStatus:(id)status;	// 0x322b1fed
// converted property getter: - (id)srcMsgId;	// 0x322b1f39
// converted property getter: - (id)status;	// 0x322b1fb5
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSNumber, NSMutableArray, NSString;

@interface ASResolveRecipientsSingleResponseItem : ASItem {
	NSString *_emailAddress;	// 40 = 0x28
	NSNumber *_easStatus;	// 44 = 0x2c
	NSMutableArray *_recipients;	// 48 = 0x30
}
@property(retain) NSNumber *easStatus;	// G=0x33a38ce1; @synthesize=_easStatus
@property(retain) NSString *emailAddress;	// G=0x33a38cbd; S=0x33a38cd1; @synthesize=_emailAddress
@property(retain) NSMutableArray *recipients;	// G=0x33a38d05; S=0x33a38d19; @synthesize=_recipients
+ (BOOL)acceptsTopLevelLeaves;	// 0x33a38669
+ (id)asParseRules;	// 0x33a38879
+ (BOOL)frontingBasicTypes;	// 0x33a38765
+ (BOOL)notifyOfUnknownTokens;	// 0x33a387b9
+ (BOOL)parsingLeafNode;	// 0x33a386bd
+ (BOOL)parsingWithSubItems;	// 0x33a38711
- (void)addRecipient:(id)recipient;	// 0x33a3880d
- (void)dealloc;	// 0x33a38c45
- (id)description;	// 0x33a38bb1
// declared property getter: - (id)easStatus;	// 0x33a38ce1
// declared property getter: - (id)emailAddress;	// 0x33a38cbd
// declared property getter: - (id)recipients;	// 0x33a38d05
- (void)setEASStatus:(id)status;	// 0x33a38cf5
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x33a38cd1
// declared property setter: - (void)setRecipients:(id)recipients;	// 0x33a38d19
@end

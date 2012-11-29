/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"
#import "ASParsingNotifyOfUnknownTokens.h"

@class NSDictionary, NSNumber;

@interface ASTopLevelErrorChecker : ASItem <ASParsingNotifyOfUnknownTokens> {
	NSNumber *_foundStatus;	// 40 = 0x28
	NSDictionary *_parseRules;	// 44 = 0x2c
}
@property(retain) NSNumber *foundStatus;	// G=0x336b3c21; S=0x336b3c35; @synthesize=_foundStatus
+ (BOOL)acceptsTopLevelLeaves;	// 0x336b389d
+ (BOOL)frontingBasicTypes;	// 0x336b3999
+ (BOOL)notifyOfUnknownTokens;	// 0x336b39ed
+ (BOOL)parsingLeafNode;	// 0x336b38f1
+ (BOOL)parsingWithSubItems;	// 0x336b3945
- (id)initWithCodePage:(int)codePage statusToken:(int)token;	// 0x336b3a41
- (id)asParseRules;	// 0x336b3bc5
- (void)dealloc;	// 0x336b3b61
// declared property getter: - (id)foundStatus;	// 0x336b3c21
// declared property setter: - (void)setFoundStatus:(id)status;	// 0x336b3c35
- (void)unknownToken:(int)token receivedForCodePage:(int)codePage;	// 0x336b3bd5
@end

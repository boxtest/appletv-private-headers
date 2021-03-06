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
@property(retain) NSNumber *foundStatus;	// G=0x33a34c21; S=0x33a34c35; @synthesize=_foundStatus
+ (BOOL)acceptsTopLevelLeaves;	// 0x33a3489d
+ (BOOL)frontingBasicTypes;	// 0x33a34999
+ (BOOL)notifyOfUnknownTokens;	// 0x33a349ed
+ (BOOL)parsingLeafNode;	// 0x33a348f1
+ (BOOL)parsingWithSubItems;	// 0x33a34945
- (id)initWithCodePage:(int)codePage statusToken:(int)token;	// 0x33a34a41
- (id)asParseRules;	// 0x33a34bc5
- (void)dealloc;	// 0x33a34b61
// declared property getter: - (id)foundStatus;	// 0x33a34c21
// declared property setter: - (void)setFoundStatus:(id)status;	// 0x33a34c35
- (void)unknownToken:(int)token receivedForCodePage:(int)codePage;	// 0x33a34bd5
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"
#import "ASParsingFrontingBasicType.h"
#import "ASParsingWithSubItems.h"

@class NSMutableArray, NSDictionary;

@interface ASArray : ASItem <ASParsingWithSubItems, ASParsingFrontingBasicType> {
	NSMutableArray *_items;	// 40 = 0x28
	NSDictionary *_subclassRuleSet;	// 44 = 0x2c
}
+ (BOOL)acceptsTopLevelLeaves;	// 0x32ee59d5
+ (BOOL)frontingBasicTypes;	// 0x32ee58fd
+ (BOOL)notifyOfUnknownTokens;	// 0x32ee58b5
+ (BOOL)parsingLeafNode;	// 0x32ee598d
+ (BOOL)parsingWithSubItems;	// 0x32ee5945
- (id)initWithSubclassRuleSet:(id)subclassRuleSet;	// 0x32ee5865
- (void)addItem:(id)item;	// 0x32ee57ad
- (id)asParseRules;	// 0x32ee5751
- (id)commonValue;	// 0x32ee5761
- (void)dealloc;	// 0x32ee5809
- (id)description;	// 0x32ee5a1d
@end

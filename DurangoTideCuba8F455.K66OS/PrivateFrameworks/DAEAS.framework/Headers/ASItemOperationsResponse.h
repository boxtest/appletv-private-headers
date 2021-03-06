/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSArray, NSNumber;

@interface ASItemOperationsResponse : ASItem {
	NSNumber *_status;	// 40 = 0x28
	NSArray *_fetchResponses;	// 44 = 0x2c
}
@property(retain) NSArray *fetchResponses;	// G=0x3434f06d; S=0x3434f439; converted property
@property(retain) NSNumber *status;	// G=0x3434f225; S=0x3434f255; converted property
+ (BOOL)acceptsTopLevelLeaves;	// 0x3434f595
+ (BOOL)frontingBasicTypes;	// 0x3434f4bd
+ (BOOL)notifyOfUnknownTokens;	// 0x3434f475
+ (BOOL)parsingLeafNode;	// 0x3434f54d
+ (BOOL)parsingWithSubItems;	// 0x3434f505
- (id)asParseRules;	// 0x3434f291
- (void)dealloc;	// 0x3434f5dd
- (id)description;	// 0x3434f72d
// converted property getter: - (id)fetchResponses;	// 0x3434f06d
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x3434f639
// converted property setter: - (void)setFetchResponses:(id)responses;	// 0x3434f439
// converted property setter: - (void)setStatus:(id)status;	// 0x3434f255
// converted property getter: - (id)status;	// 0x3434f225
@end


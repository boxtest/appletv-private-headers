/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "NSCopying.h"
#import "ASParsingLeafNode.h"
#import "DAEAS-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSDate;

@interface ASEventUID : NSObject <ASParsingLeafNode, NSCopying> {
	NSDate *_exceptionDate;	// 4 = 0x4
	NSString *_uidWithoutExceptionDate;	// 8 = 0x8
	BOOL _isOutlookCreatedUid;	// 12 = 0xc
}
@property(retain) NSDate *exceptionDate;	// G=0x339db635; S=0x339db66d; converted property
@property(readonly, retain) NSString *uidWithoutExceptionDate;	// G=0x339db5c5; converted property
+ (BOOL)acceptsTopLevelLeaves;	// 0x339da995
+ (BOOL)expectsContent;	// 0x339db79d
+ (BOOL)frontingBasicTypes;	// 0x339daa91
+ (BOOL)notifyOfUnknownTokens;	// 0x339daae5
+ (BOOL)parsingLeafNode;	// 0x339da9e9
+ (BOOL)parsingWithSubItems;	// 0x339daa3d
- (id)initWithASParseContext:(id)asparseContext root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 lengthUntilEndOfTerminator:(int)terminator;	// 0x339db319
- (id)initWithCalFrameworkString:(id)calFrameworkString;	// 0x339db149
- (id)_uidStringBySettingExceptionDateInOutlookUUIDString:(id)outlookUUIDString withTimeZone:(id)timeZone;	// 0x339daea1
- (id)copyWithZone:(NSZone *)zone;	// 0x339db0f9
- (void)dealloc;	// 0x339db095
- (id)description;	// 0x339dafe1
// converted property getter: - (id)exceptionDate;	// 0x339db635
- (int)parsingState;	// 0x339db4dd
- (id)recurrenceIDForResponseEmail;	// 0x339db59d
// converted property setter: - (void)setExceptionDate:(id)date;	// 0x339db66d
- (id)uidForActiveSyncWithTimeZone:(id)timeZone;	// 0x339db5fd
- (id)uidForCalFramework;	// 0x339db4e1
- (id)uidForResponseEmailWithTimeZone:(id)timeZone;	// 0x339db565
- (id)uidFromGlobalObjId:(id)globalObjId outIsOutlookCreatedUid:(BOOL *)uid;	// 0x339dab39
// converted property getter: - (id)uidWithoutExceptionDate;	// 0x339db5c5
@end

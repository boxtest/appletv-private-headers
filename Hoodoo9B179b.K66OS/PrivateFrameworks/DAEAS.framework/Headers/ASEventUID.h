/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "ASParsingLeafNode.h"
#import "DAEAS-Structs.h"

@class NSDate, NSString;

@interface ASEventUID : NSObject <ASParsingLeafNode, NSCopying> {
	NSDate *_exceptionDate;	// 4 = 0x4
	NSString *_uidWithoutExceptionDate;	// 8 = 0x8
	BOOL _isOutlookCreatedUid;	// 12 = 0xc
}
@property(retain) NSDate *exceptionDate;	// G=0x31db6d09; S=0x31db6d41; converted property
@property(readonly, retain) NSString *uidWithoutExceptionDate;	// G=0x31db6c95; converted property
+ (BOOL)acceptsTopLevelLeaves;	// 0x31db600d
+ (BOOL)expectsContent;	// 0x31db6e71
+ (BOOL)frontingBasicTypes;	// 0x31db6109
+ (BOOL)notifyOfUnknownTokens;	// 0x31db615d
+ (BOOL)parsingLeafNode;	// 0x31db6061
+ (BOOL)parsingWithSubItems;	// 0x31db60b5
- (id)initWithASParseContext:(id)asparseContext root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 lengthUntilEndOfTerminator:(int)terminator;	// 0x31db69b5
- (id)initWithCalFrameworkString:(id)calFrameworkString;	// 0x31db67cd
- (id)_uidStringBySettingExceptionDateInOutlookUUIDString:(id)outlookUUIDString withTimeZone:(id)timeZone;	// 0x31db6529
- (id)copyWithZone:(NSZone *)zone;	// 0x31db677d
- (void)dealloc;	// 0x31db671d
- (id)description;	// 0x31db6669
// converted property getter: - (id)exceptionDate;	// 0x31db6d09
- (int)parsingState;	// 0x31db6ba5
- (id)recurrenceIDForResponseEmail;	// 0x31db6c69
// converted property setter: - (void)setExceptionDate:(id)date;	// 0x31db6d41
- (id)uidForActiveSyncWithTimeZone:(id)timeZone;	// 0x31db6ccd
- (id)uidForCalFramework;	// 0x31db6ba9
- (id)uidForResponseEmailWithTimeZone:(id)timeZone;	// 0x31db6c2d
- (id)uidFromGlobalObjId:(id)globalObjId outIsOutlookCreatedUid:(BOOL *)uid;	// 0x31db61b1
// converted property getter: - (id)uidWithoutExceptionDate;	// 0x31db6c95
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"
#import "ASParsingAcceptingTopLevelLeaves.h"

@class NSString, NSMutableDictionary;

@interface ASAttendee : ASItem <ASParsingAcceptingTopLevelLeaves> {
	NSString *_name;	// 40 = 0x28
	NSString *_email;	// 44 = 0x2c
	int _status;	// 48 = 0x30
	int _role;	// 52 = 0x34
	int _localId;	// 56 = 0x38
	NSMutableDictionary *_placeHolder;	// 60 = 0x3c
}
@property(retain) NSString *email;	// G=0x321a30a9; S=0x321a30bd; @synthesize=_email
@property(assign) int localId;	// G=0x321a3121; S=0x321a3131; @synthesize=_localId
@property(retain) NSString *name;	// G=0x321a3071; S=0x321a3085; @synthesize=_name
@property(assign) int role;	// G=0x321a3101; S=0x321a3111; @synthesize=_role
@property(assign) int status;	// G=0x321a30e1; S=0x321a30f1; @synthesize=_status
+ (BOOL)acceptsTopLevelLeaves;	// 0x321a21cd
+ (BOOL)frontingBasicTypes;	// 0x321a22c9
+ (BOOL)notifyOfUnknownTokens;	// 0x321a231d
+ (BOOL)parsingLeafNode;	// 0x321a2221
+ (BOOL)parsingWithSubItems;	// 0x321a2275
- (id)init;	// 0x321a282d
- (id)initWithCalAttendee:(void *)calAttendee parentEvent:(id)event;	// 0x321a286d
- (id)initWithCoder:(id)coder;	// 0x321a29f5
- (void)appendActiveSyncDataForTask:(id)task toData:(id)data;	// 0x321a2cdd
- (void)applyPlaceHolder;	// 0x321a2371
- (id)asParseRules;	// 0x321a2651
- (void)clearPlaceHolder;	// 0x321a25b5
- (id)copyOfSelfWithoutLocalID;	// 0x321a2e71
- (void)dealloc;	// 0x321a2dfd
// declared property getter: - (id)email;	// 0x321a30a9
- (void)encodeWithCoder:(id)coder;	// 0x321a2b89
- (id)fullEmailString;	// 0x321a2db1
- (id)icsUserAddress;	// 0x321a2f29
// declared property getter: - (int)localId;	// 0x321a3121
// declared property getter: - (id)name;	// 0x321a3071
// declared property getter: - (int)role;	// 0x321a3101
- (void)saveToCalendarWithParentASEvent:(id)parentASEvent existingRecord:(void *)record shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge;	// 0x321a2655
// declared property setter: - (void)setEmail:(id)email;	// 0x321a30bd
// declared property setter: - (void)setLocalId:(int)anId;	// 0x321a3131
// declared property setter: - (void)setName:(id)name;	// 0x321a3085
- (void)setObject:(id)object forDCCPT:(int)dccpt;	// 0x321a25e1
// declared property setter: - (void)setRole:(int)role;	// 0x321a3111
// declared property setter: - (void)setStatus:(int)status;	// 0x321a30f1
// declared property getter: - (int)status;	// 0x321a30e1
@end


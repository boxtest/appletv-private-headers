/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASRecurrence.h"
#import "NSCoding.h"

@class NSNumber, NSDate, ASToDo;

@interface ASToDoRecurrence : ASRecurrence <NSCoding> {
	ASToDo *_parentToDo;	// 84 = 0x54
	NSDate *_startTime;	// 88 = 0x58
	NSNumber *_regenerate;	// 92 = 0x5c
	NSNumber *_deadOccur;	// 96 = 0x60
}
@property(retain) NSNumber *deadOccur;	// G=0x36c20d3d; S=0x36c20d51; @synthesize=_deadOccur
@property(retain) NSNumber *regenerate;	// G=0x36c20d19; S=0x36c20d2d; @synthesize=_regenerate
@property(retain) NSDate *startTime;	// G=0x36c20cf5; S=0x36c20d09; @synthesize=_startTime
+ (BOOL)acceptsTopLevelLeaves;	// 0x36c1f719
+ (id)asParseRules;	// 0x36c1faa5
+ (BOOL)frontingBasicTypes;	// 0x36c1f815
+ (BOOL)notifyOfUnknownTokens;	// 0x36c1f869
+ (BOOL)parsingLeafNode;	// 0x36c1f76d
+ (BOOL)parsingWithSubItems;	// 0x36c1f7c1
- (id)initWithCalRecurrence:(void *)calRecurrence parentToDo:(id)aDo;	// 0x36c1f8bd
- (id)initWithCoder:(id)coder;	// 0x36c20a75
- (BOOL)_requiresParentEvent;	// 0x36c201c5
- (id)_transformedUntilDateForActiveSync:(id)activeSync;	// 0x36c208ed
- (id)_untilDateForCalFrameworkWithParentStartDate:(id)parentStartDate;	// 0x36c207cd
- (void)appendActiveSyncDataForTask:(id)task toWBXMLData:(id)wbxmldata;	// 0x36c203c5
// declared property getter: - (id)deadOccur;	// 0x36c20d3d
- (void)dealloc;	// 0x36c209fd
- (void)encodeWithCoder:(id)coder;	// 0x36c20bc9
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x36c201c9
// declared property getter: - (id)regenerate;	// 0x36c20d19
- (void)saveToCalendarWithParentASToDo:(id)aDo existingRecord:(void *)record shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge;	// 0x36c1f9d1
// declared property setter: - (void)setDeadOccur:(id)occur;	// 0x36c20d51
// declared property setter: - (void)setRegenerate:(id)regenerate;	// 0x36c20d2d
// declared property setter: - (void)setStartTime:(id)time;	// 0x36c20d09
- (void)setStartTimeString:(id)string;	// 0x36c20755
- (void)setUntilString:(id)string;	// 0x36c20791
// declared property getter: - (id)startTime;	// 0x36c20cf5
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQPObjectReader.h"
#import "GQPObjectHandler.h"
#import <NSObject.h> // Unknown library

@class GQDSStylesheet, GQDSStyle;

__attribute__((visibility("hidden")))
@interface GQPStyleReader : NSObject <GQPObjectReader, GQPObjectHandler> {
@private
	int mStyleType;	// 4 = 0x4
	CFArrayRef mEntries;	// 8 = 0x8
	GQDSStylesheet *mStylesheet;	// 12 = 0xc
	int mCurrentProperty;	// 16 = 0x10
	BOOL mStyleIsIdentified;	// 20 = 0x14
	BOOL mStyleIdentiferEqualsParentIdentifier;	// 21 = 0x15
	char *mIdentifier;	// 24 = 0x18
	char *mUid;	// 28 = 0x1c
	char *mParentIdentifier;	// 32 = 0x20
	GQDSStyle *mStyle;	// 36 = 0x24
}
+ (void)initialize;	// 0x36c81a41
- (id)initWithStyleType:(int)styleType;	// 0x36c81a5d
- (BOOL)beginProperty:(const char *)property;	// 0x36c81fe9
- (int)beginReadingFromReader:(xmlTextReader *)reader processor:(id)processor;	// 0x36c81ba5
- (id)createStyle;	// 0x36c81f09
- (void)dealloc;	// 0x36c81ad1
- (void)doneProperty;	// 0x36c82025
- (int)doneReading:(id)reading;	// 0x36c81e0d
- (void)handleBoolValue:(BOOL)value;	// 0x36c8208d
- (void)handleDoubleValue:(double)value;	// 0x36c82129
- (void)handleFloatValue:(float)value;	// 0x36c820f5
- (void)handleIntValue:(int)value;	// 0x36c820c1
- (void)handleObject:(id)object;	// 0x36c81e99
@end


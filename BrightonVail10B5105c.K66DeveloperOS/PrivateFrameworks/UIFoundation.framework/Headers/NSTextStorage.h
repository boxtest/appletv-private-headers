/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "UIFoundation-Structs.h"
#import <NSMutableAttributedString.h> // Unknown library

@class NSMutableArray;

@interface NSTextStorage : NSMutableAttributedString {
	NSRange _editedRange;	// 4 = 0x4
	int _editedDelta;	// 12 = 0xc
	struct {
		unsigned editedMask : 8;
		unsigned  : 8;
		unsigned disabled : 16;
	} _flags;	// 16 = 0x10
	NSMutableArray *_layoutManagers;	// 20 = 0x14
	id _sideData;	// 24 = 0x18
}
@property(assign) id delegate;	// G=0x37581351; S=0x37581155; converted property
@property(readonly, assign) NSRange editedRange;	// G=0x375809f5; converted property
@property(readonly, retain) NSMutableArray *layoutManagers;	// G=0x375808d5; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x375803c9
- (id)init;	// 0x37580415
- (id)initWithCoder:(id)coder;	// 0x37580775
- (BOOL)_forceFixAttributes;	// 0x3758090d
- (BOOL)_isEditing;	// 0x375809d9
- (BOOL)_lockForReading;	// 0x375808e5
- (BOOL)_lockForWriting;	// 0x375808e9
- (BOOL)_lockForWritingWithExceptionHandler:(BOOL)exceptionHandler;	// 0x37580901
- (void)_notifyEdited:(unsigned)edited range:(NSRange)range changeInLength:(int)length invalidatedRange:(NSRange)range4;	// 0x37581069
- (NSRange)_rangeByEstimatingAttributeFixingForRange:(NSRange)range;	// 0x37580c7d
- (void)_setForceFixAttributes:(BOOL)attributes;	// 0x37580909
- (void)_unlock;	// 0x37580905
- (void)addLayoutManager:(id)manager;	// 0x37580815
- (void)beginEditing;	// 0x37580911
- (int)changeInLength;	// 0x37580a1d
- (Class)classForCoder;	// 0x375806c1
- (void)dealloc;	// 0x37580531
// converted property getter: - (id)delegate;	// 0x37581351
- (void)edited:(unsigned)edited range:(NSRange)range changeInLength:(int)length;	// 0x37580a2d
- (unsigned)editedMask;	// 0x37580a0d
// converted property getter: - (NSRange)editedRange;	// 0x375809f5
- (void)encodeWithCoder:(id)coder;	// 0x375806d1
- (void)endEditing;	// 0x37580941
- (void)ensureAttributesAreFixedInRange:(NSRange)range;	// 0x37580dc9
- (void)finalize;	// 0x3758066d
- (BOOL)fixesAttributesLazily;	// 0x37581065
- (void)fontSetChanged;	// 0x375810f5
- (void)invalidateAttributesInRange:(NSRange)range;	// 0x37580cc5
// converted property getter: - (id)layoutManagers;	// 0x375808d5
- (void)processEditing;	// 0x37580ba1
- (void)removeLayoutManager:(id)manager;	// 0x37580855
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x37581155
@end


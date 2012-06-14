/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString, SBJsonStreamWriterState, NSMutableArray;
@protocol SBJsonStreamWriterDelegate;

__attribute__((visibility("hidden")))
@interface SBJsonStreamWriter : NSObject {
@private
	NSString *error;	// 4 = 0x4
	NSMutableArray *stateStack;	// 8 = 0x8
	SBJsonStreamWriterState *state;	// 12 = 0xc
	id<SBJsonStreamWriterDelegate> delegate;	// 16 = 0x10
	unsigned maxDepth;	// 20 = 0x14
	BOOL sortKeys;	// 24 = 0x18
	BOOL humanReadable;	// 25 = 0x19
}
@property(assign) id<SBJsonStreamWriterDelegate> delegate;	// G=0x30502485; S=0x30502495; @synthesize
@property(copy) NSString *error;	// G=0x305023bd; S=0x305023d1; @synthesize
@property(assign) BOOL humanReadable;	// G=0x30502445; S=0x30502455; @synthesize
@property(assign) unsigned maxDepth;	// G=0x305023f5; S=0x30502405; @synthesize
@property(assign) BOOL sortKeys;	// G=0x30502465; S=0x30502475; @synthesize
@property(assign, nonatomic) SBJsonStreamWriterState *state;	// G=0x30502415; S=0x30502425; @synthesize
@property(readonly, assign, nonatomic) NSMutableArray *stateStack;	// G=0x30502435; @synthesize
+ (void)initialize;	// 0x30500f21
- (id)init;	// 0x30500fb9
- (void)appendBytes:(const void *)bytes length:(unsigned)length;	// 0x305010d9
- (void)dealloc;	// 0x30501065
// declared property getter: - (id)delegate;	// 0x30502485
// declared property getter: - (id)error;	// 0x305023bd
// declared property getter: - (BOOL)humanReadable;	// 0x30502445
// declared property getter: - (unsigned)maxDepth;	// 0x305023f5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30502495
// declared property setter: - (void)setError:(id)error;	// 0x305023d1
// declared property setter: - (void)setHumanReadable:(BOOL)readable;	// 0x30502455
// declared property setter: - (void)setMaxDepth:(unsigned)depth;	// 0x30502405
// declared property setter: - (void)setSortKeys:(BOOL)keys;	// 0x30502475
// declared property setter: - (void)setState:(id)state;	// 0x30502425
// declared property getter: - (BOOL)sortKeys;	// 0x30502465
// declared property getter: - (id)state;	// 0x30502415
// declared property getter: - (id)stateStack;	// 0x30502435
- (BOOL)writeArray:(id)array;	// 0x305012cd
- (BOOL)writeArrayClose;	// 0x30501799
- (BOOL)writeArrayOpen;	// 0x30501619
- (BOOL)writeBool:(BOOL)aBool;	// 0x30501989
- (BOOL)writeNull;	// 0x305018b1
- (BOOL)writeNumber:(id)number;	// 0x30502085
- (BOOL)writeObject:(id)object;	// 0x30501109
- (BOOL)writeObjectClose;	// 0x30501521
- (BOOL)writeObjectOpen;	// 0x305013a1
- (BOOL)writeString:(id)string;	// 0x30501c35
- (BOOL)writeValue:(id)value;	// 0x30501a79
@end

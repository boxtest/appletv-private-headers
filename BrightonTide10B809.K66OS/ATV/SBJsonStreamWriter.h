/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SBJsonStreamWriterState, NSString, NSMutableArray;
@protocol SBJsonStreamWriterDelegate;

@interface SBJsonStreamWriter : XXUnknownSuperclass {
	NSString *error;	// 4 = 0x4
	NSMutableArray *stateStack;	// 8 = 0x8
	SBJsonStreamWriterState *state;	// 12 = 0xc
	id<SBJsonStreamWriterDelegate> delegate;	// 16 = 0x10
	unsigned maxDepth;	// 20 = 0x14
	BOOL sortKeys;	// 24 = 0x18
	BOOL humanReadable;	// 25 = 0x19
}
@property(assign) id<SBJsonStreamWriterDelegate> delegate;	// G=0x4c0dc5; S=0x4c0dd9; @synthesize
@property(copy) NSString *error;	// G=0x4c0ce5; S=0x4c0cf9; @synthesize
@property(assign) BOOL humanReadable;	// G=0x4c0d65; S=0x4c0d7d; @synthesize
@property(assign) unsigned maxDepth;	// G=0x4c0d09; S=0x4c0d1d; @synthesize
@property(assign) BOOL sortKeys;	// G=0x4c0d95; S=0x4c0dad; @synthesize
@property(assign, nonatomic) SBJsonStreamWriterState *state;	// G=0x4c0d35; S=0x4c0d45; @synthesize
@property(readonly, assign, nonatomic) NSMutableArray *stateStack;	// G=0x4c0d55; @synthesize
+ (void)initialize;	// 0x4bf84d
- (id)init;	// 0x4bf8e5
- (void)appendBytes:(const void *)bytes length:(unsigned)length;	// 0x4bfa01
- (void)dealloc;	// 0x4bf98d
// declared property getter: - (id)delegate;	// 0x4c0dc5
// declared property getter: - (id)error;	// 0x4c0ce5
// declared property getter: - (BOOL)humanReadable;	// 0x4c0d65
// declared property getter: - (unsigned)maxDepth;	// 0x4c0d09
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x4c0dd9
// declared property setter: - (void)setError:(id)error;	// 0x4c0cf9
// declared property setter: - (void)setHumanReadable:(BOOL)readable;	// 0x4c0d7d
// declared property setter: - (void)setMaxDepth:(unsigned)depth;	// 0x4c0d1d
// declared property setter: - (void)setSortKeys:(BOOL)keys;	// 0x4c0dad
// declared property setter: - (void)setState:(id)state;	// 0x4c0d45
// declared property getter: - (BOOL)sortKeys;	// 0x4c0d95
// declared property getter: - (id)state;	// 0x4c0d35
// declared property getter: - (id)stateStack;	// 0x4c0d55
- (BOOL)writeArray:(id)array;	// 0x4bfc2d
- (BOOL)writeArrayClose;	// 0x4c00f1
- (BOOL)writeArrayOpen;	// 0x4bff7d
- (BOOL)writeBool:(BOOL)aBool;	// 0x4c02c9
- (BOOL)writeNull;	// 0x4c01f9
- (BOOL)writeNumber:(id)number;	// 0x4c09b9
- (BOOL)writeObject:(id)object;	// 0x4bfa31
- (BOOL)writeObjectClose;	// 0x4bfe91
- (BOOL)writeObjectOpen;	// 0x4bfd1d
- (BOOL)writeString:(id)string;	// 0x4c0565
- (BOOL)writeValue:(id)value;	// 0x4c03b1
@end

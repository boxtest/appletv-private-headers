/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "NSMutableCopying.h"
#import "NSCoding.h"

@class AVVideoCompositionInstructionInternal, NSArray;

@interface AVVideoCompositionInstruction : NSObject <NSCoding, NSCopying, NSMutableCopying> {
	AVVideoCompositionInstructionInternal *_instruction;	// 4 = 0x4
}
@property(retain, nonatomic) CGColorRef backgroundColor;	// G=0x31776811; S=0x31776831; 
@property(readonly, assign, nonatomic) BOOL enablePostProcessing;	// G=0x317768f9; 
@property(readonly, assign, nonatomic) NSArray *layerInstructions;	// G=0x3177687d; 
@property(readonly, assign, nonatomic) XXStruct_yD8eWC timeRange;	// G=0x31776759; 
+ (void)initialize;	// 0x31776189
- (id)init;	// 0x317761c9
- (id)initWithCoder:(id)coder;	// 0x317762b9
- (void)_setValuesFromDictionary:(id)dictionary;	// 0x31776cb5
// declared property getter: - (CGColorRef)backgroundColor;	// 0x31776811
- (id)copyWithZone:(NSZone *)zone;	// 0x317763a9
- (void)dealloc;	// 0x31776679
- (id)description;	// 0x317770bd
- (id)dictionaryRepresentation;	// 0x31776939
// declared property getter: - (BOOL)enablePostProcessing;	// 0x317768f9
- (void)encodeWithCoder:(id)coder;	// 0x31776371
- (void)finalize;	// 0x317766fd
// declared property getter: - (id)layerInstructions;	// 0x3177687d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x31776531
// declared property setter: - (void)setBackgroundColor:(CGColorRef)color;	// 0x31776831
- (void)setEnablePostProcessing:(BOOL)processing;	// 0x31776919
- (void)setLayerInstructions:(id)instructions;	// 0x3177689d
- (void)setTimeRange:(XXStruct_yD8eWC)range;	// 0x317767b5
// declared property getter: - (XXStruct_yD8eWC)timeRange;	// 0x31776759
@end


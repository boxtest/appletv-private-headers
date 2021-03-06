/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray;

@interface LBSGAddress : PBCodable {
	NSMutableArray *_formattedAddressLines;	// 4 = 0x4
	NSMutableArray *_components;	// 8 = 0x8
}
@property(retain, nonatomic) NSMutableArray *components;	// G=0x3385b57d; S=0x3385b58d; @synthesize=_components
@property(retain, nonatomic) NSMutableArray *formattedAddressLines;	// G=0x3385b549; S=0x3385b559; @synthesize=_formattedAddressLines
- (void)addComponent:(id)component;	// 0x3385b065
- (void)addFormattedAddressLine:(id)line;	// 0x3385afc1
- (id)componentAtIndex:(unsigned)index;	// 0x3385b0e9
// declared property getter: - (id)components;	// 0x3385b57d
- (unsigned)componentsCount;	// 0x3385b0c9
- (void)dealloc;	// 0x3385af69
- (id)description;	// 0x3385b109
- (id)dictionaryRepresentation;	// 0x3385b179
- (id)formattedAddressLineAtIndex:(unsigned)index;	// 0x3385b045
// declared property getter: - (id)formattedAddressLines;	// 0x3385b549
- (unsigned)formattedAddressLinesCount;	// 0x3385b025
- (BOOL)readFrom:(id)from;	// 0x3385b1f9
// declared property setter: - (void)setComponents:(id)components;	// 0x3385b58d
// declared property setter: - (void)setFormattedAddressLines:(id)lines;	// 0x3385b559
- (void)writeTo:(id)to;	// 0x3385b399
@end


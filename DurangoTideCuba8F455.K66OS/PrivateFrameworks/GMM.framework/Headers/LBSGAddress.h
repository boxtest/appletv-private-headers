/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface LBSGAddress : PBCodable {
@private
	NSMutableArray *_formattedAddressLines;	// 4 = 0x4
	NSMutableArray *_components;	// 8 = 0x8
}
@property(retain, nonatomic) NSMutableArray *components;	// G=0x34453e91; S=0x34454635; @synthesize=_components
@property(readonly, assign, nonatomic) int componentsCount;	// G=0x3445446d; 
@property(retain, nonatomic) NSMutableArray *formattedAddressLines;	// G=0x34453ea1; S=0x3445460d; @synthesize=_formattedAddressLines
@property(readonly, assign, nonatomic) int formattedAddressLinesCount;	// G=0x3445458d; 
- (id)init;	// 0x34453eb1
- (void)addComponent:(id)component;	// 0x34454371
- (void)addFormattedAddressLine:(id)line;	// 0x34454491
- (id)componentAtIndex:(unsigned)index;	// 0x344543a1
// declared property getter: - (id)components;	// 0x34453e91
// declared property getter: - (int)componentsCount;	// 0x3445446d
- (void)dealloc;	// 0x344545b1
- (id)description;	// 0x34453f4d
- (id)dictionaryRepresentation;	// 0x34453edd
- (id)formattedAddressLineAtIndex:(unsigned)index;	// 0x344544c1
// declared property getter: - (id)formattedAddressLines;	// 0x34453ea1
// declared property getter: - (int)formattedAddressLinesCount;	// 0x3445458d
- (BOOL)readFrom:(id)from;	// 0x344541a5
- (void)setComponent:(id)component atIndex:(unsigned)index;	// 0x34454405
// declared property setter: - (void)setComponents:(id)components;	// 0x34454635
- (void)setFormattedAddressLine:(id)line atIndex:(unsigned)index;	// 0x34454525
// declared property setter: - (void)setFormattedAddressLines:(id)lines;	// 0x3445460d
- (void)writeTo:(id)to;	// 0x34454031
@end


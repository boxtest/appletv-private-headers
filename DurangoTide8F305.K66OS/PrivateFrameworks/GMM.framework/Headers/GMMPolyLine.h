/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSData;

__attribute__((visibility("hidden")))
@interface GMMPolyLine : PBCodable {
@private
	int _lineWidth;	// 4 = 0x4
	BOOL _hasLineWidth;	// 8 = 0x8
	int _lineColor;	// 12 = 0xc
	BOOL _hasLineColor;	// 16 = 0x10
	NSData *_line;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) BOOL hasLine;	// G=0x32b91381; 
@property(readonly, assign, nonatomic) BOOL hasLineColor;	// G=0x32b913a5; @synthesize=_hasLineColor
@property(readonly, assign, nonatomic) BOOL hasLineWidth;	// G=0x32b913c5; @synthesize=_hasLineWidth
@property(retain, nonatomic) NSData *line;	// G=0x32b91395; S=0x32b91825; @synthesize=_line
@property(assign, nonatomic) int lineColor;	// G=0x32b913b5; S=0x32b91365; @synthesize=_lineColor
@property(assign, nonatomic) int lineWidth;	// G=0x32b913d5; S=0x32b91349; @synthesize=_lineWidth
- (id)init;	// 0x32b913e5
- (void)dealloc;	// 0x32b917dd
- (id)description;	// 0x32b914f9
- (id)dictionaryRepresentation;	// 0x32b91411
// declared property getter: - (BOOL)hasLine;	// 0x32b91381
// declared property getter: - (BOOL)hasLineColor;	// 0x32b913a5
// declared property getter: - (BOOL)hasLineWidth;	// 0x32b913c5
// declared property getter: - (id)line;	// 0x32b91395
// declared property getter: - (int)lineColor;	// 0x32b913b5
// declared property getter: - (int)lineWidth;	// 0x32b913d5
- (BOOL)readFrom:(id)from;	// 0x32b916b5
// declared property setter: - (void)setLine:(id)line;	// 0x32b91825
// declared property setter: - (void)setLineColor:(int)color;	// 0x32b91365
// declared property setter: - (void)setLineWidth:(int)width;	// 0x32b91349
- (void)writeTo:(id)to;	// 0x32b91611
@end

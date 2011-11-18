/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray;

@interface GMMAnnotationProperties : PBCodable {
	BOOL _hasHorizonHeightFractionE6;	// 4 = 0x4
	int _horizonHeightFractionE6;	// 8 = 0x8
	BOOL _hasAnnotationHeightFractionE6;	// 12 = 0xc
	int _annotationHeightFractionE6;	// 16 = 0x10
	NSMutableArray *_links;	// 20 = 0x14
}
@property(assign, nonatomic) int annotationHeightFractionE6;	// G=0x31579b55; S=0x31579b81; @synthesize=_annotationHeightFractionE6
@property(assign, nonatomic) BOOL hasAnnotationHeightFractionE6;	// G=0x3157a079; S=0x3157a089; @synthesize=_hasAnnotationHeightFractionE6
@property(assign, nonatomic) BOOL hasHorizonHeightFractionE6;	// G=0x3157a059; S=0x3157a069; @synthesize=_hasHorizonHeightFractionE6
@property(assign, nonatomic) int horizonHeightFractionE6;	// G=0x31579b05; S=0x31579b31; @synthesize=_horizonHeightFractionE6
@property(retain, nonatomic) NSMutableArray *links;	// G=0x3157a099; S=0x3157a0a9; @synthesize=_links
- (void)addLink:(id)link;	// 0x31579ba5
// declared property getter: - (int)annotationHeightFractionE6;	// 0x31579b55
- (void)dealloc;	// 0x31579ac1
- (id)description;	// 0x31579c49
- (id)dictionaryRepresentation;	// 0x31579cb9
// declared property getter: - (BOOL)hasAnnotationHeightFractionE6;	// 0x3157a079
// declared property getter: - (BOOL)hasHorizonHeightFractionE6;	// 0x3157a059
// declared property getter: - (int)horizonHeightFractionE6;	// 0x31579b05
- (id)linkAtIndex:(unsigned)index;	// 0x31579c29
// declared property getter: - (id)links;	// 0x3157a099
- (unsigned)linksCount;	// 0x31579c09
- (BOOL)readFrom:(id)from;	// 0x31579dbd
// declared property setter: - (void)setAnnotationHeightFractionE6:(int)a6;	// 0x31579b81
// declared property setter: - (void)setHasAnnotationHeightFractionE6:(BOOL)a6;	// 0x3157a089
// declared property setter: - (void)setHasHorizonHeightFractionE6:(BOOL)a6;	// 0x3157a069
// declared property setter: - (void)setHorizonHeightFractionE6:(int)a6;	// 0x31579b31
// declared property setter: - (void)setLinks:(id)links;	// 0x3157a0a9
- (void)writeTo:(id)to;	// 0x31579f21
@end


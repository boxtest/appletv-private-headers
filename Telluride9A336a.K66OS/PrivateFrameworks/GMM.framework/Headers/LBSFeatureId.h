/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library


@interface LBSFeatureId : PBCodable {
	unsigned long long _cellId;	// 4 = 0x4
	unsigned long long _fprint;	// 12 = 0xc
}
@property(assign, nonatomic) unsigned long long cellId;	// G=0x3385af11; S=0x3385af29; @synthesize=_cellId
@property(assign, nonatomic) unsigned long long fprint;	// G=0x3385af3d; S=0x3385af55; @synthesize=_fprint
// declared property getter: - (unsigned long long)cellId;	// 0x3385af11
- (void)dealloc;	// 0x3385ac75
- (id)description;	// 0x3385aca1
- (id)dictionaryRepresentation;	// 0x3385ad11
// declared property getter: - (unsigned long long)fprint;	// 0x3385af3d
- (BOOL)readFrom:(id)from;	// 0x3385adc5
// declared property setter: - (void)setCellId:(unsigned long long)anId;	// 0x3385af29
// declared property setter: - (void)setFprint:(unsigned long long)fprint;	// 0x3385af55
- (void)writeTo:(id)to;	// 0x3385aebd
@end


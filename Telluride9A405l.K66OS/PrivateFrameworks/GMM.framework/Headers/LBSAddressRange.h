/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import "GMM-Structs.h"
#import <PBCodable.h> // Unknown library

@class NSString;

@interface LBSAddressRange : PBCodable {
	XXStruct_WmZAAA _numbers;	// 4 = 0x4
	struct {
		float *list;
		unsigned count;
		unsigned size;
	} _parameters;	// 16 = 0x10
	BOOL _hasParameterIsSynthesized;	// 28 = 0x1c
	BOOL _parameterIsSynthesized;	// 29 = 0x1d
	BOOL _hasSameParity;	// 30 = 0x1e
	BOOL _sameParity;	// 31 = 0x1f
	NSString *_prefix;	// 32 = 0x20
	NSString *_suffix;	// 36 = 0x24
}
@property(assign, nonatomic) BOOL hasParameterIsSynthesized;	// G=0x31597bcd; S=0x31597bdd; @synthesize=_hasParameterIsSynthesized
@property(readonly, assign, nonatomic) BOOL hasPrefix;	// G=0x31597621; 
@property(assign, nonatomic) BOOL hasSameParity;	// G=0x31597bed; S=0x31597bfd; @synthesize=_hasSameParity
@property(readonly, assign, nonatomic) BOOL hasSuffix;	// G=0x31597639; 
@property(readonly, assign, nonatomic) int *numbers;	// G=0x31597395; 
@property(readonly, assign, nonatomic) unsigned numbersCount;	// G=0x31597381; 
@property(assign, nonatomic) BOOL parameterIsSynthesized;	// G=0x31597591; S=0x315975b5; @synthesize=_parameterIsSynthesized
@property(readonly, assign, nonatomic) float *parameters;	// G=0x3159749d; 
@property(readonly, assign, nonatomic) unsigned parametersCount;	// G=0x31597489; 
@property(retain, nonatomic) NSString *prefix;	// G=0x31597c0d; S=0x31597c1d; @synthesize=_prefix
@property(assign, nonatomic) BOOL sameParity;	// G=0x315975d9; S=0x315975fd; @synthesize=_sameParity
@property(retain, nonatomic) NSString *suffix;	// G=0x31597c41; S=0x31597c51; @synthesize=_suffix
- (void)addNumber:(int)number;	// 0x315973b9
- (void)addParameter:(float)parameter;	// 0x315974c1
- (void)clearNumbers;	// 0x315973a5
- (void)clearParameters;	// 0x315974ad
- (void)dealloc;	// 0x31597305
- (id)description;	// 0x31597651
- (id)dictionaryRepresentation;	// 0x315976c1
// declared property getter: - (BOOL)hasParameterIsSynthesized;	// 0x31597bcd
// declared property getter: - (BOOL)hasPrefix;	// 0x31597621
// declared property getter: - (BOOL)hasSameParity;	// 0x31597bed
// declared property getter: - (BOOL)hasSuffix;	// 0x31597639
- (int)numberAtIndex:(unsigned)index;	// 0x315973cd
// declared property getter: - (int *)numbers;	// 0x31597395
// declared property getter: - (unsigned)numbersCount;	// 0x31597381
- (float)parameterAtIndex:(unsigned)index;	// 0x315974d5
// declared property getter: - (BOOL)parameterIsSynthesized;	// 0x31597591
// declared property getter: - (float *)parameters;	// 0x3159749d
// declared property getter: - (unsigned)parametersCount;	// 0x31597489
// declared property getter: - (id)prefix;	// 0x31597c0d
- (BOOL)readFrom:(id)from;	// 0x31597821
// declared property getter: - (BOOL)sameParity;	// 0x315975d9
// declared property setter: - (void)setHasParameterIsSynthesized:(BOOL)synthesized;	// 0x31597bdd
// declared property setter: - (void)setHasSameParity:(BOOL)parity;	// 0x31597bfd
- (void)setNumbers:(int *)numbers count:(unsigned)count;	// 0x31597471
// declared property setter: - (void)setParameterIsSynthesized:(BOOL)synthesized;	// 0x315975b5
- (void)setParameters:(float *)parameters count:(unsigned)count;	// 0x31597579
// declared property setter: - (void)setPrefix:(id)prefix;	// 0x31597c1d
// declared property setter: - (void)setSameParity:(BOOL)parity;	// 0x315975fd
// declared property setter: - (void)setSuffix:(id)suffix;	// 0x31597c51
// declared property getter: - (id)suffix;	// 0x31597c41
- (void)writeTo:(id)to;	// 0x31597a8d
@end


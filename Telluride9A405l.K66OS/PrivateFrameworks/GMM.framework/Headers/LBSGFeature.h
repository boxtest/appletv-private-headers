/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class LBSGLatLng, NSString, LBSGAddress, LBSGRectangle;

@interface LBSGFeature : PBCodable {
	NSString *_name;	// 4 = 0x4
	int _featureType;	// 8 = 0x8
	LBSGAddress *_address;	// 12 = 0xc
	LBSGRectangle *_bounds;	// 16 = 0x10
	LBSGLatLng *_center;	// 20 = 0x14
}
@property(retain, nonatomic) LBSGAddress *address;	// G=0x31599ff1; S=0x3159a001; @synthesize=_address
@property(retain, nonatomic) LBSGRectangle *bounds;	// G=0x3159a025; S=0x3159a035; @synthesize=_bounds
@property(retain, nonatomic) LBSGLatLng *center;	// G=0x3159a059; S=0x3159a069; @synthesize=_center
@property(assign, nonatomic) int featureType;	// G=0x31599fd1; S=0x31599fe1; @synthesize=_featureType
@property(readonly, assign, nonatomic) BOOL hasBounds;	// G=0x3159992d; 
@property(readonly, assign, nonatomic) BOOL hasCenter;	// G=0x31599945; 
@property(retain, nonatomic) NSString *name;	// G=0x31599f9d; S=0x31599fad; @synthesize=_name
// declared property getter: - (id)address;	// 0x31599ff1
// declared property getter: - (id)bounds;	// 0x3159a025
// declared property getter: - (id)center;	// 0x3159a059
- (void)dealloc;	// 0x315998ad
- (id)description;	// 0x3159995d
- (id)dictionaryRepresentation;	// 0x315999cd
// declared property getter: - (int)featureType;	// 0x31599fd1
// declared property getter: - (BOOL)hasBounds;	// 0x3159992d
// declared property getter: - (BOOL)hasCenter;	// 0x31599945
// declared property getter: - (id)name;	// 0x31599f9d
- (BOOL)readFrom:(id)from;	// 0x31599ad1
// declared property setter: - (void)setAddress:(id)address;	// 0x3159a001
// declared property setter: - (void)setBounds:(id)bounds;	// 0x3159a035
// declared property setter: - (void)setCenter:(id)center;	// 0x3159a069
// declared property setter: - (void)setFeatureType:(int)type;	// 0x31599fe1
// declared property setter: - (void)setName:(id)name;	// 0x31599fad
- (void)writeTo:(id)to;	// 0x31599db9
@end


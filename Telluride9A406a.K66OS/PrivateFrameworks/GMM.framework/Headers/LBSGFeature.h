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
@property(retain, nonatomic) LBSGAddress *address;	// G=0x33aa1ff1; S=0x33aa2001; @synthesize=_address
@property(retain, nonatomic) LBSGRectangle *bounds;	// G=0x33aa2025; S=0x33aa2035; @synthesize=_bounds
@property(retain, nonatomic) LBSGLatLng *center;	// G=0x33aa2059; S=0x33aa2069; @synthesize=_center
@property(assign, nonatomic) int featureType;	// G=0x33aa1fd1; S=0x33aa1fe1; @synthesize=_featureType
@property(readonly, assign, nonatomic) BOOL hasBounds;	// G=0x33aa192d; 
@property(readonly, assign, nonatomic) BOOL hasCenter;	// G=0x33aa1945; 
@property(retain, nonatomic) NSString *name;	// G=0x33aa1f9d; S=0x33aa1fad; @synthesize=_name
// declared property getter: - (id)address;	// 0x33aa1ff1
// declared property getter: - (id)bounds;	// 0x33aa2025
// declared property getter: - (id)center;	// 0x33aa2059
- (void)dealloc;	// 0x33aa18ad
- (id)description;	// 0x33aa195d
- (id)dictionaryRepresentation;	// 0x33aa19cd
// declared property getter: - (int)featureType;	// 0x33aa1fd1
// declared property getter: - (BOOL)hasBounds;	// 0x33aa192d
// declared property getter: - (BOOL)hasCenter;	// 0x33aa1945
// declared property getter: - (id)name;	// 0x33aa1f9d
- (BOOL)readFrom:(id)from;	// 0x33aa1ad1
// declared property setter: - (void)setAddress:(id)address;	// 0x33aa2001
// declared property setter: - (void)setBounds:(id)bounds;	// 0x33aa2035
// declared property setter: - (void)setCenter:(id)center;	// 0x33aa2069
// declared property setter: - (void)setFeatureType:(int)type;	// 0x33aa1fe1
// declared property setter: - (void)setName:(id)name;	// 0x33aa1fad
- (void)writeTo:(id)to;	// 0x33aa1db9
@end

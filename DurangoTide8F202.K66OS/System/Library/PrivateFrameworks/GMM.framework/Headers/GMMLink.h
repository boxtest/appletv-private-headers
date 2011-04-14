/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSString;

@interface GMMLink : PBCodable {
@private
	int _roadArgb;	// 4 = 0x4
	BOOL _hasRoadArgb;	// 8 = 0x8
	NSString *_linkText;	// 12 = 0xc
	NSString *_linkStreetRange;	// 16 = 0x10
	NSString *_panoId;	// 20 = 0x14
	int _yawDegreeE6;	// 24 = 0x18
	BOOL _hasYawDegreeE6;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) BOOL hasLinkStreetRange;	// G=0x30a6132d; 
@property(readonly, assign, nonatomic) BOOL hasLinkText;	// G=0x30a61319; 
@property(readonly, assign, nonatomic) BOOL hasRoadArgb;	// G=0x30a613ad; @synthesize=_hasRoadArgb
@property(readonly, assign, nonatomic) BOOL hasYawDegreeE6;	// G=0x30a6135d; @synthesize=_hasYawDegreeE6
@property(retain, nonatomic) NSString *linkStreetRange;	// G=0x30a6138d; S=0x30a619c1; @synthesize=_linkStreetRange
@property(retain, nonatomic) NSString *linkText;	// G=0x30a6139d; S=0x30a61999; @synthesize=_linkText
@property(retain, nonatomic) NSString *panoId;	// G=0x30a6137d; S=0x30a619e9; @synthesize=_panoId
@property(assign, nonatomic) int roadArgb;	// G=0x30a613bd; S=0x30a612fd; @synthesize=_roadArgb
@property(assign, nonatomic) int yawDegreeE6;	// G=0x30a6136d; S=0x30a61341; @synthesize=_yawDegreeE6
- (id)init;	// 0x30a61941
- (void)dealloc;	// 0x30a618d5
- (id)description;	// 0x30a614f5
- (id)dictionaryRepresentation;	// 0x30a613cd
// declared property getter: - (BOOL)hasLinkStreetRange;	// 0x30a6132d
// declared property getter: - (BOOL)hasLinkText;	// 0x30a61319
// declared property getter: - (BOOL)hasRoadArgb;	// 0x30a613ad
// declared property getter: - (BOOL)hasYawDegreeE6;	// 0x30a6135d
// declared property getter: - (id)linkStreetRange;	// 0x30a6138d
// declared property getter: - (id)linkText;	// 0x30a6139d
// declared property getter: - (id)panoId;	// 0x30a6137d
- (BOOL)readFrom:(id)from;	// 0x30a61771
// declared property getter: - (int)roadArgb;	// 0x30a613bd
// declared property setter: - (void)setLinkStreetRange:(id)range;	// 0x30a619c1
// declared property setter: - (void)setLinkText:(id)text;	// 0x30a61999
// declared property setter: - (void)setPanoId:(id)anId;	// 0x30a619e9
// declared property setter: - (void)setRoadArgb:(int)argb;	// 0x30a612fd
// declared property setter: - (void)setYawDegreeE6:(int)a6;	// 0x30a61341
- (void)writeTo:(id)to;	// 0x30a61671
// declared property getter: - (int)yawDegreeE6;	// 0x30a6136d
@end

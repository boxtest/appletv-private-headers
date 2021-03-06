/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class GMMMapPoint, NSString;

@interface GMMPanoramaVisited : PBCodable {
	NSString *_panoId;	// 4 = 0x4
	GMMMapPoint *_latLon;	// 8 = 0x8
}
@property(retain, nonatomic) GMMMapPoint *latLon;	// G=0x3383f371; S=0x3383f381; @synthesize=_latLon
@property(retain, nonatomic) NSString *panoId;	// G=0x3383f33d; S=0x3383f34d; @synthesize=_panoId
- (void)dealloc;	// 0x3383ef9d
- (id)description;	// 0x3383eff5
- (id)dictionaryRepresentation;	// 0x3383f065
// declared property getter: - (id)latLon;	// 0x3383f371
// declared property getter: - (id)panoId;	// 0x3383f33d
- (BOOL)readFrom:(id)from;	// 0x3383f0e5
// declared property setter: - (void)setLatLon:(id)lon;	// 0x3383f381
// declared property setter: - (void)setPanoId:(id)anId;	// 0x3383f34d
- (void)writeTo:(id)to;	// 0x3383f285
@end


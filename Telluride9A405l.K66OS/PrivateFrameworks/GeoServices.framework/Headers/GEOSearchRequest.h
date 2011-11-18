/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import "GEOPlaceSearchRequest.h"


@interface GEOSearchRequest : GEOPlaceSearchRequest {
	int _type;	// 140 = 0x8c
	int _zoomLevel;	// 144 = 0x90
	unsigned short _provider;	// 148 = 0x94
}
@property(assign, nonatomic) unsigned short provider;	// G=0x3144f27d; S=0x3144f28d; @synthesize=_provider
@property(assign, nonatomic) int type;	// G=0x3144f23d; S=0x3144f24d; @synthesize=_type
@property(assign, nonatomic) int zoomLevel;	// G=0x3144f25d; S=0x3144f26d; @synthesize=_zoomLevel
- (id)init;	// 0x3144f1d9
// declared property getter: - (unsigned short)provider;	// 0x3144f27d
- (Class)responseClass;	// 0x3144f221
// declared property setter: - (void)setProvider:(unsigned short)provider;	// 0x3144f28d
// declared property setter: - (void)setType:(int)type;	// 0x3144f24d
// declared property setter: - (void)setZoomLevel:(int)level;	// 0x3144f26d
// declared property getter: - (int)type;	// 0x3144f23d
// declared property getter: - (int)zoomLevel;	// 0x3144f25d
@end


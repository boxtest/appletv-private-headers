/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GeoServices-Structs.h"

@class NSURL, GEOTileKeyList;

__attribute__((visibility("hidden")))
@interface _GEOVoltaireMultiTileInfo : NSObject {
	GEOTileKeyList *_keys;	// 4 = 0x4
	NSURL *_url;	// 8 = 0x8
	BOOL _useStatusCodes;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) GEOTileKeyList *keys;	// G=0x33fa5fd9; @synthesize=_keys
@property(readonly, assign, nonatomic) NSURL *url;	// G=0x33fa5fe9; @synthesize=_url
@property(readonly, assign, nonatomic) BOOL useStatusCodes;	// G=0x33fa5fc9; @synthesize=_useStatusCodes
- (id)initWithURL:(id)url useStatusCodes:(BOOL)codes;	// 0x33fa5ea5
- (void)appendKey:(GEOTileKey *)key;	// 0x33fa5fa9
- (void)dealloc;	// 0x33fa5f45
// declared property getter: - (id)keys;	// 0x33fa5fd9
// declared property getter: - (id)url;	// 0x33fa5fe9
// declared property getter: - (BOOL)useStatusCodes;	// 0x33fa5fc9
@end


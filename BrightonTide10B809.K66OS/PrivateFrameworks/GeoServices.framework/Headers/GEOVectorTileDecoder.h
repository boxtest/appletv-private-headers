/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GEOTileDecoder.h"
#import "GeoServices-Structs.h"


@interface GEOVectorTileDecoder : NSObject <GEOTileDecoder> {
}
- (BOOL)canDecodeTile:(const GEOTileKey *)tile quickly:(BOOL *)quickly;	// 0x33f53edd
- (id)decodeTile:(id)tile forKey:(const GEOTileKey *)key;	// 0x33f58861
@end

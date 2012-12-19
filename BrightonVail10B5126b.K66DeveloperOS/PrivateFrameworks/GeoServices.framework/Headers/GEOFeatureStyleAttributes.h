/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "GeoServices-Structs.h"


@interface GEOFeatureStyleAttributes : NSObject <NSCopying> {
	struct {
		unsigned key;
		int value;
	} v[16];	// 4 = 0x4
}
- (id)init;	// 0x33f4f325
- (id)copyWithZone:(NSZone *)zone;	// 0x33f5c185
- (id)description;	// 0x33fe6449
- (unsigned)hash;	// 0x33fe6415
- (BOOL)isEqual:(id)equal;	// 0x33fe63fd
- (BOOL)isFreeway;	// 0x33fe6561
- (BOOL)isRamp;	// 0x33fe652d
- (BOOL)isTunnel;	// 0x33fe64f9
- (void)sort;	// 0x33f5cda1
@end

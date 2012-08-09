/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library


@interface GEOFeatureStyleAttributes : NSObject <NSCopying> {
	struct {
		unsigned key;
		int value;
	} v[16];	// 4 = 0x4
}
- (id)init;	// 0x3458ea3d
- (id)copyWithZone:(NSZone *)zone;	// 0x3458ea85
- (id)description;	// 0x3458ead5
- (BOOL)isRamp;	// 0x3458ebd9
- (BOOL)isTunnel;	// 0x3458eba5
- (void)sort;	// 0x3458eb6d
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <NSObject.h> // Unknown library

@class NSData;

__attribute__((visibility("hidden")))
@interface GEOVoltaireRasterTileImageData : NSObject {
@private
	NSData *_data;	// 4 = 0x4
}
+ (id)createWithData:(id)data;	// 0x34b10d65
- (id)initWithData:(id)data;	// 0x34b10d0d
- (void)dealloc;	// 0x34b10dad
- (CGImageRef)newImage;	// 0x34b10df9
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@protocol BRPosterImageDataSource;

__attribute__((visibility("hidden")))
@interface BRPosterImageControl : BRControl {
	id<BRPosterImageDataSource> _imageDataSource;	// 84 = 0x54
	XXStruct_qlg9jA _cornerRadius;	// 88 = 0x58
	float _posterBorderWidth;	// 92 = 0x5c
	CGColorRef _posterBorderColor;	// 96 = 0x60
}
- (id)initWithImageDataSource:(id)imageDataSource cornerRadius:(XXStruct_qlg9jA)radius borderWidth:(float)width borderColor:(CGColorRef)color;	// 0x330f95
- (void)dealloc;	// 0x331021
- (void)drawRect:(CGRect)rect;	// 0x331065
@end

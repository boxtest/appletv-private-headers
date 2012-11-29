/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIImage;

__attribute__((visibility("hidden")))
@interface CILumaMap : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIImage *_tableImage;	// 40 = 0x28
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x33ce3a49; S=0x33ce3a59; @synthesize
+ (id)customAttributes;	// 0x33ce365d
- (id)_kernel;	// 0x33ce3661
// declared property getter: - (id)inputImage;	// 0x33ce3a49
- (const char *)lumaTable;	// 0x33ce380d
- (id)outputImage;	// 0x33ce3811
- (void)setDefaults;	// 0x33ce37f9
// declared property setter: - (void)setInputImage:(id)image;	// 0x33ce3a59
@end

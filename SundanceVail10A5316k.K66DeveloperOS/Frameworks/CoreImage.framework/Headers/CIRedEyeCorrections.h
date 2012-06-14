/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class NSArray, NSString, CIImage;

__attribute__((visibility("hidden")))
@interface CIRedEyeCorrections : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	NSString *inputCameraModel;	// 40 = 0x28
	NSArray *inputCorrectionInfo;	// 44 = 0x2c
}
@property(retain, nonatomic) NSString *inputCameraModel;	// G=0x36bbc7b5; S=0x36bbc7c5; @synthesize
@property(retain, nonatomic) NSArray *inputCorrectionInfo;	// G=0x36bbc7e9; S=0x36bbc7f9; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36bbc781; S=0x36bbc791; @synthesize
- (id)_initFromProperties:(id)properties;	// 0x36bbd255
- (BOOL)_isIdentity;	// 0x36bbc3dd
- (id)_outputProperties;	// 0x36bbc81d
// declared property getter: - (id)inputCameraModel;	// 0x36bbc7b5
// declared property getter: - (id)inputCorrectionInfo;	// 0x36bbc7e9
// declared property getter: - (id)inputImage;	// 0x36bbc781
- (id)outputImage;	// 0x36bbc40d
- (void)setDefaults;	// 0x36bbc3a5
// declared property setter: - (void)setInputCameraModel:(id)model;	// 0x36bbc7c5
// declared property setter: - (void)setInputCorrectionInfo:(id)info;	// 0x36bbc7f9
// declared property setter: - (void)setInputImage:(id)image;	// 0x36bbc791
@end

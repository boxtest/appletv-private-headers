/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImageControl, BRReflectionControl;

__attribute__((visibility("hidden")))
@interface BRReflectedImageControl : BRControl {
	BRImageControl *_image;	// 84 = 0x54
	BRReflectionControl *_reflection;	// 88 = 0x58
	float _offset;	// 92 = 0x5c
}
@property(assign) BOOL automaticDownsample;	// G=0x3076dd; S=0x3076bd; converted property
@property(retain) BRImageControl *image;	// G=0x307701; S=0x3075bd; converted property
@property(assign) CGColorRef imageBorderColor;	// G=0x307801; S=0x3077c5; converted property
@property(assign) float imageBorderWidth;	// G=0x30778d; S=0x307751; converted property
@property(assign) float reflectionOffset;	// G=0x307741; S=0x307721; converted property
- (id)init;	// 0x307445
// converted property getter: - (BOOL)automaticDownsample;	// 0x3076dd
- (void)dealloc;	// 0x307559
// converted property getter: - (id)image;	// 0x307701
// converted property getter: - (CGColorRef)imageBorderColor;	// 0x307801
// converted property getter: - (float)imageBorderWidth;	// 0x30778d
- (void)layoutSubcontrols;	// 0x307881
- (CGRect)reflectedImageFrameForImageFrame:(CGRect)imageFrame reflectionAmount:(float)amount;	// 0x307839
// converted property getter: - (float)reflectionOffset;	// 0x307741
// converted property setter: - (void)setAutomaticDownsample:(BOOL)downsample;	// 0x3076bd
// converted property setter: - (void)setImage:(id)image;	// 0x3075bd
- (void)setImageAsContents:(id)contents;	// 0x30763d
// converted property setter: - (void)setImageBorderColor:(CGColorRef)color;	// 0x3077c5
// converted property setter: - (void)setImageBorderWidth:(float)width;	// 0x307751
// converted property setter: - (void)setReflectionOffset:(float)offset;	// 0x307721
@end

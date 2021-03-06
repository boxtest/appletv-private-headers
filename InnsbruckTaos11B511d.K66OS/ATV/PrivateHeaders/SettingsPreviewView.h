/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRReflectionControl, BRProgressBarWidget, BRAsyncImageControl, BRImageControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface SettingsPreviewView : BRControl {
	BRAsyncImageControl *_image;	// 84 = 0x54
	BRReflectionControl *_imageReflectionControl;	// 88 = 0x58
	BRImageControl *_overlayControl;	// 92 = 0x5c
	BRReflectionControl *_overlayReflectionControl;	// 96 = 0x60
	BRTextControl *_progressLabel;	// 100 = 0x64
	BRProgressBarWidget *_progressBar;	// 104 = 0x68
	CGPoint _imageOffset;	// 108 = 0x6c
	CGSize _imageScale;	// 116 = 0x74
	CGPoint _overlayOffset;	// 124 = 0x7c
	CGSize _overlayScale;	// 132 = 0x84
	BRTextControl *_instructionsLabel;	// 140 = 0x8c
}
@property(readonly, assign, nonatomic) BRTextControl *instructionsLabel;	// G=0x2c4f59; @synthesize=_instructionsLabel
@property(assign, getter=isProgressHidden) BOOL progressHidden;	// G=0x2c4d05; S=0x2c4d29; converted property
@property(readonly, retain) BRTextControl *progressLabel;	// G=0x2c4e09; converted property
+ (id)defaultProductImageProxy;	// 0x2c3d81
- (id)init;	// 0x2c3dd5
- (void).cxx_destruct;	// 0x2c4f69
- (void)_imageLoaded:(id)loaded;	// 0x2c4ed5
- (id)accessibilityLabel;	// 0x2c4e1d
- (void)dealloc;	// 0x2c42a9
// declared property getter: - (id)instructionsLabel;	// 0x2c4f59
// converted property getter: - (BOOL)isProgressHidden;	// 0x2c4d05
- (void)layoutSubcontrols;	// 0x2c4389
- (id)progress;	// 0x2c4df5
// converted property getter: - (id)progressLabel;	// 0x2c4e09
- (void)setImage:(id)image withOffset:(CGPoint)offset scale:(CGSize)scale;	// 0x2c4a71
- (void)setImageProxy:(id)proxy;	// 0x2c4979
- (void)setImageProxy:(id)proxy withOffset:(CGPoint)offset scale:(CGSize)scale;	// 0x2c49a5
- (void)setImageReflectionAmount:(float)amount;	// 0x2c4b0d
- (void)setInstructionText:(id)text withAttributes:(id)attributes;	// 0x2c4c6d
- (void)setOverlayImage:(id)image withOffset:(CGPoint)offset scale:(CGSize)scale;	// 0x2c4b61
- (void)setOverlayReflectionAmount:(float)amount;	// 0x2c4c19
// converted property setter: - (void)setProgressHidden:(BOOL)hidden;	// 0x2c4d29
- (void)setProgressLabel:(id)label withAttributes:(id)attributes;	// 0x2c4d6d
- (void)setProgressPercentage:(float)percentage;	// 0x2c4dd5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2c4315
@end


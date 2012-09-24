/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class ATVGameMenuItemContents, NSString, BRImage;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface ATVGameMenuItem : BRControl {
	ATVGameMenuItemContents *_contents;	// 84 = 0x54
}
@property(copy) NSString *detailedText;	// G=0x10e4d9; S=0x10e4f9; 
@property(assign) BOOL dimmed;	// G=0x10e559; S=0x10e57d; 
@property(copy) NSString *imageSeparatorText;	// G=0x10e459; S=0x10e479; 
@property(retain) BRImage *leftImage;	// G=0x10e399; S=0x10e3b9; 
@property(retain) id<BRImageProxy> leftImageProxy;	// G=0x10e359; S=0x10e379; 
@property(retain) BRImage *rightImage;	// G=0x10e3d9; S=0x10e3f9; 
@property(retain) id<BRImageProxy> rightImageProxy;	// G=0x10e419; S=0x10e439; 
@property(copy) NSString *rightJustifiedText;	// G=0x10e519; S=0x10e539; 
@property(copy) NSString *text;	// G=0x10e499; S=0x10e4b9; 
+ (CGRect)contentFrameForControl:(id)control;	// 0x10e691
- (id)init;	// 0x10e065
- (float)accessibilityDelayForScreenContent;	// 0x10e689
- (id)accessibilityLabel;	// 0x10e5a1
- (id)accessibilityTraitsList;	// 0x10e619
- (void)controlWasFocused;	// 0x10e1ad
- (void)controlWasUnfocused;	// 0x10e1fd
- (void)dealloc;	// 0x10e161
// declared property getter: - (id)detailedText;	// 0x10e4d9
// declared property getter: - (BOOL)dimmed;	// 0x10e559
- (void)drawRect:(CGRect)rect;	// 0x10e2f5
- (CGRect)focusCursorFrame;	// 0x10e271
// declared property getter: - (id)imageSeparatorText;	// 0x10e459
- (BOOL)isAccessibilityElement;	// 0x10e59d
// declared property getter: - (id)leftImage;	// 0x10e399
// declared property getter: - (id)leftImageProxy;	// 0x10e359
// declared property getter: - (id)rightImage;	// 0x10e3d9
// declared property getter: - (id)rightImageProxy;	// 0x10e419
// declared property getter: - (id)rightJustifiedText;	// 0x10e519
// declared property setter: - (void)setDetailedText:(id)text;	// 0x10e4f9
// declared property setter: - (void)setDimmed:(BOOL)dimmed;	// 0x10e57d
// declared property setter: - (void)setImageSeparatorText:(id)text;	// 0x10e479
// declared property setter: - (void)setLeftImage:(id)image;	// 0x10e3b9
// declared property setter: - (void)setLeftImageProxy:(id)proxy;	// 0x10e379
// declared property setter: - (void)setRightImage:(id)image;	// 0x10e3f9
// declared property setter: - (void)setRightImageProxy:(id)proxy;	// 0x10e439
// declared property setter: - (void)setRightJustifiedText:(id)text;	// 0x10e539
// declared property setter: - (void)setText:(id)text;	// 0x10e4b9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x10e24d
// declared property getter: - (id)text;	// 0x10e499
@end

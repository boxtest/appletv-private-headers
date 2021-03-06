/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"

@class UIPDFMagnifiedView, UIWindow, UIPDFPageView;

@interface UIPDFViewMagnifyController : NSObject {
	CGPoint _magnifierPoint;	// 4 = 0x4
	CGPoint _touchPoint;	// 12 = 0xc
	float _loupeRadius;	// 20 = 0x14
	float _power;	// 24 = 0x18
	CGSize _magnifierSize;	// 28 = 0x1c
	BOOL _showingLoupe;	// 36 = 0x24
	UIPDFMagnifiedView *_magnifiedView;	// 40 = 0x28
	UIWindow *_textEffectsWindow;	// 44 = 0x2c
	UIPDFPageView *_pageView;	// 48 = 0x30
	float _magnification;	// 52 = 0x34
}
@property(assign, nonatomic) float magnification;	// G=0x3051aaa5; S=0x3051aab5; @synthesize=_magnification
@property(assign, nonatomic) UIPDFPageView *pageView;	// G=0x3051aac5; S=0x3051aad5; @synthesize=_pageView
- (id)init;	// 0x3051aae5
- (CGImageRef)createBackingImage;	// 0x3051b581
- (CGImageRef)createBitMap:(CGRect)map source:(CGRect)source;	// 0x3051b7a9
- (void)hide;	// 0x3051ab9d
// declared property getter: - (float)magnification;	// 0x3051aaa5
- (void)move;	// 0x3051abe5
// declared property getter: - (id)pageView;	// 0x3051aac5
- (void)selectPower;	// 0x3051afb1
// declared property setter: - (void)setMagnification:(float)magnification;	// 0x3051aab5
// declared property setter: - (void)setPageView:(id)view;	// 0x3051aad5
- (void)setPosition:(CGPoint)position viewPoint:(CGPoint)point loupe:(BOOL)loupe;	// 0x3051b9dd
- (void)setSelectionPath;	// 0x3051b0b1
- (void)showGlass:(BOOL)glass size:(CGSize)size;	// 0x3051ad8d
- (void)showLoupe;	// 0x3051ad41
- (void)showMagnifier;	// 0x3051acf9
- (CGPoint)transformPointToTSpace:(CGPoint)tspace transform:(CGAffineTransform *)transform;	// 0x3051b479
@end


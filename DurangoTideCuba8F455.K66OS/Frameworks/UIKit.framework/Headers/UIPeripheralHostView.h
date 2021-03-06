/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIPeripheralHostLayer;

__attribute__((visibility("hidden")))
@interface UIPeripheralHostView : UIView {
@private
	int _explicitLayoutCount;	// 44 = 0x2c
}
@property(readonly, retain, nonatomic) UIPeripheralHostLayer *layer;	// G=0x30105f01; 
+ (Class)layerClass;	// 0x30105e39
- (id)initWithFrame:(CGRect)frame;	// 0x30105dd9
- (BOOL)_shouldUseKeyWindowStack;	// 0x3031b181
- (void)beginExplicitLayout;	// 0x30105ebd
- (void)dealloc;	// 0x3031c99d
- (void)endExplicitLayout;	// 0x30106181
// declared property getter: - (id)layer;	// 0x30105f01
- (void)layoutSubviews;	// 0x3031b621
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x3015d665
- (int)textEffectsVisibilityLevel;	// 0x3015fcfd
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, NSArray;

__attribute__((visibility("hidden")))
@interface UIMovieScrubberEditingView : UIView {
	UIImageView *_leftImageView;	// 84 = 0x54
	UIImageView *_middleImageView;	// 88 = 0x58
	UIImageView *_rightImageView;	// 92 = 0x5c
	NSArray *_activeImages;	// 96 = 0x60
	NSArray *_inactiveImages;	// 100 = 0x64
	unsigned _isActive : 1;	// 104 = 0x68
	unsigned _centerHandleEnabled : 1;	// 104 = 0x68
}
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x32d93ff9; S=0x32d93f1d; 
- (id)initWithFrame:(CGRect)frame;	// 0x32d935e9
- (float)_bounceValueForFraction:(float)fraction;	// 0x32d94459
- (void)bounce;	// 0x32d94011
- (void)dealloc;	// 0x32d93941
- (int)handleForPoint:(CGPoint)point hitOffset:(float *)offset;	// 0x32d93b15
// declared property getter: - (BOOL)isEditing;	// 0x32d93ff9
- (CGRect)leftHandleBounds;	// 0x32d93d45
- (CGRect)leftHandleFrame;	// 0x32d93d61
- (BOOL)pointInsideCenterHandle:(CGPoint)handle;	// 0x32d93a8d
- (BOOL)pointInsideLeftHandle:(CGPoint)handle;	// 0x32d939c9
- (BOOL)pointInsideRightHandle:(CGPoint)handle;	// 0x32d93a11
- (CGRect)rightHandleBounds;	// 0x32d93df9
- (CGRect)rightHandleFrame;	// 0x32d93e55
- (void)setCenterHandleEnabled:(BOOL)enabled;	// 0x32d939a5
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x32d93f1d
@end

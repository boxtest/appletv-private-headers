/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UILongPressGestureRecognizer.h"
#import "UIKit-Structs.h"

@class UIView;
@protocol UITextSelectingContainer;

__attribute__((visibility("hidden")))
@interface UIVariableDelayLoupeGesture : UILongPressGestureRecognizer {
@private
	UIView<UITextSelectingContainer> *_textView;	// 104 = 0x68
}
@property(assign) UIView<UITextSelectingContainer> *textView;	// G=0x32d7548d; S=0x32cc28a5; @synthesize=_textView
- (void)invalidate;	// 0x32d5fd89
- (BOOL)isCloseToCaret;	// 0x32d75381
// declared property setter: - (void)setTextView:(id)view;	// 0x32cc28a5
- (void)startTimer;	// 0x32d75319
// declared property getter: - (id)textView;	// 0x32d7548d
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"

@class UITouch, NSMutableArray, UIKeyboardEmojiView, NSString, NSArray;
@protocol UIKeyboardEmojiController;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiPage : UIControl {
@private
	NSArray *_emoji;	// 72 = 0x48
	NSMutableArray *_emojiViews;	// 76 = 0x4c
	int _numRows;	// 80 = 0x50
	int _numCols;	// 84 = 0x54
	int _numPages;	// 88 = 0x58
	CGPoint _emojiPadding;	// 92 = 0x5c
	CGPoint _margin;	// 100 = 0x64
	CGSize _emojiSize;	// 108 = 0x6c
	CGRect _keyActivationRect;	// 116 = 0x74
	NSString *_optionalText;	// 132 = 0x84
	id<UIKeyboardEmojiController> _controller;	// 136 = 0x88
	UITouch *_activeTouch;	// 140 = 0x8c
	BOOL _needsLayout;	// 144 = 0x90
	UIKeyboardEmojiView *_touched;	// 148 = 0x94
	UIKeyboardEmojiView *_pendingDisplay;	// 152 = 0x98
	UIKeyboardEmojiView *_onDisplay;	// 156 = 0x9c
}
@property(retain) UITouch *activeTouch;	// G=0x35906a39; S=0x35906a4d; @synthesize=_activeTouch
@property(assign) id<UIKeyboardEmojiController> controller;	// G=0x359069e1; S=0x359069f1; @synthesize=_controller
@property(retain) NSArray *emoji;	// G=0x359069a9; S=0x359069bd; @synthesize=_emoji
@property(assign) CGRect keyActivationRect;	// G=0x35906ae1; S=0x35906b05; @synthesize=_keyActivationRect
@property(retain) UIKeyboardEmojiView *onDisplay;	// G=0x35906aa9; S=0x35906abd; @synthesize=_onDisplay
@property(retain) NSString *optionalText;	// G=0x35906a01; S=0x35906a15; @synthesize=_optionalText
@property(retain) UIKeyboardEmojiView *pendingDisplay;	// G=0x35906a71; S=0x35906a85; @synthesize=_pendingDisplay
@property(retain) UIKeyboardEmojiView *touched;	// G=0x35906971; S=0x35906985; @synthesize=_touched
+ (CGSize)emojiSize:(BOOL)size;	// 0x359052d5
- (id)initWithFrame:(CGRect)frame;	// 0x35905119
// declared property getter: - (id)activeTouch;	// 0x35906a39
- (void)cancelPendingPopupChanges;	// 0x35905fe1
- (void)checkForStalePopup:(id)stalePopup;	// 0x359060e1
- (void)clearSubviews;	// 0x35905bfd
- (id)closestForPoint:(CGPoint)point;	// 0x35905e35
- (unsigned char)colCount:(BOOL)count;	// 0x35905375
// declared property getter: - (id)controller;	// 0x359069e1
- (void)deactivatePopUps;	// 0x35905d79
- (void)dealloc;	// 0x359051d1
// declared property getter: - (id)emoji;	// 0x359069a9
- (void)generateSubviews;	// 0x35905789
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x35905e05
// declared property getter: - (CGRect)keyActivationRect;	// 0x35906ae1
- (CGPoint)margin:(BOOL)margin;	// 0x359053bd
// declared property getter: - (id)onDisplay;	// 0x35906aa9
// declared property getter: - (id)optionalText;	// 0x35906a01
- (CGPoint)padding:(BOOL)padding;	// 0x35905425
// declared property getter: - (id)pendingDisplay;	// 0x35906a71
- (CGRect)rectForRow:(int)row Col:(int)col;	// 0x35905679
- (void)removeDisplayedPopup:(id)popup;	// 0x35906095
- (unsigned char)rowCount:(BOOL)count;	// 0x3590532d
// declared property setter: - (void)setActiveTouch:(id)touch;	// 0x35906a4d
// declared property setter: - (void)setController:(id)controller;	// 0x359069f1
// declared property setter: - (void)setEmoji:(id)emoji;	// 0x359069bd
- (void)setFrame:(CGRect)frame;	// 0x359055d5
// declared property setter: - (void)setKeyActivationRect:(CGRect)rect;	// 0x35906b05
// declared property setter: - (void)setOnDisplay:(id)display;	// 0x35906abd
// declared property setter: - (void)setOptionalText:(id)text;	// 0x35906a15
// declared property setter: - (void)setPendingDisplay:(id)display;	// 0x35906a85
// declared property setter: - (void)setTouched:(id)touched;	// 0x35906985
- (void)showPendingPopup:(id)popup;	// 0x35906001
- (int)takeEmoji:(id)emoji fromIndex:(int)index;	// 0x359056fd
- (void)touchBegan:(id)began;	// 0x3590619d
- (void)touchCancelled:(id)cancelled;	// 0x3590663d
- (void)touchEnded:(id)ended;	// 0x359064bd
- (void)touchMoved:(id)moved;	// 0x35906355
// declared property getter: - (id)touched;	// 0x35906971
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x35906701
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x359068d5
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x35906839
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3590679d
- (void)updateLayoutConstants;	// 0x359054a5
@end


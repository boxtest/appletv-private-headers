/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKeyboardEmojiPicker.h"
#import "UIKit-Structs.h"
#import "UIKeyboardEmojiInput.h"

@class UIKeyboardEmojiInputController, UIKeyboardEmojiCategory;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCharacterPicker : UIKeyboardEmojiPicker <UIKeyboardEmojiInput> {
	UIKeyboardEmojiCategory *_category;	// 124 = 0x7c
	UIKeyboardEmojiInputController *_inputController;	// 128 = 0x80
}
@property(assign) UIKeyboardEmojiCategory *category;	// G=0x310348e1; S=0x310348f5; @synthesize=_category
- (id)initWithFrame:(CGRect)frame keyboard:(id)keyboard key:(id)key state:(int)state;	// 0x31034289
// declared property getter: - (id)category;	// 0x310348e1
- (id)charactersForRow:(int)row;	// 0x31034609
- (void)dealloc;	// 0x31034499
- (void)reloadForCategory:(id)category;	// 0x310344e5
- (void)scrollViewWillEndDragging:(id)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(inout CGPoint *)offset;	// 0x310347bd
// declared property setter: - (void)setCategory:(id)category;	// 0x310348f5
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x310346fd
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x310346c5
@end


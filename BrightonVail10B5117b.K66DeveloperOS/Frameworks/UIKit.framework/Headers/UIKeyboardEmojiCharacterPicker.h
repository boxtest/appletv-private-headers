/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardEmojiPicker.h"
#import "UIKeyboardEmojiInput.h"

@class UIKeyboardEmojiInputController, UIKeyboardEmojiCategory;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCharacterPicker : UIKeyboardEmojiPicker <UIKeyboardEmojiInput> {
	UIKeyboardEmojiCategory *_category;	// 124 = 0x7c
	UIKeyboardEmojiInputController *_inputController;	// 128 = 0x80
}
@property(assign) UIKeyboardEmojiCategory *category;	// G=0x330cf221; S=0x330cf235; @synthesize=_category
- (id)initWithFrame:(CGRect)frame keyboard:(id)keyboard key:(id)key state:(int)state;	// 0x330cebe1
// declared property getter: - (id)category;	// 0x330cf221
- (id)charactersForRow:(int)row;	// 0x330cef49
- (void)dealloc;	// 0x330cedf1
- (void)reloadForCategory:(id)category;	// 0x330cee3d
- (void)scrollViewWillEndDragging:(id)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(inout CGPoint *)offset;	// 0x330cf0fd
// declared property setter: - (void)setCategory:(id)category;	// 0x330cf235
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x330cf03d
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x330cf005
@end


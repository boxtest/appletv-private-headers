/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRMenuController.h"
#import "BRMenuListItemProvider.h"

@class NSMutableArray, NSDictionary, NSString;

@interface BROptionDialog : BRMenuController <BRMenuListItemProvider> {
@private
	NSString *_tag;	// 124 = 0x7c
	int _currentSelection;	// 128 = 0x80
	NSDictionary *_userInfo;	// 132 = 0x84
	NSMutableArray *_options;	// 136 = 0x88
	id _delegate;	// 140 = 0x8c
	SEL _actionSelector;	// 144 = 0x90
}
@property(retain) NSString *tag;	// G=0x35de0791; S=0x35de0751; converted property
@property(retain) NSDictionary *userInfo;	// G=0x35de07e1; S=0x35de07a1; converted property
- (id)init;	// 0x35de0425
- (BOOL)_itemSelected:(id)selected;	// 0x35de0919
- (void)_setSelectedIndex:(long)index;	// 0x35de09e1
- (void)addOptionText:(id)text;	// 0x35de0629
- (void)addOptionText:(id)text isDefault:(BOOL)aDefault;	// 0x35de0675
- (void)dealloc;	// 0x35de0545
- (float)heightForRow:(long)row;	// 0x35de0859
- (long)itemCount;	// 0x35de0839
- (id)itemForRow:(long)row;	// 0x35de08a9
- (float)listVerticalOffset;	// 0x35de07f1
- (BOOL)rowSelectable:(long)selectable;	// 0x35de085d
- (long)selectedIndex;	// 0x35de0741
- (id)selectedText;	// 0x35de06ed
- (void)setActionSelector:(SEL)selector target:(id)target;	// 0x35de05d1
// converted property setter: - (void)setTag:(id)tag;	// 0x35de0751
// converted property setter: - (void)setUserInfo:(id)info;	// 0x35de07a1
// converted property getter: - (id)tag;	// 0x35de0791
- (id)titleForRow:(long)row;	// 0x35de0861
// converted property getter: - (id)userInfo;	// 0x35de07e1
@end

